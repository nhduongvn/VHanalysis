#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_algo_all_logY()
{
//=========Macro generated from canvas: Aplanarity_algo_all/Aplanarity_algo_all
//=========  (Thu Mar  9 12:19:51 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_algo_all = new TCanvas("Aplanarity_algo_all", "Aplanarity_algo_all",0,0,600,600);
   Aplanarity_algo_all->SetHighLightColor(2);
   Aplanarity_algo_all->Range(-0.2183529,-3.412631,1.171633,0.4335226);
   Aplanarity_algo_all->SetFillColor(0);
   Aplanarity_algo_all->SetFillStyle(4000);
   Aplanarity_algo_all->SetBorderMode(0);
   Aplanarity_algo_all->SetBorderSize(2);
   Aplanarity_algo_all->SetLogy();
   Aplanarity_algo_all->SetLeftMargin(0.15709);
   Aplanarity_algo_all->SetRightMargin(0.1234783);
   Aplanarity_algo_all->SetBottomMargin(0.12);
   Aplanarity_algo_all->SetFrameFillStyle(1000);
   Aplanarity_algo_all->SetFrameBorderMode(0);
   Aplanarity_algo_all->SetFrameFillStyle(1000);
   Aplanarity_algo_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   
   TH1F *st_stack_128 = new TH1F("st_stack_128","",50,0,1);
   st_stack_128->SetMinimum(17.67184);
   st_stack_128->SetMaximum(1.119199);
   st_stack_128->SetDirectory(0);
   st_stack_128->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_128->SetLineColor(ci);
   st_stack_128->GetXaxis()->SetTitle("Aplanarity");
   st_stack_128->GetXaxis()->SetRange(1,50);
   st_stack_128->GetXaxis()->SetLabelFont(42);
   st_stack_128->GetXaxis()->SetTitleOffset(1);
   st_stack_128->GetXaxis()->SetTitleFont(42);
   st_stack_128->GetYaxis()->SetTitle("Event/0.02");
   st_stack_128->GetYaxis()->SetLabelFont(42);
   st_stack_128->GetYaxis()->SetTitleSize(0.037);
   st_stack_128->GetYaxis()->SetTitleFont(42);
   st_stack_128->GetZaxis()->SetLabelFont(42);
   st_stack_128->GetZaxis()->SetTitleOffset(1);
   st_stack_128->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_128);
   
   
   TH1D *VbbHcc_algo_Aplanarity_all_stack_1 = new TH1D("VbbHcc_algo_Aplanarity_all_stack_1","",50,0,1);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(1,1.048107);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(2,0.7339216);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(3,0.4899865);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(4,0.3230463);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(5,0.2483084);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(6,0.1673363);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(7,0.1520672);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(8,0.1013926);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(9,0.059689);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(10,0.05607975);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(11,0.03648888);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(12,0.02554774);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(13,0.0296336);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(14,0.01793583);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(15,0.00629299);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(16,0.001167415);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(17,0.002833829);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(19,0.001482569);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(1,0.05318546);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(2,0.03667984);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(3,0.03042289);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(4,0.02443949);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(5,0.02112234);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(6,0.01769303);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(7,0.01750645);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(8,0.01389971);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(9,0.01063805);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(10,0.009855089);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(11,0.008239839);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(12,0.007182502);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(13,0.007524823);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(14,0.005567868);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(15,0.003432537);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(16,0.001167415);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(17,0.00200521);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(19,0.001482569);
   VbbHcc_algo_Aplanarity_all_stack_1->SetEntries(2165);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Aplanarity_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_all_stack_1->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_all_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_all_stack_1,"");
   
   TH1D *VbbHcc_algo_Aplanarity_all_stack_2 = new TH1D("VbbHcc_algo_Aplanarity_all_stack_2","",50,0,1);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(1,0.3062831);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(2,0.2621809);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(3,0.1943002);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(4,0.1387034);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(5,0.0970465);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(6,0.07206531);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(7,0.05362077);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(8,0.03236824);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(9,0.0232709);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(10,0.0175341);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(11,0.01032686);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(12,0.00875241);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(13,0.006553944);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(14,0.002101164);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(15,0.001003523);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(16,0.0005917027);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(17,0.0008882199);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(18,0.0002517667);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(19,0.0002361396);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(1,0.008764395);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(2,0.007868733);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(3,0.007207941);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(4,0.005775745);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(5,0.004822327);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(6,0.004105126);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(7,0.003599174);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(8,0.002850098);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(9,0.002356586);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(10,0.002448401);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(11,0.001505873);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(12,0.002392262);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(13,0.00122815);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(14,0.0006760228);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(15,0.0004503162);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(16,0.0003458835);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(17,0.0005176671);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(18,0.0002517667);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(19,0.0001670329);
   VbbHcc_algo_Aplanarity_all_stack_2->SetEntries(5547);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Aplanarity_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_all_stack_2->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_all_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Aplanarity_all_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_all_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_algo_all->Modified();
   Aplanarity_algo_all->cd();
   Aplanarity_algo_all->SetSelected(Aplanarity_algo_all);
}

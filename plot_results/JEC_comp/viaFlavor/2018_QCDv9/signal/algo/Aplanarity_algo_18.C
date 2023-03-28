#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_algo_18()
{
//=========Macro generated from canvas: Aplanarity_algo_18/Aplanarity_algo_18
//=========  (Mon Mar 27 11:09:51 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_algo_18 = new TCanvas("Aplanarity_algo_18", "Aplanarity_algo_18",0,0,600,600);
   Aplanarity_algo_18->SetHighLightColor(2);
   Aplanarity_algo_18->Range(-0.2183529,-0.1519399,1.171633,1.114226);
   Aplanarity_algo_18->SetFillColor(0);
   Aplanarity_algo_18->SetFillStyle(4000);
   Aplanarity_algo_18->SetBorderMode(0);
   Aplanarity_algo_18->SetBorderSize(2);
   Aplanarity_algo_18->SetLeftMargin(0.15709);
   Aplanarity_algo_18->SetRightMargin(0.1234783);
   Aplanarity_algo_18->SetBottomMargin(0.12);
   Aplanarity_algo_18->SetFrameFillStyle(1000);
   Aplanarity_algo_18->SetFrameBorderMode(0);
   Aplanarity_algo_18->SetFrameFillStyle(1000);
   Aplanarity_algo_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(0.9876095);
   
   TH1F *st_stack_159 = new TH1F("st_stack_159","",50,0,1);
   st_stack_159->SetMinimum(0);
   st_stack_159->SetMaximum(0.9876095);
   st_stack_159->SetDirectory(0);
   st_stack_159->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_159->SetLineColor(ci);
   st_stack_159->GetXaxis()->SetTitle("Aplanarity");
   st_stack_159->GetXaxis()->SetRange(1,50);
   st_stack_159->GetXaxis()->SetLabelFont(42);
   st_stack_159->GetXaxis()->SetTitleOffset(1);
   st_stack_159->GetXaxis()->SetTitleFont(42);
   st_stack_159->GetYaxis()->SetTitle("Event/0.02");
   st_stack_159->GetYaxis()->SetLabelFont(42);
   st_stack_159->GetYaxis()->SetTitleSize(0.037);
   st_stack_159->GetYaxis()->SetTitleFont(42);
   st_stack_159->GetZaxis()->SetLabelFont(42);
   st_stack_159->GetZaxis()->SetTitleOffset(1);
   st_stack_159->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_159);
   
   
   TH1D *VbbHcc_algo_Aplanarity_stack_1 = new TH1D("VbbHcc_algo_Aplanarity_stack_1","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(1,0.6237567);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(2,0.1307994);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(3,0.04089161);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(4,0.01666995);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(5,0.009708447);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(6,0.002305427);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(7,0.002532203);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(8,0.005434479);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(9,0.005070539);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(1,0.05660848);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(2,0.01824641);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(3,0.01081113);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(4,0.006877881);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(5,0.006837946);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(6,0.002305427);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(7,0.002532203);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(8,0.003930538);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(9,0.003589093);
   VbbHcc_algo_Aplanarity_stack_1->SetEntries(321);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Aplanarity_stack_1->SetFillColor(ci);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_2 = new TH1D("VbbHcc_algo_Aplanarity_stack_2","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(1,0.1959592);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(2,0.05704387);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(3,0.0131042);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(4,0.005378955);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(5,0.004242316);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(6,0.004110127);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(7,0.001100458);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(8,0.0008412608);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(9,0.0009126804);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(10,0.000280877);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(11,0.0001447381);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(1,0.0089323);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(2,0.004479671);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(3,0.002120689);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(4,0.001397753);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(5,0.00121471);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(6,0.00130068);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(7,0.0006004518);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(8,0.0005067532);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(9,0.0005290411);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(10,0.000280877);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(11,0.0001447381);
   VbbHcc_algo_Aplanarity_stack_2->SetEntries(830);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Aplanarity_stack_2->SetFillColor(ci);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_algo_18->Modified();
   Aplanarity_algo_18->cd();
   Aplanarity_algo_18->SetSelected(Aplanarity_algo_18);
}

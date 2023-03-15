#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_algo_all()
{
//=========Macro generated from canvas: Aplanarity_algo_all/Aplanarity_algo_all
//=========  (Thu Mar  9 13:09:06 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_algo_all = new TCanvas("Aplanarity_algo_all", "Aplanarity_algo_all",0,0,600,600);
   Aplanarity_algo_all->SetHighLightColor(2);
   Aplanarity_algo_all->Range(-0.2183529,-0.3390991,1.171633,2.486726);
   Aplanarity_algo_all->SetFillColor(0);
   Aplanarity_algo_all->SetFillStyle(4000);
   Aplanarity_algo_all->SetBorderMode(0);
   Aplanarity_algo_all->SetBorderSize(2);
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
   st->SetMaximum(2.204144);
   
   TH1F *st_stack_128 = new TH1F("st_stack_128","",50,0,1);
   st_stack_128->SetMinimum(0);
   st_stack_128->SetMaximum(2.204144);
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
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(1,1.415728);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(2,0.991343);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(3,0.6618482);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(4,0.4363541);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(5,0.335402);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(6,0.2260291);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(7,0.2054044);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(8,0.1369559);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(9,0.08062478);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(10,0.07574959);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(11,0.04928727);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(12,0.03450855);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(13,0.04002752);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(14,0.02422678);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(15,0.008500242);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(16,0.001576883);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(17,0.003827788);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(19,0.002002576);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(1,0.07184014);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(2,0.0495452);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(3,0.04109365);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(4,0.03301158);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(5,0.02853095);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(6,0.02389882);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(7,0.02364679);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(8,0.01877501);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(9,0.01436932);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(10,0.01331174);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(11,0.01112994);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(12,0.009701748);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(13,0.01016414);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(14,0.007520785);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(15,0.004636492);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(16,0.001576883);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(17,0.002708533);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(19,0.002002576);
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
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(1,0.4137112);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(2,0.3541402);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(3,0.2624505);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(4,0.1873533);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(5,0.1310853);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(6,0.09734205);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(7,0.07242814);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(8,0.04372132);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(9,0.03143312);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(10,0.02368414);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(11,0.01394898);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(12,0.0118223);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(13,0.008852725);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(14,0.002838143);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(15,0.001355507);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(16,0.0007992411);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(17,0.001199761);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(18,0.0003400733);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(19,0.000318965);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(1,0.01183849);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(2,0.01062867);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(3,0.00973611);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(4,0.007801574);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(5,0.006513747);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(6,0.00554499);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(7,0.004861576);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(8,0.003849764);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(9,0.003183154);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(10,0.003307172);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(11,0.002034054);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(12,0.003231342);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(13,0.00165892);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(14,0.0009131363);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(15,0.0006082636);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(16,0.0004672014);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(17,0.0006992376);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(18,0.0003400733);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(19,0.0002256193);
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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_algo_all->Modified();
   Aplanarity_algo_all->cd();
   Aplanarity_algo_all->SetSelected(Aplanarity_algo_all);
}

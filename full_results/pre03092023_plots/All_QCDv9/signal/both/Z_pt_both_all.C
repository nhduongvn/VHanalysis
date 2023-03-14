#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_pt_both_all()
{
//=========Macro generated from canvas: Z_pt_both_all/Z_pt_both_all
//=========  (Thu Feb 16 10:35:20 2023) by ROOT version 6.26/06
   TCanvas *Z_pt_both_all = new TCanvas("Z_pt_both_all", "Z_pt_both_all",0,0,600,600);
   Z_pt_both_all->SetHighLightColor(2);
   Z_pt_both_all->Range(37.97653,-1.074747,1705.96,7.881479);
   Z_pt_both_all->SetFillColor(0);
   Z_pt_both_all->SetFillStyle(4000);
   Z_pt_both_all->SetBorderMode(0);
   Z_pt_both_all->SetBorderSize(2);
   Z_pt_both_all->SetLeftMargin(0.15709);
   Z_pt_both_all->SetRightMargin(0.1234783);
   Z_pt_both_all->SetBottomMargin(0.12);
   Z_pt_both_all->SetFrameFillStyle(1000);
   Z_pt_both_all->SetFrameBorderMode(0);
   Z_pt_both_all->SetFrameFillStyle(1000);
   Z_pt_both_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(6.985856);
   
   TH1F *st_stack_140 = new TH1F("st_stack_140","",40,0,2000);
   st_stack_140->SetMinimum(0);
   st_stack_140->SetMaximum(6.985856);
   st_stack_140->SetDirectory(0);
   st_stack_140->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_140->SetLineColor(ci);
   st_stack_140->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   st_stack_140->GetXaxis()->SetRange(7,30);
   st_stack_140->GetXaxis()->SetLabelFont(42);
   st_stack_140->GetXaxis()->SetTitleOffset(1);
   st_stack_140->GetXaxis()->SetTitleFont(42);
   st_stack_140->GetYaxis()->SetTitle("Events/50.0");
   st_stack_140->GetYaxis()->SetLabelFont(42);
   st_stack_140->GetYaxis()->SetTitleSize(0.037);
   st_stack_140->GetYaxis()->SetTitleFont(42);
   st_stack_140->GetZaxis()->SetLabelFont(42);
   st_stack_140->GetZaxis()->SetTitleOffset(1);
   st_stack_140->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_140);
   
   
   TH1D *VbbHcc_both_Z_pt_all_stack_1 = new TH1D("VbbHcc_both_Z_pt_all_stack_1","",40,0,2000);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(1,1.564349);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(2,3.532083);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(3,4.657238);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(4,3.306489);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(5,2.103024);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(6,1.289147);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(7,0.7405682);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(8,0.4955738);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(9,0.2005196);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(10,0.09596049);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(11,0.05302983);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(12,0.02628171);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(13,0.01677793);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(14,0.01555051);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(15,0.008686272);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(16,0.003340468);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(17,0.01218356);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(18,0.001938755);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(26,0.002001313);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(27,0.001842579);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(1,0.06401128);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(2,0.09468357);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(3,0.1081914);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(4,0.1026276);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(5,0.07709491);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(6,0.05789063);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(7,0.04272855);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(8,0.04030255);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(9,0.02208178);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(10,0.01550451);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(11,0.01215357);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(12,0.008049625);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(13,0.006190439);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(14,0.00608771);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(15,0.004363029);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(16,0.003340468);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(17,0.007578939);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(18,0.001938755);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(26,0.002001313);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(27,0.001842579);
   VbbHcc_both_Z_pt_all_stack_1->SetEntries(8153);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_pt_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_pt_all_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_pt_all_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_both_Z_pt_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_pt_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_pt_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_pt_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_pt_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_pt_all_stack_1,"");
   
   TH1D *VbbHcc_both_Z_pt_all_stack_2 = new TH1D("VbbHcc_both_Z_pt_all_stack_2","",40,0,2000);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(1,0.5111736);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(2,1.152563);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(3,2.048093);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(4,1.731211);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(5,1.097077);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(6,0.6265705);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(7,0.3028529);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(8,0.1764888);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(9,0.06557031);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(10,0.03096324);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(11,0.009382277);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(12,0.006521183);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(13,0.001837994);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(14,0.001983087);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(15,0.0009351897);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(16,0.001388519);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(17,0.0003720141);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(19,0.0009761577);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(20,0.0003105083);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(21,0.0006273928);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(23,0.0003858223);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(26,0.0002536154);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(1,0.01397636);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(2,0.01931226);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(3,0.02624046);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(4,0.02457222);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(5,0.01880918);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(6,0.01457772);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(7,0.009852289);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(8,0.007649082);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(9,0.004528525);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(10,0.0031506);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(11,0.001731515);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(12,0.00143048);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(13,0.0007336789);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(14,0.0007803521);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(15,0.0005645983);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(16,0.0006978046);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(17,0.0003720141);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(19,0.0005662284);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(20,0.0003105083);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(21,0.000455775);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(23,0.0003858223);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(26,0.0002536154);
   VbbHcc_both_Z_pt_all_stack_2->SetEntries(26049);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_pt_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_pt_all_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_pt_all_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_both_Z_pt_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_pt_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_pt_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_pt_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_pt_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_pt_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_pt_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_pt_all_stack_1","ZHcc","F");

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
   Z_pt_both_all->Modified();
   Z_pt_both_all->cd();
   Z_pt_both_all->SetSelected(Z_pt_both_all);
}

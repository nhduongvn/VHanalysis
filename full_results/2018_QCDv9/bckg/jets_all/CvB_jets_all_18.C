void CvB_jets_all_18()
{
//=========Macro generated from canvas: CvB_jets_all_18/CvB_jets_all_18
//=========  (Thu Dec 15 10:05:12 2022) by ROOT version 6.14/09
   TCanvas *CvB_jets_all_18 = new TCanvas("CvB_jets_all_18", "CvB_jets_all_18",0,0,600,600);
   CvB_jets_all_18->SetHighLightColor(2);
   CvB_jets_all_18->Range(-0.2183529,-3.801076e+11,1.171633,2.787456e+12);
   CvB_jets_all_18->SetFillColor(0);
   CvB_jets_all_18->SetFillStyle(4000);
   CvB_jets_all_18->SetBorderMode(0);
   CvB_jets_all_18->SetBorderSize(2);
   CvB_jets_all_18->SetLeftMargin(0.15709);
   CvB_jets_all_18->SetRightMargin(0.1234783);
   CvB_jets_all_18->SetBottomMargin(0.12);
   CvB_jets_all_18->SetFrameFillStyle(1000);
   CvB_jets_all_18->SetFrameBorderMode(0);
   CvB_jets_all_18->SetFrameFillStyle(1000);
   CvB_jets_all_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(2.353047e+12);
   
   TH1F *st_stack_59 = new TH1F("st_stack_59","",20,0,1);
   st_stack_59->SetMinimum(0);
   st_stack_59->SetMaximum(2.470699e+12);
   st_stack_59->SetDirectory(0);
   st_stack_59->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_59->SetLineColor(ci);
   st_stack_59->GetXaxis()->SetTitle("CvB tagging score");
   st_stack_59->GetXaxis()->SetRange(1,20);
   st_stack_59->GetXaxis()->SetLabelFont(42);
   st_stack_59->GetXaxis()->SetLabelSize(0.035);
   st_stack_59->GetXaxis()->SetTitleSize(0.035);
   st_stack_59->GetXaxis()->SetTitleFont(42);
   st_stack_59->GetYaxis()->SetTitle("Events/0.05");
   st_stack_59->GetYaxis()->SetLabelFont(42);
   st_stack_59->GetYaxis()->SetLabelSize(0.035);
   st_stack_59->GetYaxis()->SetTitleSize(0.037);
   st_stack_59->GetYaxis()->SetTitleOffset(0);
   st_stack_59->GetYaxis()->SetTitleFont(42);
   st_stack_59->GetZaxis()->SetLabelFont(42);
   st_stack_59->GetZaxis()->SetLabelSize(0.035);
   st_stack_59->GetZaxis()->SetTitleSize(0.035);
   st_stack_59->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_59);
   
   
   TH1D *VbbHcc_jets_all_CvB_stack_1 = new TH1D("VbbHcc_jets_all_CvB_stack_1","",20,0,1);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(1,5.381828e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(2,1.625017e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(3,1.537414e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(4,1.878194e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(5,2.605996e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(6,3.839157e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(7,5.671135e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(8,8.326396e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(9,1.288021e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(10,2.277227e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(11,4.52092e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(12,1.474958e+12);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(13,1.568652e+12);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(14,1.023302e+12);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(15,8.970359e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(16,9.720986e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(17,1.173945e+12);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(18,1.211331e+12);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(19,5.544659e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(20,3.235934e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(1,3.825371e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(2,2.056195e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(3,2.009126e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(4,2.219024e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(5,2.610934e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(6,3.141346e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(7,3.813902e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(8,4.606711e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(9,5.707674e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(10,7.538845e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(11,1.058425e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(12,1.897765e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(13,1.956635e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(14,1.612586e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(15,1.554144e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(16,1.632662e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(17,1.80209e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(18,1.818815e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(19,1.228537e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(20,2.827109e+07);
   VbbHcc_jets_all_CvB_stack_1->SetEntries(1.858216e+09);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_all_CvB_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_CvB_stack_1->SetLineColor(ci);
   VbbHcc_jets_all_CvB_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CvB_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_CvB_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_CvB_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvB_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_CvB_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_CvB_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_all_CvB_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvB_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_CvB_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_CvB_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CvB_stack_1,"");
   
   TH1D *VbbHcc_jets_all_CvB_stack_2 = new TH1D("VbbHcc_jets_all_CvB_stack_2","",20,0,1);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(1,4.156826e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(2,7161016);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(3,4990109);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(4,4708631);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(5,4767755);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(6,4794086);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(7,5203895);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(8,6166332);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(9,8021074);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(10,1.06955e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(11,1.661458e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(12,4.231645e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(13,4.633207e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(14,3.482602e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(15,3.378582e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(16,3.687396e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(17,4.385136e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(18,4.73256e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(19,3.581153e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(20,5135750);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(1,1926.429);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(2,795.9062);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(3,662.7749);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(4,642.3403);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(5,642.2502);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(6,642.7436);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(7,667.7017);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(8,723.5354);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(9,817.5708);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(10,937.6986);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(11,1160.252);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(12,1820.978);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(13,1910.424);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(14,1695.213);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(15,1711.245);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(16,1816.958);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(17,1996.341);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(18,2107.731);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(19,1868.349);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(20,709.4472);
   VbbHcc_jets_all_CvB_stack_2->SetEntries(6.389881e+09);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_all_CvB_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_CvB_stack_2->SetLineColor(ci);
   VbbHcc_jets_all_CvB_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CvB_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_CvB_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_CvB_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvB_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_CvB_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_CvB_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_all_CvB_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvB_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_CvB_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_CvB_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CvB_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.62,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_CvB_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_CvB_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvB_jets_all_18->Modified();
   CvB_jets_all_18->cd();
   CvB_jets_all_18->SetSelected(CvB_jets_all_18);
}

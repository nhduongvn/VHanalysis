#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_jets_bckg_17()
{
//=========Macro generated from canvas: CvL_jets_bckg_17/CvL_jets_bckg_17
//=========  (Wed Mar  1 14:06:11 2023) by ROOT version 6.26/06
   TCanvas *CvL_jets_bckg_17 = new TCanvas("CvL_jets_bckg_17", "CvL_jets_bckg_17",0,0,600,600);
   CvL_jets_bckg_17->SetHighLightColor(2);
   CvL_jets_bckg_17->Range(-0.2183529,-9.428621e+10,1.171633,6.914322e+11);
   CvL_jets_bckg_17->SetFillColor(0);
   CvL_jets_bckg_17->SetFillStyle(4000);
   CvL_jets_bckg_17->SetBorderMode(0);
   CvL_jets_bckg_17->SetBorderSize(2);
   CvL_jets_bckg_17->SetLeftMargin(0.15709);
   CvL_jets_bckg_17->SetRightMargin(0.1234783);
   CvL_jets_bckg_17->SetBottomMargin(0.12);
   CvL_jets_bckg_17->SetFrameFillStyle(1000);
   CvL_jets_bckg_17->SetFrameBorderMode(0);
   CvL_jets_bckg_17->SetFrameFillStyle(1000);
   CvL_jets_bckg_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(6.128603e+11);
   
   TH1F *st_stack_16 = new TH1F("st_stack_16","",20,0,1);
   st_stack_16->SetMinimum(0);
   st_stack_16->SetMaximum(6.128603e+11);
   st_stack_16->SetDirectory(0);
   st_stack_16->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_16->SetLineColor(ci);
   st_stack_16->GetXaxis()->SetTitle("CvL tagging score");
   st_stack_16->GetXaxis()->SetRange(1,20);
   st_stack_16->GetXaxis()->SetLabelFont(42);
   st_stack_16->GetXaxis()->SetTitleOffset(1);
   st_stack_16->GetXaxis()->SetTitleFont(42);
   st_stack_16->GetYaxis()->SetTitle("Events/0.05");
   st_stack_16->GetYaxis()->SetLabelFont(42);
   st_stack_16->GetYaxis()->SetTitleSize(0.037);
   st_stack_16->GetYaxis()->SetTitleFont(42);
   st_stack_16->GetZaxis()->SetLabelFont(42);
   st_stack_16->GetZaxis()->SetTitleOffset(1);
   st_stack_16->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_16);
   
   
   TH1D *VbbHcc_jets_CvL_stack_1 = new TH1D("VbbHcc_jets_CvL_stack_1","",20,0,1);
   VbbHcc_jets_CvL_stack_1->SetBinContent(1,4.085537e+11);
   VbbHcc_jets_CvL_stack_1->SetBinContent(2,3.19789e+11);
   VbbHcc_jets_CvL_stack_1->SetBinContent(3,8.377348e+10);
   VbbHcc_jets_CvL_stack_1->SetBinContent(4,3.330293e+10);
   VbbHcc_jets_CvL_stack_1->SetBinContent(5,1.756552e+10);
   VbbHcc_jets_CvL_stack_1->SetBinContent(6,1.126825e+10);
   VbbHcc_jets_CvL_stack_1->SetBinContent(7,7.875698e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(8,5.756506e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(9,4.598233e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(10,3.8896e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(11,3.401302e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(12,3.039035e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(13,2.821088e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(14,2.757901e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(15,2.873679e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(16,3.1209e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(17,3.492722e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(18,4.308636e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(19,5.818769e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(20,1.705998e+10);
   VbbHcc_jets_CvL_stack_1->SetBinError(1,7.626656e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(2,6.700548e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(3,3.420294e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(4,2.152326e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(5,1.562551e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(6,1.250964e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(7,1.046039e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(8,8936186);
   VbbHcc_jets_CvL_stack_1->SetBinError(9,7992915);
   VbbHcc_jets_CvL_stack_1->SetBinError(10,7350123);
   VbbHcc_jets_CvL_stack_1->SetBinError(11,6863301);
   VbbHcc_jets_CvL_stack_1->SetBinError(12,6484932);
   VbbHcc_jets_CvL_stack_1->SetBinError(13,6238696);
   VbbHcc_jets_CvL_stack_1->SetBinError(14,6170848);
   VbbHcc_jets_CvL_stack_1->SetBinError(15,6296417);
   VbbHcc_jets_CvL_stack_1->SetBinError(16,6555269);
   VbbHcc_jets_CvL_stack_1->SetBinError(17,6920807);
   VbbHcc_jets_CvL_stack_1->SetBinError(18,7677891);
   VbbHcc_jets_CvL_stack_1->SetBinError(19,8898319);
   VbbHcc_jets_CvL_stack_1->SetBinError(20,1.531639e+07);
   VbbHcc_jets_CvL_stack_1->SetEntries(6.322382e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_CvL_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_CvL_stack_1->SetLineColor(ci);
   VbbHcc_jets_CvL_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_CvL_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_CvL_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvL_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_CvL_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_CvL_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_CvL_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_CvL_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvL_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_CvL_stack_1,"");
   
   TH1D *VbbHcc_jets_CvL_stack_2 = new TH1D("VbbHcc_jets_CvL_stack_2","",20,0,1);
   VbbHcc_jets_CvL_stack_2->SetBinContent(1,1.989177e+07);
   VbbHcc_jets_CvL_stack_2->SetBinContent(2,2.370012e+07);
   VbbHcc_jets_CvL_stack_2->SetBinContent(3,8457484);
   VbbHcc_jets_CvL_stack_2->SetBinContent(4,4122254);
   VbbHcc_jets_CvL_stack_2->SetBinContent(5,2589543);
   VbbHcc_jets_CvL_stack_2->SetBinContent(6,1986685);
   VbbHcc_jets_CvL_stack_2->SetBinContent(7,1654985);
   VbbHcc_jets_CvL_stack_2->SetBinContent(8,1447497);
   VbbHcc_jets_CvL_stack_2->SetBinContent(9,1356303);
   VbbHcc_jets_CvL_stack_2->SetBinContent(10,1343728);
   VbbHcc_jets_CvL_stack_2->SetBinContent(11,1381384);
   VbbHcc_jets_CvL_stack_2->SetBinContent(12,1449576);
   VbbHcc_jets_CvL_stack_2->SetBinContent(13,1599690);
   VbbHcc_jets_CvL_stack_2->SetBinContent(14,1812192);
   VbbHcc_jets_CvL_stack_2->SetBinContent(15,2142228);
   VbbHcc_jets_CvL_stack_2->SetBinContent(16,2635591);
   VbbHcc_jets_CvL_stack_2->SetBinContent(17,3312833);
   VbbHcc_jets_CvL_stack_2->SetBinContent(18,4468273);
   VbbHcc_jets_CvL_stack_2->SetBinContent(19,6354746);
   VbbHcc_jets_CvL_stack_2->SetBinContent(20,1.434603e+07);
   VbbHcc_jets_CvL_stack_2->SetBinError(1,1175.238);
   VbbHcc_jets_CvL_stack_2->SetBinError(2,1287.603);
   VbbHcc_jets_CvL_stack_2->SetBinError(3,767.2845);
   VbbHcc_jets_CvL_stack_2->SetBinError(4,534.2386);
   VbbHcc_jets_CvL_stack_2->SetBinError(5,421.9303);
   VbbHcc_jets_CvL_stack_2->SetBinError(6,368.3999);
   VbbHcc_jets_CvL_stack_2->SetBinError(7,335.3654);
   VbbHcc_jets_CvL_stack_2->SetBinError(8,312.971);
   VbbHcc_jets_CvL_stack_2->SetBinError(9,302.4393);
   VbbHcc_jets_CvL_stack_2->SetBinError(10,300.576);
   VbbHcc_jets_CvL_stack_2->SetBinError(11,304.2819);
   VbbHcc_jets_CvL_stack_2->SetBinError(12,311.2081);
   VbbHcc_jets_CvL_stack_2->SetBinError(13,326.3377);
   VbbHcc_jets_CvL_stack_2->SetBinError(14,346.9144);
   VbbHcc_jets_CvL_stack_2->SetBinError(15,376.7647);
   VbbHcc_jets_CvL_stack_2->SetBinError(16,417.5316);
   VbbHcc_jets_CvL_stack_2->SetBinError(17,467.7208);
   VbbHcc_jets_CvL_stack_2->SetBinError(18,542.8302);
   VbbHcc_jets_CvL_stack_2->SetBinError(19,647.2139);
   VbbHcc_jets_CvL_stack_2->SetBinError(20,976.3505);
   VbbHcc_jets_CvL_stack_2->SetEntries(1.751569e+09);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_CvL_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_CvL_stack_2->SetLineColor(ci);
   VbbHcc_jets_CvL_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_CvL_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_CvL_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvL_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_CvL_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_CvL_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_CvL_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_CvL_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvL_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_CvL_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_CvL_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
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
   entry=leg->AddEntry("VbbHcc_jets_CvL_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvL_jets_bckg_17->Modified();
   CvL_jets_bckg_17->cd();
   CvL_jets_bckg_17->SetSelected(CvL_jets_bckg_17);
}

#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_jets_bckg_16()
{
//=========Macro generated from canvas: CvL_jets_bckg_16/CvL_jets_bckg_16
//=========  (Thu Mar  9 13:30:48 2023) by ROOT version 6.26/06
   TCanvas *CvL_jets_bckg_16 = new TCanvas("CvL_jets_bckg_16", "CvL_jets_bckg_16",0,0,600,600);
   CvL_jets_bckg_16->SetHighLightColor(2);
   CvL_jets_bckg_16->Range(-0.2183529,-5.685205e+10,1.171633,4.16915e+11);
   CvL_jets_bckg_16->SetFillColor(0);
   CvL_jets_bckg_16->SetFillStyle(4000);
   CvL_jets_bckg_16->SetBorderMode(0);
   CvL_jets_bckg_16->SetBorderSize(2);
   CvL_jets_bckg_16->SetLeftMargin(0.15709);
   CvL_jets_bckg_16->SetRightMargin(0.1234783);
   CvL_jets_bckg_16->SetBottomMargin(0.12);
   CvL_jets_bckg_16->SetFrameFillStyle(1000);
   CvL_jets_bckg_16->SetFrameBorderMode(0);
   CvL_jets_bckg_16->SetFrameFillStyle(1000);
   CvL_jets_bckg_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(3.695383e+11);
   
   TH1F *st_stack_14 = new TH1F("st_stack_14","",20,0,1);
   st_stack_14->SetMinimum(0);
   st_stack_14->SetMaximum(3.695383e+11);
   st_stack_14->SetDirectory(0);
   st_stack_14->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_14->SetLineColor(ci);
   st_stack_14->GetXaxis()->SetTitle("CvL tagging score");
   st_stack_14->GetXaxis()->SetRange(1,20);
   st_stack_14->GetXaxis()->SetLabelFont(42);
   st_stack_14->GetXaxis()->SetTitleOffset(1);
   st_stack_14->GetXaxis()->SetTitleFont(42);
   st_stack_14->GetYaxis()->SetTitle("Event/0.05");
   st_stack_14->GetYaxis()->SetLabelFont(42);
   st_stack_14->GetYaxis()->SetTitleSize(0.037);
   st_stack_14->GetYaxis()->SetTitleFont(42);
   st_stack_14->GetZaxis()->SetLabelFont(42);
   st_stack_14->GetZaxis()->SetTitleOffset(1);
   st_stack_14->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_14);
   
   
   TH1D *VbbHcc_jets_CvL_stack_1 = new TH1D("VbbHcc_jets_CvL_stack_1","",20,0,1);
   VbbHcc_jets_CvL_stack_1->SetBinContent(1,3.067014e+11);
   VbbHcc_jets_CvL_stack_1->SetBinContent(2,2.882672e+11);
   VbbHcc_jets_CvL_stack_1->SetBinContent(3,7.59262e+10);
   VbbHcc_jets_CvL_stack_1->SetBinContent(4,2.866641e+10);
   VbbHcc_jets_CvL_stack_1->SetBinContent(5,1.433574e+10);
   VbbHcc_jets_CvL_stack_1->SetBinContent(6,8.805425e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(7,5.925489e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(8,4.250234e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(9,3.330721e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(10,2.787924e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(11,2.41303e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(12,2.128724e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(13,2.000951e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(14,1.964091e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(15,2.036377e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(16,2.192071e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(17,2.426897e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(18,2.92284e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(19,3.683335e+09);
   VbbHcc_jets_CvL_stack_1->SetBinContent(20,7.795153e+09);
   VbbHcc_jets_CvL_stack_1->SetBinError(1,7.516825e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(2,7.226418e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(3,3.693313e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(4,2.263161e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(5,1.599067e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(6,1.252561e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(7,1.027728e+07);
   VbbHcc_jets_CvL_stack_1->SetBinError(8,8701417);
   VbbHcc_jets_CvL_stack_1->SetBinError(9,7700520);
   VbbHcc_jets_CvL_stack_1->SetBinError(10,7045379);
   VbbHcc_jets_CvL_stack_1->SetBinError(11,6548250);
   VbbHcc_jets_CvL_stack_1->SetBinError(12,6141217);
   VbbHcc_jets_CvL_stack_1->SetBinError(13,5952140);
   VbbHcc_jets_CvL_stack_1->SetBinError(14,5892481);
   VbbHcc_jets_CvL_stack_1->SetBinError(15,5997483);
   VbbHcc_jets_CvL_stack_1->SetBinError(16,6214386);
   VbbHcc_jets_CvL_stack_1->SetBinError(17,6522823);
   VbbHcc_jets_CvL_stack_1->SetBinError(18,7140545);
   VbbHcc_jets_CvL_stack_1->SetBinError(19,7991952);
   VbbHcc_jets_CvL_stack_1->SetBinError(20,1.167086e+07);
   VbbHcc_jets_CvL_stack_1->SetEntries(5.454877e+08);

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
   VbbHcc_jets_CvL_stack_2->SetBinContent(1,1.535062e+07);
   VbbHcc_jets_CvL_stack_2->SetBinContent(2,2.175571e+07);
   VbbHcc_jets_CvL_stack_2->SetBinContent(3,8258900);
   VbbHcc_jets_CvL_stack_2->SetBinContent(4,4060785);
   VbbHcc_jets_CvL_stack_2->SetBinContent(5,2543740);
   VbbHcc_jets_CvL_stack_2->SetBinContent(6,1937189);
   VbbHcc_jets_CvL_stack_2->SetBinContent(7,1593491);
   VbbHcc_jets_CvL_stack_2->SetBinContent(8,1382986);
   VbbHcc_jets_CvL_stack_2->SetBinContent(9,1284756);
   VbbHcc_jets_CvL_stack_2->SetBinContent(10,1254772);
   VbbHcc_jets_CvL_stack_2->SetBinContent(11,1270092);
   VbbHcc_jets_CvL_stack_2->SetBinContent(12,1314680);
   VbbHcc_jets_CvL_stack_2->SetBinContent(13,1433478);
   VbbHcc_jets_CvL_stack_2->SetBinContent(14,1595931);
   VbbHcc_jets_CvL_stack_2->SetBinContent(15,1841842);
   VbbHcc_jets_CvL_stack_2->SetBinContent(16,2202314);
   VbbHcc_jets_CvL_stack_2->SetBinContent(17,2680216);
   VbbHcc_jets_CvL_stack_2->SetBinContent(18,3463354);
   VbbHcc_jets_CvL_stack_2->SetBinContent(19,4483542);
   VbbHcc_jets_CvL_stack_2->SetBinContent(20,7390734);
   VbbHcc_jets_CvL_stack_2->SetBinError(1,1007.771);
   VbbHcc_jets_CvL_stack_2->SetBinError(2,1201.33);
   VbbHcc_jets_CvL_stack_2->SetBinError(3,737.1996);
   VbbHcc_jets_CvL_stack_2->SetBinError(4,515.3714);
   VbbHcc_jets_CvL_stack_2->SetBinError(5,406.5435);
   VbbHcc_jets_CvL_stack_2->SetBinError(6,353.8099);
   VbbHcc_jets_CvL_stack_2->SetBinError(7,320.2012);
   VbbHcc_jets_CvL_stack_2->SetBinError(8,297.818);
   VbbHcc_jets_CvL_stack_2->SetBinError(9,286.7197);
   VbbHcc_jets_CvL_stack_2->SetBinError(10,283.0799);
   VbbHcc_jets_CvL_stack_2->SetBinError(11,284.5128);
   VbbHcc_jets_CvL_stack_2->SetBinError(12,289.1617);
   VbbHcc_jets_CvL_stack_2->SetBinError(13,301.6198);
   VbbHcc_jets_CvL_stack_2->SetBinError(14,318.0423);
   VbbHcc_jets_CvL_stack_2->SetBinError(15,341.5048);
   VbbHcc_jets_CvL_stack_2->SetBinError(16,373.2942);
   VbbHcc_jets_CvL_stack_2->SetBinError(17,411.6791);
   VbbHcc_jets_CvL_stack_2->SetBinError(18,467.9103);
   VbbHcc_jets_CvL_stack_2->SetBinError(19,532.5679);
   VbbHcc_jets_CvL_stack_2->SetBinError(20,686.5881);
   VbbHcc_jets_CvL_stack_2->SetEntries(1.442507e+09);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   CvL_jets_bckg_16->Modified();
   CvL_jets_bckg_16->cd();
   CvL_jets_bckg_16->SetSelected(CvL_jets_bckg_16);
}

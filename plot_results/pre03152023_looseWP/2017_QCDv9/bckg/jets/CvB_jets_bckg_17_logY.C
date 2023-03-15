#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_jets_bckg_17_logY()
{
//=========Macro generated from canvas: CvB_jets_bckg_17/CvB_jets_bckg_17
//=========  (Fri Mar 10 14:09:13 2023) by ROOT version 6.26/06
   TCanvas *CvB_jets_bckg_17 = new TCanvas("CvB_jets_bckg_17", "CvB_jets_bckg_17",0,0,600,600);
   CvB_jets_bckg_17->SetHighLightColor(2);
   CvB_jets_bckg_17->Range(-0.2183529,-1.624934,1.171633,13.59441);
   CvB_jets_bckg_17->SetFillColor(0);
   CvB_jets_bckg_17->SetFillStyle(4000);
   CvB_jets_bckg_17->SetBorderMode(0);
   CvB_jets_bckg_17->SetBorderSize(2);
   CvB_jets_bckg_17->SetLogy();
   CvB_jets_bckg_17->SetLeftMargin(0.15709);
   CvB_jets_bckg_17->SetRightMargin(0.1234783);
   CvB_jets_bckg_17->SetBottomMargin(0.12);
   CvB_jets_bckg_17->SetFrameFillStyle(1000);
   CvB_jets_bckg_17->SetFrameBorderMode(0);
   CvB_jets_bckg_17->SetFrameFillStyle(1000);
   CvB_jets_bckg_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(3.79234e+11);
   
   TH1F *st_stack_22 = new TH1F("st_stack_22","",20,0,1);
   st_stack_22->SetMinimum(1.589963);
   st_stack_22->SetMaximum(1.18161e+12);
   st_stack_22->SetDirectory(0);
   st_stack_22->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_22->SetLineColor(ci);
   st_stack_22->GetXaxis()->SetTitle("CvB tagging score");
   st_stack_22->GetXaxis()->SetRange(1,20);
   st_stack_22->GetXaxis()->SetLabelFont(42);
   st_stack_22->GetXaxis()->SetTitleOffset(1);
   st_stack_22->GetXaxis()->SetTitleFont(42);
   st_stack_22->GetYaxis()->SetTitle("Event/0.05");
   st_stack_22->GetYaxis()->SetLabelFont(42);
   st_stack_22->GetYaxis()->SetTitleSize(0.037);
   st_stack_22->GetYaxis()->SetTitleFont(42);
   st_stack_22->GetZaxis()->SetLabelFont(42);
   st_stack_22->GetZaxis()->SetTitleOffset(1);
   st_stack_22->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_22);
   
   
   TH1D *VbbHcc_jets_CvB_stack_1 = new TH1D("VbbHcc_jets_CvB_stack_1","",20,0,1);
   VbbHcc_jets_CvB_stack_1->SetBinContent(1,1.40701e+10);
   VbbHcc_jets_CvB_stack_1->SetBinContent(2,2.552334e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(3,1.952131e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(4,2.013668e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(5,2.223823e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(6,2.54724e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(7,3.000115e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(8,3.682877e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(9,4.815372e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(10,6.649334e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(11,9.05963e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(12,1.272004e+10);
   VbbHcc_jets_CvB_stack_1->SetBinContent(13,1.886784e+10);
   VbbHcc_jets_CvB_stack_1->SetBinContent(14,2.799421e+10);
   VbbHcc_jets_CvB_stack_1->SetBinContent(15,4.55394e+10);
   VbbHcc_jets_CvB_stack_1->SetBinContent(16,7.794039e+10);
   VbbHcc_jets_CvB_stack_1->SetBinContent(17,1.510255e+11);
   VbbHcc_jets_CvB_stack_1->SetBinContent(18,3.147467e+11);
   VbbHcc_jets_CvB_stack_1->SetBinContent(19,2.25129e+11);
   VbbHcc_jets_CvB_stack_1->SetBinContent(20,1.853548e+10);
   VbbHcc_jets_CvB_stack_1->SetBinError(1,1.378124e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(2,5861189);
   VbbHcc_jets_CvB_stack_1->SetBinError(3,5122578);
   VbbHcc_jets_CvB_stack_1->SetBinError(4,5220525);
   VbbHcc_jets_CvB_stack_1->SetBinError(5,5497810);
   VbbHcc_jets_CvB_stack_1->SetBinError(6,5899225);
   VbbHcc_jets_CvB_stack_1->SetBinError(7,6413237);
   VbbHcc_jets_CvB_stack_1->SetBinError(8,7120942);
   VbbHcc_jets_CvB_stack_1->SetBinError(9,8161068);
   VbbHcc_jets_CvB_stack_1->SetBinError(10,9610740);
   VbbHcc_jets_CvB_stack_1->SetBinError(11,1.123961e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(12,1.334093e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(13,1.625751e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(14,1.983976e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(15,2.533138e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(16,3.319488e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(17,4.613765e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(18,6.652108e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(19,5.678333e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(20,1.575707e+07);
   VbbHcc_jets_CvB_stack_1->SetEntries(6.274349e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_CvB_stack_1->SetFillColor(ci);
   VbbHcc_jets_CvB_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_CvB_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_CvB_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvB_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_CvB_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_CvB_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_CvB_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_CvB_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvB_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_CvB_stack_1,"");
   
   TH1D *VbbHcc_jets_CvB_stack_2 = new TH1D("VbbHcc_jets_CvB_stack_2","",20,0,1);
   VbbHcc_jets_CvB_stack_2->SetBinContent(1,2.145085e+07);
   VbbHcc_jets_CvB_stack_2->SetBinContent(2,3063679);
   VbbHcc_jets_CvB_stack_2->SetBinContent(3,1982487);
   VbbHcc_jets_CvB_stack_2->SetBinContent(4,1732322);
   VbbHcc_jets_CvB_stack_2->SetBinContent(5,1575135);
   VbbHcc_jets_CvB_stack_2->SetBinContent(6,1417847);
   VbbHcc_jets_CvB_stack_2->SetBinContent(7,1363213);
   VbbHcc_jets_CvB_stack_2->SetBinContent(8,1360757);
   VbbHcc_jets_CvB_stack_2->SetBinContent(9,1479155);
   VbbHcc_jets_CvB_stack_2->SetBinContent(10,1600778);
   VbbHcc_jets_CvB_stack_2->SetBinContent(11,1742388);
   VbbHcc_jets_CvB_stack_2->SetBinContent(12,1990832);
   VbbHcc_jets_CvB_stack_2->SetBinContent(13,2521020);
   VbbHcc_jets_CvB_stack_2->SetBinContent(14,3204050);
   VbbHcc_jets_CvB_stack_2->SetBinContent(15,4415518);
   VbbHcc_jets_CvB_stack_2->SetBinContent(16,6319388);
   VbbHcc_jets_CvB_stack_2->SetBinContent(17,1.012218e+07);
   VbbHcc_jets_CvB_stack_2->SetBinContent(18,1.749543e+07);
   VbbHcc_jets_CvB_stack_2->SetBinContent(19,1.805006e+07);
   VbbHcc_jets_CvB_stack_2->SetBinContent(20,3165917);
   VbbHcc_jets_CvB_stack_2->SetBinError(1,1186.948);
   VbbHcc_jets_CvB_stack_2->SetBinError(2,448.9774);
   VbbHcc_jets_CvB_stack_2->SetBinError(3,361.524);
   VbbHcc_jets_CvB_stack_2->SetBinError(4,338.3127);
   VbbHcc_jets_CvB_stack_2->SetBinError(5,323.0385);
   VbbHcc_jets_CvB_stack_2->SetBinError(6,306.9187);
   VbbHcc_jets_CvB_stack_2->SetBinError(7,301.3818);
   VbbHcc_jets_CvB_stack_2->SetBinError(8,301.5103);
   VbbHcc_jets_CvB_stack_2->SetBinError(9,314.7264);
   VbbHcc_jets_CvB_stack_2->SetBinError(10,327.955);
   VbbHcc_jets_CvB_stack_2->SetBinError(11,342.8163);
   VbbHcc_jets_CvB_stack_2->SetBinError(12,367.079);
   VbbHcc_jets_CvB_stack_2->SetBinError(13,413.8356);
   VbbHcc_jets_CvB_stack_2->SetBinError(14,467.3152);
   VbbHcc_jets_CvB_stack_2->SetBinError(15,550.1367);
   VbbHcc_jets_CvB_stack_2->SetBinError(16,661.2823);
   VbbHcc_jets_CvB_stack_2->SetBinError(17,839.5065);
   VbbHcc_jets_CvB_stack_2->SetBinError(18,1107.228);
   VbbHcc_jets_CvB_stack_2->SetBinError(19,1133.715);
   VbbHcc_jets_CvB_stack_2->SetBinError(20,475.158);
   VbbHcc_jets_CvB_stack_2->SetEntries(1.745238e+09);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_CvB_stack_2->SetFillColor(ci);
   VbbHcc_jets_CvB_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_CvB_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_CvB_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvB_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_CvB_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_CvB_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_CvB_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_CvB_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvB_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_CvB_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_CvB_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_jets_CvB_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   CvB_jets_bckg_17->Modified();
   CvB_jets_bckg_17->cd();
   CvB_jets_bckg_17->SetSelected(CvB_jets_bckg_17);
}

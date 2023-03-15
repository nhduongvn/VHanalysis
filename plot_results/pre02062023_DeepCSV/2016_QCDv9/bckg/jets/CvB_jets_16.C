#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_jets_16()
{
//=========Macro generated from canvas: CvB_jets_16/CvB_jets_16
//=========  (Mon Dec 19 11:02:46 2022) by ROOT version 6.26/06
   TCanvas *CvB_jets_16 = new TCanvas("CvB_jets_16", "CvB_jets_16",0,0,600,600);
   CvB_jets_16->SetHighLightColor(2);
   CvB_jets_16->Range(-0.2183529,-1.095469e+11,1.171633,8.033436e+11);
   CvB_jets_16->SetFillColor(0);
   CvB_jets_16->SetFillStyle(4000);
   CvB_jets_16->SetBorderMode(0);
   CvB_jets_16->SetBorderSize(2);
   CvB_jets_16->SetLeftMargin(0.15709);
   CvB_jets_16->SetRightMargin(0.1234783);
   CvB_jets_16->SetBottomMargin(0.12);
   CvB_jets_16->SetFrameFillStyle(1000);
   CvB_jets_16->SetFrameBorderMode(0);
   CvB_jets_16->SetFrameFillStyle(1000);
   CvB_jets_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(7.120545e+11);
   
   TH1F *st_stack_13 = new TH1F("st_stack_13","",20,0,1);
   st_stack_13->SetMinimum(0);
   st_stack_13->SetMaximum(7.120545e+11);
   st_stack_13->SetDirectory(0);
   st_stack_13->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_13->SetLineColor(ci);
   st_stack_13->GetXaxis()->SetTitle("CvB tagging score");
   st_stack_13->GetXaxis()->SetRange(1,20);
   st_stack_13->GetXaxis()->SetLabelFont(42);
   st_stack_13->GetXaxis()->SetTitleOffset(1);
   st_stack_13->GetXaxis()->SetTitleFont(42);
   st_stack_13->GetYaxis()->SetTitle("Events/0.05");
   st_stack_13->GetYaxis()->SetLabelFont(42);
   st_stack_13->GetYaxis()->SetTitleSize(0.037);
   st_stack_13->GetYaxis()->SetTitleFont(42);
   st_stack_13->GetZaxis()->SetLabelFont(42);
   st_stack_13->GetZaxis()->SetTitleOffset(1);
   st_stack_13->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_13);
   
   
   TH1D *VbbHcc_jets_CvB_stack_1 = new TH1D("VbbHcc_jets_CvB_stack_1","",20,0,1);
   VbbHcc_jets_CvB_stack_1->SetBinContent(1,1.868836e+10);
   VbbHcc_jets_CvB_stack_1->SetBinContent(2,4.41473e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(3,3.459893e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(4,3.547927e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(5,4.189713e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(6,5.133893e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(7,6.389798e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(8,8.167121e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(9,1.099057e+10);
   VbbHcc_jets_CvB_stack_1->SetBinContent(10,1.661612e+10);
   VbbHcc_jets_CvB_stack_1->SetBinContent(11,2.359849e+10);
   VbbHcc_jets_CvB_stack_1->SetBinContent(12,3.356721e+10);
   VbbHcc_jets_CvB_stack_1->SetBinContent(13,4.879514e+10);
   VbbHcc_jets_CvB_stack_1->SetBinContent(14,7.098609e+10);
   VbbHcc_jets_CvB_stack_1->SetBinContent(15,1.145863e+11);
   VbbHcc_jets_CvB_stack_1->SetBinContent(16,1.878695e+11);
   VbbHcc_jets_CvB_stack_1->SetBinContent(17,3.186644e+11);
   VbbHcc_jets_CvB_stack_1->SetBinContent(18,4.746831e+11);
   VbbHcc_jets_CvB_stack_1->SetBinContent(19,2.435161e+11);
   VbbHcc_jets_CvB_stack_1->SetBinContent(20,1.49697e+10);
   VbbHcc_jets_CvB_stack_1->SetBinError(1,1.744577e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(2,8521486);
   VbbHcc_jets_CvB_stack_1->SetBinError(3,7548125);
   VbbHcc_jets_CvB_stack_1->SetBinError(4,7653779);
   VbbHcc_jets_CvB_stack_1->SetBinError(5,8335340);
   VbbHcc_jets_CvB_stack_1->SetBinError(6,9248779);
   VbbHcc_jets_CvB_stack_1->SetBinError(7,1.033606e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(8,1.169378e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(9,1.358462e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(10,1.673537e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(11,1.995944e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(12,2.382808e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(13,2.873353e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(14,3.468172e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(15,4.408944e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(16,5.648842e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(17,7.345262e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(18,8.908369e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(19,6.36233e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(20,1.504125e+07);
   VbbHcc_jets_CvB_stack_1->SetEntries(6.712362e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_CvB_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_CvB_stack_1->SetLineColor(ci);
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
   VbbHcc_jets_CvB_stack_2->SetBinContent(1,1.835285e+07);
   VbbHcc_jets_CvB_stack_2->SetBinContent(2,3278048);
   VbbHcc_jets_CvB_stack_2->SetBinContent(3,2164497);
   VbbHcc_jets_CvB_stack_2->SetBinContent(4,1885495);
   VbbHcc_jets_CvB_stack_2->SetBinContent(5,1808747);
   VbbHcc_jets_CvB_stack_2->SetBinContent(6,1704712);
   VbbHcc_jets_CvB_stack_2->SetBinContent(7,1674469);
   VbbHcc_jets_CvB_stack_2->SetBinContent(8,1733806);
   VbbHcc_jets_CvB_stack_2->SetBinContent(9,1914389);
   VbbHcc_jets_CvB_stack_2->SetBinContent(10,2179568);
   VbbHcc_jets_CvB_stack_2->SetBinContent(11,2465787);
   VbbHcc_jets_CvB_stack_2->SetBinContent(12,2878684);
   VbbHcc_jets_CvB_stack_2->SetBinContent(13,3691132);
   VbbHcc_jets_CvB_stack_2->SetBinContent(14,4856623);
   VbbHcc_jets_CvB_stack_2->SetBinContent(15,6785435);
   VbbHcc_jets_CvB_stack_2->SetBinContent(16,9448586);
   VbbHcc_jets_CvB_stack_2->SetBinContent(17,1.387704e+07);
   VbbHcc_jets_CvB_stack_2->SetBinContent(18,1.990825e+07);
   VbbHcc_jets_CvB_stack_2->SetBinContent(19,1.70474e+07);
   VbbHcc_jets_CvB_stack_2->SetBinContent(20,2382683);
   VbbHcc_jets_CvB_stack_2->SetBinError(1,1151.12);
   VbbHcc_jets_CvB_stack_2->SetBinError(2,485.9401);
   VbbHcc_jets_CvB_stack_2->SetBinError(3,395.072);
   VbbHcc_jets_CvB_stack_2->SetBinError(4,369.0095);
   VbbHcc_jets_CvB_stack_2->SetBinError(5,361.7052);
   VbbHcc_jets_CvB_stack_2->SetBinError(6,351.3326);
   VbbHcc_jets_CvB_stack_2->SetBinError(7,348.4827);
   VbbHcc_jets_CvB_stack_2->SetBinError(8,354.5267);
   VbbHcc_jets_CvB_stack_2->SetBinError(9,372.3676);
   VbbHcc_jets_CvB_stack_2->SetBinError(10,398.4463);
   VbbHcc_jets_CvB_stack_2->SetBinError(11,425.1139);
   VbbHcc_jets_CvB_stack_2->SetBinError(12,460.5919);
   VbbHcc_jets_CvB_stack_2->SetBinError(13,523.032);
   VbbHcc_jets_CvB_stack_2->SetBinError(14,600.77);
   VbbHcc_jets_CvB_stack_2->SetBinError(15,713.4802);
   VbbHcc_jets_CvB_stack_2->SetBinError(16,847.198);
   VbbHcc_jets_CvB_stack_2->SetBinError(17,1031.217);
   VbbHcc_jets_CvB_stack_2->SetBinError(18,1241.645);
   VbbHcc_jets_CvB_stack_2->SetBinError(19,1159.523);
   VbbHcc_jets_CvB_stack_2->SetBinError(20,433.3564);
   VbbHcc_jets_CvB_stack_2->SetEntries(1.778388e+09);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_CvB_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_CvB_stack_2->SetLineColor(ci);
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

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
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
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvB_jets_16->Modified();
   CvB_jets_16->cd();
   CvB_jets_16->SetSelected(CvB_jets_16);
}

#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_algo_18()
{
//=========Macro generated from canvas: Z_dR_algo_18/Z_dR_algo_18
//=========  (Tue Feb 14 16:10:10 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_algo_18 = new TCanvas("Z_dR_algo_18", "Z_dR_algo_18",0,0,600,600);
   Z_dR_algo_18->SetHighLightColor(2);
   Z_dR_algo_18->Range(-1.310117,-317561,7.029799,2328781);
   Z_dR_algo_18->SetFillColor(0);
   Z_dR_algo_18->SetFillStyle(4000);
   Z_dR_algo_18->SetBorderMode(0);
   Z_dR_algo_18->SetBorderSize(2);
   Z_dR_algo_18->SetLeftMargin(0.15709);
   Z_dR_algo_18->SetRightMargin(0.1234783);
   Z_dR_algo_18->SetBottomMargin(0.12);
   Z_dR_algo_18->SetFrameFillStyle(1000);
   Z_dR_algo_18->SetFrameBorderMode(0);
   Z_dR_algo_18->SetFrameFillStyle(1000);
   Z_dR_algo_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(2064147);
   
   TH1F *st_stack_83 = new TH1F("st_stack_83","",30,0,6);
   st_stack_83->SetMinimum(0);
   st_stack_83->SetMaximum(2064147);
   st_stack_83->SetDirectory(0);
   st_stack_83->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_83->SetLineColor(ci);
   st_stack_83->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_83->GetXaxis()->SetRange(1,30);
   st_stack_83->GetXaxis()->SetLabelFont(42);
   st_stack_83->GetXaxis()->SetTitleOffset(1);
   st_stack_83->GetXaxis()->SetTitleFont(42);
   st_stack_83->GetYaxis()->SetTitle("Events/0.2");
   st_stack_83->GetYaxis()->SetLabelFont(42);
   st_stack_83->GetYaxis()->SetTitleSize(0.037);
   st_stack_83->GetYaxis()->SetTitleFont(42);
   st_stack_83->GetZaxis()->SetLabelFont(42);
   st_stack_83->GetZaxis()->SetTitleOffset(1);
   st_stack_83->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_83);
   
   
   TH1D *VbbHcc_algo_Z_dR_stack_1 = new TH1D("VbbHcc_algo_Z_dR_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(2,399.8405);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(3,910606.7);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(4,1366867);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(5,794493);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(6,668999.6);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(7,856201);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(8,683321.1);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(9,550067.3);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(10,548254.5);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(11,393877.4);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(12,429489.4);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(13,286875.5);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(14,325940.5);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(15,242930.6);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(16,372096.3);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(17,168955.5);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(18,74613.35);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(19,61836.24);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(20,27540.96);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(21,21153.19);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(22,34582.49);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(23,2183.107);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(24,2860.396);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(25,598.6122);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(26,1304.654);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(27,21.45213);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(2,382.0561);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(3,67199.4);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(4,117294.1);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(5,69654.82);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(6,66284.23);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(7,100079.8);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(8,76352.58);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(9,70900.1);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(10,71900.53);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(11,49599.3);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(12,68369.07);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(13,38428.4);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(14,58151.77);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(15,39514.03);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(16,70315.38);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(17,48733.42);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(18,11607.61);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(19,25091.52);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(20,7039.134);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(21,6434.405);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(22,28743.92);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(23,757.1173);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(24,1048.041);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(25,374.0789);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(26,1217.326);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(27,14.60941);
   VbbHcc_algo_Z_dR_stack_1->SetEntries(36309);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_2 = new TH1D("VbbHcc_algo_Z_dR_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(2,3.610086);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(3,4122.14);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(4,9230.421);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(5,12311.25);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(6,15445.79);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(7,17670.18);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(8,18575.69);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(9,18547.55);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(10,17393.73);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(11,15873.29);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(12,14024.63);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(13,12239.23);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(14,10783.77);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(15,9670.851);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(16,8301.089);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(17,3872.651);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(18,1909.252);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(19,973.7191);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(20,512.2743);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(21,254.9928);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(22,114.007);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(23,53.35952);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(24,23.09545);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(25,9.898703);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(26,2.91869);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(27,0.6175284);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(28,0.03058839);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(2,0.566177);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(3,19.35333);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(4,28.9572);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(5,33.29857);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(6,38.69252);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(7,40.70675);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(8,40.9812);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(9,41.13859);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(10,39.76089);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(11,37.9452);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(12,35.51777);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(13,32.77919);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(14,31.39796);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(15,29.63222);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(16,27.09839);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(17,18.73086);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(18,13.33547);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(19,8.949271);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(20,6.454937);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(21,4.751944);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(22,3.235218);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(23,2.119699);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(24,1.357684);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(25,0.8685754);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(26,0.4615626);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(27,0.2541603);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(28,0.1114146);
   VbbHcc_algo_Z_dR_stack_2->SetEntries(2592187);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_algo_18->Modified();
   Z_dR_algo_18->cd();
   Z_dR_algo_18->SetSelected(Z_dR_algo_18);
}

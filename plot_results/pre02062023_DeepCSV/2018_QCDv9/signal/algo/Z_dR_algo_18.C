#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_algo_18()
{
//=========Macro generated from canvas: Z_dR_algo_18/Z_dR_algo_18
//=========  (Wed Jan 18 11:40:23 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_algo_18 = new TCanvas("Z_dR_algo_18", "Z_dR_algo_18",0,0,600,600);
   Z_dR_algo_18->SetHighLightColor(2);
   Z_dR_algo_18->Range(-1.310117,-0.15767,7.029799,1.156246);
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
   st->SetMaximum(1.024855);
   
   TH1F *st_stack_83 = new TH1F("st_stack_83","",30,0,6);
   st_stack_83->SetMinimum(0);
   st_stack_83->SetMaximum(1.024855);
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
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(3,0.1356137);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(4,0.1679758);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(5,0.4427628);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(6,0.50019);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(7,0.516284);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(8,0.4186649);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(9,0.3105297);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(10,0.2696759);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(11,0.1726634);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(12,0.1035383);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(13,0.06187511);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(14,0.04005187);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(15,0.05235833);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(16,0.04135959);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(17,0.01428088);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(18,0.008313037);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(19,0.006630474);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(22,0.002278067);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(3,0.01902177);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(4,0.02150592);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(5,0.034928);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(6,0.03700681);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(7,0.03757418);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(8,0.03331919);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(9,0.02907872);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(10,0.02715749);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(11,0.02084887);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(12,0.01748311);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(13,0.01232307);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(14,0.009997434);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(15,0.01125645);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(16,0.0100966);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(17,0.006464235);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(18,0.00431426);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(19,0.004689205);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(22,0.002278067);
   VbbHcc_algo_Z_dR_stack_1->SetEntries(1458);

   ci = TColor::GetColor("#cc0000");
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
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(3,0.02360937);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(4,0.06104125);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(5,0.155617);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(6,0.1830465);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(7,0.1386557);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(8,0.09493005);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(9,0.05471791);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(10,0.03995953);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(11,0.02897138);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(12,0.01719309);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(13,0.01447005);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(14,0.01280619);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(15,0.00941455);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(16,0.00793691);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(17,0.00480897);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(18,0.003138088);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(19,0.002373809);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(20,0.0003708078);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(22,0.0004949126);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(23,0.0004822421);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(3,0.002943697);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(4,0.004893107);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(5,0.007789838);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(6,0.008568807);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(7,0.007244533);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(8,0.006051169);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(9,0.004621077);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(10,0.003890255);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(11,0.003331511);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(12,0.002548486);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(13,0.002318483);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(14,0.00225494);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(15,0.001829737);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(16,0.001740063);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(17,0.001372912);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(18,0.001119851);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(19,0.0009454998);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(20,0.0003708078);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(22,0.0004949126);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(23,0.0004822421);
   VbbHcc_algo_Z_dR_stack_2->SetEntries(2500);

   ci = TColor::GetColor("#00cc00");
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
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_1","ZHcc","F");

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
   Z_dR_algo_18->Modified();
   Z_dR_algo_18->cd();
   Z_dR_algo_18->SetSelected(Z_dR_algo_18);
}

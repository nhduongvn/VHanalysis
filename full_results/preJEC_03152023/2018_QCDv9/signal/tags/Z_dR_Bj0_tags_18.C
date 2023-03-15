#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_tags_18()
{
//=========Macro generated from canvas: Z_dR_Bj0_tags_18/Z_dR_Bj0_tags_18
//=========  (Thu Mar  9 13:09:05 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj0_tags_18 = new TCanvas("Z_dR_Bj0_tags_18", "Z_dR_Bj0_tags_18",0,0,600,600);
   Z_dR_Bj0_tags_18->SetHighLightColor(2);
   Z_dR_Bj0_tags_18->Range(-1.310117,-0.4401308,7.029799,3.227626);
   Z_dR_Bj0_tags_18->SetFillColor(0);
   Z_dR_Bj0_tags_18->SetFillStyle(4000);
   Z_dR_Bj0_tags_18->SetBorderMode(0);
   Z_dR_Bj0_tags_18->SetBorderSize(2);
   Z_dR_Bj0_tags_18->SetLeftMargin(0.15709);
   Z_dR_Bj0_tags_18->SetRightMargin(0.1234783);
   Z_dR_Bj0_tags_18->SetBottomMargin(0.12);
   Z_dR_Bj0_tags_18->SetFrameFillStyle(1000);
   Z_dR_Bj0_tags_18->SetFrameBorderMode(0);
   Z_dR_Bj0_tags_18->SetFrameFillStyle(1000);
   Z_dR_Bj0_tags_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(2.86085);
   
   TH1F *st_stack_51 = new TH1F("st_stack_51","",30,0,6);
   st_stack_51->SetMinimum(0);
   st_stack_51->SetMaximum(2.86085);
   st_stack_51->SetDirectory(0);
   st_stack_51->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_51->SetLineColor(ci);
   st_stack_51->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   st_stack_51->GetXaxis()->SetRange(1,30);
   st_stack_51->GetXaxis()->SetLabelFont(42);
   st_stack_51->GetXaxis()->SetTitleOffset(1);
   st_stack_51->GetXaxis()->SetTitleFont(42);
   st_stack_51->GetYaxis()->SetTitle("Event/0.2");
   st_stack_51->GetYaxis()->SetLabelFont(42);
   st_stack_51->GetYaxis()->SetTitleSize(0.037);
   st_stack_51->GetYaxis()->SetTitleFont(42);
   st_stack_51->GetZaxis()->SetLabelFont(42);
   st_stack_51->GetZaxis()->SetTitleOffset(1);
   st_stack_51->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_51);
   
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(1,0.4141887);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(2,1.638549);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(3,1.540691);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(4,0.9922322);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(5,0.6190072);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(6,0.3891553);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(7,0.2753672);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(8,0.2093701);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(9,0.1934398);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(10,0.1388215);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(11,0.1251669);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(12,0.1092366);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(13,0.104685);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(14,0.1183396);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(15,0.1001335);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(16,0.09330624);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(17,0.06372133);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(18,0.03868795);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(19,0.03641219);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(20,0.004551524);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(21,0.004551524);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(22,0.004551524);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(24,0.002275762);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(31,0.002275762);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(1,0.03070171);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(2,0.0610651);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(3,0.05921356);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(4,0.0475193);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(5,0.03753283);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(6,0.02975945);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(7,0.02503338);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(8,0.02182834);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(9,0.02098149);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(10,0.01777427);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(11,0.0168775);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(12,0.01576694);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(13,0.01543497);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(14,0.01641075);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(15,0.0150957);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(16,0.01457199);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(17,0.0120422);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(18,0.009383207);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(19,0.009103048);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(20,0.003218413);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(21,0.003218413);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(22,0.003218413);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(24,0.002275762);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(31,0.002275762);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetEntries(3172);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_2 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(1,0.151027);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(2,0.7359571);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(3,0.7635255);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(4,0.4563773);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(5,0.2310354);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(6,0.1165665);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(7,0.09229429);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(8,0.07880974);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(9,0.06472587);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(10,0.05453754);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(11,0.04794509);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(12,0.04315058);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(13,0.04315058);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(14,0.03865573);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(15,0.03595882);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(16,0.03146396);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(17,0.02037666);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(18,0.01168662);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(19,0.007791077);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(20,0.002996568);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(21,0.001797941);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(22,0.001498284);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(23,0.001498284);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(24,0.0002996568);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(25,0.0008989704);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(26,0.0005993136);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(28,0.0002996568);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(29,0.0005993136);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(1,0.006727278);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(2,0.01485041);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(3,0.01512599);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(4,0.0116943);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(5,0.008320536);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(6,0.005910156);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(7,0.005258955);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(8,0.004859617);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(9,0.004404038);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(10,0.004042591);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(11,0.003790392);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(12,0.003595882);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(13,0.003595882);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(14,0.003403447);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(15,0.003282576);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(16,0.003070568);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(17,0.002471033);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(18,0.001871356);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(19,0.001527956);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(20,0.000947598);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(21,0.0007340063);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(22,0.000670053);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(23,0.000670053);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(24,0.0002996568);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(25,0.0005190208);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(26,0.0004237787);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(28,0.0002996568);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(29,0.0004237787);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetEntries(10130);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_1","ZHcc","F");

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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj0_tags_18->Modified();
   Z_dR_Bj0_tags_18->cd();
   Z_dR_Bj0_tags_18->SetSelected(Z_dR_Bj0_tags_18);
}

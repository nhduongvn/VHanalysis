#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj1_algo_17()
{
//=========Macro generated from canvas: H_dR_Bj1_algo_17/H_dR_Bj1_algo_17
//=========  (Wed Jan 18 11:43:12 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj1_algo_17 = new TCanvas("H_dR_Bj1_algo_17", "H_dR_Bj1_algo_17",0,0,600,600);
   H_dR_Bj1_algo_17->SetHighLightColor(2);
   H_dR_Bj1_algo_17->Range(-1.310117,-204180.4,7.029799,1497323);
   H_dR_Bj1_algo_17->SetFillColor(0);
   H_dR_Bj1_algo_17->SetFillStyle(4000);
   H_dR_Bj1_algo_17->SetBorderMode(0);
   H_dR_Bj1_algo_17->SetBorderSize(2);
   H_dR_Bj1_algo_17->SetLeftMargin(0.15709);
   H_dR_Bj1_algo_17->SetRightMargin(0.1234783);
   H_dR_Bj1_algo_17->SetBottomMargin(0.12);
   H_dR_Bj1_algo_17->SetFrameFillStyle(1000);
   H_dR_Bj1_algo_17->SetFrameBorderMode(0);
   H_dR_Bj1_algo_17->SetFrameFillStyle(1000);
   H_dR_Bj1_algo_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1327172);
   
   TH1F *st_stack_110 = new TH1F("st_stack_110","",30,0,6);
   st_stack_110->SetMinimum(0);
   st_stack_110->SetMaximum(1327172);
   st_stack_110->SetDirectory(0);
   st_stack_110->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_110->SetLineColor(ci);
   st_stack_110->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   st_stack_110->GetXaxis()->SetRange(1,30);
   st_stack_110->GetXaxis()->SetLabelFont(42);
   st_stack_110->GetXaxis()->SetTitleOffset(1);
   st_stack_110->GetXaxis()->SetTitleFont(42);
   st_stack_110->GetYaxis()->SetTitle("Events/0.2");
   st_stack_110->GetYaxis()->SetLabelFont(42);
   st_stack_110->GetYaxis()->SetTitleSize(0.037);
   st_stack_110->GetYaxis()->SetTitleFont(42);
   st_stack_110->GetZaxis()->SetLabelFont(42);
   st_stack_110->GetZaxis()->SetTitleOffset(1);
   st_stack_110->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_110);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(2,393093.4);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(3,824188.4);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(4,792025);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(5,868133.1);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(6,712015);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(7,670189.4);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(8,646927);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(9,525621.2);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(10,411609.1);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(11,556270.2);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(12,522509.4);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(13,299200.8);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(14,389284.3);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(15,285598.9);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(16,275549.9);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(17,190474.4);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(18,126696);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(19,76845.96);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(20,41494.68);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(21,43410.5);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(22,42920.61);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(23,7994.547);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(24,5035.598);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(25,2095.191);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(26,1609.214);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(27,288.9567);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(28,28.90072);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(2,46920.2);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(3,75276.67);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(4,76581.03);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(5,85903.75);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(6,70447.66);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(7,68677.21);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(8,71428.5);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(9,57806.9);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(10,44831.04);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(11,64827.23);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(12,62867.07);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(13,35529.29);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(14,52801.35);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(15,35275.53);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(16,38010.43);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(17,34292.5);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(18,26825.57);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(19,21729.82);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(20,5385.901);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(21,15573.1);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(22,21206.57);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(23,2520.549);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(24,1858.339);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(25,1260.986);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(26,1231.375);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(27,263.9187);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(28,22.0751);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetEntries(41411);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_2 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(1,1.682208);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(2,3238.795);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(3,11311.66);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(4,15981.34);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(5,16648.41);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(6,14682.79);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(7,12365.17);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(8,10373.68);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(9,8633.001);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(10,7241.035);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(11,6074.479);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(12,5240.593);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(13,4587.811);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(14,4136.998);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(15,3812.469);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(16,3452.966);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(17,2036.824);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(18,1330.207);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(19,864.2958);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(20,573.5944);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(21,364.0291);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(22,216.4946);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(23,123.0506);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(24,65.36177);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(25,32.92412);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(26,15.96795);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(27,6.441454);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(28,2.751694);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(29,1.662461);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(30,0.8072494);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(31,1.579801);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(1,0.3165578);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(2,13.74122);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(3,25.73944);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(4,30.78088);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(5,31.63773);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(6,29.91877);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(7,27.58198);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(8,25.31688);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(9,23.07935);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(10,21.11164);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(11,19.27944);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(12,17.86971);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(13,16.6876);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(14,15.82567);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(15,15.18505);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(16,14.43192);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(17,11.0587);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(18,8.916502);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(19,7.181549);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(20,5.840654);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(21,4.659976);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(22,3.589171);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(23,2.699951);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(24,1.966377);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(25,1.40966);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(26,0.9791819);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(27,0.6268285);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(28,0.4119866);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(29,0.3323401);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(30,0.2202869);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(31,0.3217847);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetEntries(2316312);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_H_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_1","QCD","F");

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
   H_dR_Bj1_algo_17->Modified();
   H_dR_Bj1_algo_17->cd();
   H_dR_Bj1_algo_17->SetSelected(H_dR_Bj1_algo_17);
}

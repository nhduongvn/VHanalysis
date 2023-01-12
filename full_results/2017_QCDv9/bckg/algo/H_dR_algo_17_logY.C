#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_algo_17_logY()
{
//=========Macro generated from canvas: H_dR_algo_17/H_dR_algo_17
//=========  (Mon Dec 19 11:15:38 2022) by ROOT version 6.26/06
   TCanvas *H_dR_algo_17 = new TCanvas("H_dR_algo_17", "H_dR_algo_17",0,0,600,600);
   H_dR_algo_17->SetHighLightColor(2);
   H_dR_algo_17->Range(-1.353788,-0.868495,7.264125,9.297574);
   H_dR_algo_17->SetFillColor(0);
   H_dR_algo_17->SetFillStyle(4000);
   H_dR_algo_17->SetBorderMode(0);
   H_dR_algo_17->SetBorderSize(2);
   H_dR_algo_17->SetLogy();
   H_dR_algo_17->SetLeftMargin(0.15709);
   H_dR_algo_17->SetRightMargin(0.1234783);
   H_dR_algo_17->SetBottomMargin(0.12);
   H_dR_algo_17->SetFrameFillStyle(1000);
   H_dR_algo_17->SetFrameBorderMode(0);
   H_dR_algo_17->SetFrameFillStyle(1000);
   H_dR_algo_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(8.021136e+07);
   
   TH1F *st_stack_78 = new TH1F("st_stack_78","",30,0,6);
   st_stack_78->SetMinimum(2.246122);
   st_stack_78->SetMaximum(1.90971e+08);
   st_stack_78->SetDirectory(0);
   st_stack_78->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_78->SetLineColor(ci);
   st_stack_78->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_78->GetXaxis()->SetRange(1,31);
   st_stack_78->GetXaxis()->SetLabelFont(42);
   st_stack_78->GetXaxis()->SetTitleOffset(1);
   st_stack_78->GetXaxis()->SetTitleFont(42);
   st_stack_78->GetYaxis()->SetTitle("Events/0.2");
   st_stack_78->GetYaxis()->SetLabelFont(42);
   st_stack_78->GetYaxis()->SetTitleSize(0.037);
   st_stack_78->GetYaxis()->SetTitleFont(42);
   st_stack_78->GetZaxis()->SetLabelFont(42);
   st_stack_78->GetZaxis()->SetTitleOffset(1);
   st_stack_78->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_78);
   
   
   TH1D *VbbHcc_algo_H_dR_stack_1 = new TH1D("VbbHcc_algo_H_dR_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(2,29.12165);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(3,396220.5);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(4,546277.1);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(5,506539.3);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(6,556110.8);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(7,524608.9);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(8,564519.9);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(9,659508);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(10,604206.6);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(11,608824);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(12,700839.7);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(13,791253.9);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(14,792730.5);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(15,697356);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(16,701343.1);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(17,416017.4);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(18,244219.9);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(19,136604);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(20,96551.45);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(21,54703.86);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(22,21273.6);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(23,9466.391);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(24,25418.27);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(25,3639.819);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(26,2197.571);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(27,284.5925);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(28,3.752867);
   VbbHcc_algo_H_dR_stack_1->SetBinError(2,29.12165);
   VbbHcc_algo_H_dR_stack_1->SetBinError(3,42936.66);
   VbbHcc_algo_H_dR_stack_1->SetBinError(4,59087.68);
   VbbHcc_algo_H_dR_stack_1->SetBinError(5,62840.19);
   VbbHcc_algo_H_dR_stack_1->SetBinError(6,69163.66);
   VbbHcc_algo_H_dR_stack_1->SetBinError(7,63322.73);
   VbbHcc_algo_H_dR_stack_1->SetBinError(8,65868.43);
   VbbHcc_algo_H_dR_stack_1->SetBinError(9,76050.92);
   VbbHcc_algo_H_dR_stack_1->SetBinError(10,67828.36);
   VbbHcc_algo_H_dR_stack_1->SetBinError(11,68186.55);
   VbbHcc_algo_H_dR_stack_1->SetBinError(12,74328.79);
   VbbHcc_algo_H_dR_stack_1->SetBinError(13,79116.78);
   VbbHcc_algo_H_dR_stack_1->SetBinError(14,85757.97);
   VbbHcc_algo_H_dR_stack_1->SetBinError(15,70172.23);
   VbbHcc_algo_H_dR_stack_1->SetBinError(16,76189.82);
   VbbHcc_algo_H_dR_stack_1->SetBinError(17,57837.75);
   VbbHcc_algo_H_dR_stack_1->SetBinError(18,45939.65);
   VbbHcc_algo_H_dR_stack_1->SetBinError(19,33447.6);
   VbbHcc_algo_H_dR_stack_1->SetBinError(20,24214.35);
   VbbHcc_algo_H_dR_stack_1->SetBinError(21,15084.27);
   VbbHcc_algo_H_dR_stack_1->SetBinError(22,4697.448);
   VbbHcc_algo_H_dR_stack_1->SetBinError(23,2834.319);
   VbbHcc_algo_H_dR_stack_1->SetBinError(24,21008.11);
   VbbHcc_algo_H_dR_stack_1->SetBinError(25,2198.529);
   VbbHcc_algo_H_dR_stack_1->SetBinError(26,1496.972);
   VbbHcc_algo_H_dR_stack_1->SetBinError(27,242.0529);
   VbbHcc_algo_H_dR_stack_1->SetBinError(28,3.752867);
   VbbHcc_algo_H_dR_stack_1->SetEntries(44389);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_2 = new TH1D("VbbHcc_algo_H_dR_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(2,1.574424);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(3,2788.756);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(4,6206.685);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(5,8915.3);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(6,11635.24);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(7,12796.58);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(8,12588.4);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(9,12051.95);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(10,11576.56);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(11,11256.15);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(12,10925.59);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(13,10357.99);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(14,9383.186);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(15,8434.407);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(16,7389.303);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(17,4393.123);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(18,2697.779);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(19,1653.207);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(20,983.595);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(21,554.0898);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(22,290.0404);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(23,147.4551);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(24,67.21052);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(25,28.49969);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(26,9.415636);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(27,2.345942);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(28,0.3223475);
   VbbHcc_algo_H_dR_stack_2->SetBinError(2,0.3306713);
   VbbHcc_algo_H_dR_stack_2->SetBinError(3,13.62198);
   VbbHcc_algo_H_dR_stack_2->SetBinError(4,20.32422);
   VbbHcc_algo_H_dR_stack_2->SetBinError(5,24.36565);
   VbbHcc_algo_H_dR_stack_2->SetBinError(6,27.89527);
   VbbHcc_algo_H_dR_stack_2->SetBinError(7,29.44425);
   VbbHcc_algo_H_dR_stack_2->SetBinError(8,29.43792);
   VbbHcc_algo_H_dR_stack_2->SetBinError(9,29.0213);
   VbbHcc_algo_H_dR_stack_2->SetBinError(10,28.56895);
   VbbHcc_algo_H_dR_stack_2->SetBinError(11,28.21183);
   VbbHcc_algo_H_dR_stack_2->SetBinError(12,27.80229);
   VbbHcc_algo_H_dR_stack_2->SetBinError(13,27.05595);
   VbbHcc_algo_H_dR_stack_2->SetBinError(14,25.68643);
   VbbHcc_algo_H_dR_stack_2->SetBinError(15,24.24418);
   VbbHcc_algo_H_dR_stack_2->SetBinError(16,22.6433);
   VbbHcc_algo_H_dR_stack_2->SetBinError(17,17.36858);
   VbbHcc_algo_H_dR_stack_2->SetBinError(18,13.53826);
   VbbHcc_algo_H_dR_stack_2->SetBinError(19,10.52423);
   VbbHcc_algo_H_dR_stack_2->SetBinError(20,8.053921);
   VbbHcc_algo_H_dR_stack_2->SetBinError(21,6.008595);
   VbbHcc_algo_H_dR_stack_2->SetBinError(22,4.31242);
   VbbHcc_algo_H_dR_stack_2->SetBinError(23,3.051591);
   VbbHcc_algo_H_dR_stack_2->SetBinError(24,2.046014);
   VbbHcc_algo_H_dR_stack_2->SetBinError(25,1.333647);
   VbbHcc_algo_H_dR_stack_2->SetBinError(26,0.7627618);
   VbbHcc_algo_H_dR_stack_2->SetBinError(27,0.3788897);
   VbbHcc_algo_H_dR_stack_2->SetBinError(28,0.1216703);
   VbbHcc_algo_H_dR_stack_2->SetEntries(2378377);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_1","QCD","F");

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
   H_dR_algo_17->Modified();
   H_dR_algo_17->cd();
   H_dR_algo_17->SetSelected(H_dR_algo_17);
}

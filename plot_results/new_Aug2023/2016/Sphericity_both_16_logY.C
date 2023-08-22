void Sphericity_both_16_logY()
{
//=========Macro generated from canvas: Sphericity_both_16/Sphericity_both_16
//=========  (Tue Aug 22 09:18:45 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_16 = new TCanvas("Sphericity_both_16", "Sphericity_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_16->SetHighLightColor(2);
   Sphericity_both_16->Range(0,0,1,1);
   Sphericity_both_16->SetFillColor(0);
   Sphericity_both_16->SetFillStyle(4000);
   Sphericity_both_16->SetBorderMode(0);
   Sphericity_both_16->SetBorderSize(2);
   Sphericity_both_16->SetFrameFillStyle(1000);
   Sphericity_both_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-2.856088,1.052419,11.88188);
   topPad->SetFillColor(0);
   topPad->SetBorderMode(0);
   topPad->SetBorderSize(2);
   topPad->SetLogy();
   topPad->SetLeftMargin(0.12709);
   topPad->SetRightMargin(0.0434783);
   topPad->SetBottomMargin(0.001);
   topPad->SetFrameBorderMode(0);
   topPad->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(0.01);
   st->SetMaximum(7.580379e+09);
   
   TH1F *st_stack_249 = new TH1F("st_stack_249","",25,0,1);
   st_stack_249->SetMinimum(0.001440954);
   st_stack_249->SetMaximum(2.559089e+10);
   st_stack_249->SetDirectory(0);
   st_stack_249->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_249->SetLineColor(ci);
   st_stack_249->GetXaxis()->SetRange(1,25);
   st_stack_249->GetXaxis()->SetLabelFont(42);
   st_stack_249->GetXaxis()->SetLabelSize(0.035);
   st_stack_249->GetXaxis()->SetTitleSize(0.035);
   st_stack_249->GetXaxis()->SetTitleFont(42);
   st_stack_249->GetYaxis()->SetTitle("Events/0.04");
   st_stack_249->GetYaxis()->SetLabelFont(42);
   st_stack_249->GetYaxis()->SetLabelSize(0.05);
   st_stack_249->GetYaxis()->SetTitleSize(0.057);
   st_stack_249->GetYaxis()->SetTitleOffset(1.2);
   st_stack_249->GetYaxis()->SetTitleFont(42);
   st_stack_249->GetZaxis()->SetLabelFont(42);
   st_stack_249->GetZaxis()->SetLabelSize(0.035);
   st_stack_249->GetZaxis()->SetTitleSize(0.035);
   st_stack_249->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_249);
   
   
   TH1D *VbbHcc_both_Sphericity_stack_1 = new TH1D("VbbHcc_both_Sphericity_stack_1","",25,0,1);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(1,20526.06);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(2,25476.92);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(3,17559.8);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(4,15398.19);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(5,10081.54);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(6,8126.324);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(7,7597.351);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(8,4056.832);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(9,3237.242);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(10,5421.349);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(11,3519.24);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(12,3459.028);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(13,2316.571);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(14,1451.746);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(15,3232.185);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(16,1004.726);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(17,540.8007);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(18,910.8349);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(19,57.48017);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(20,111.8466);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(21,20.57435);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(22,34.01122);
   VbbHcc_both_Sphericity_stack_1->SetBinError(1,1689.168);
   VbbHcc_both_Sphericity_stack_1->SetBinError(2,2560.752);
   VbbHcc_both_Sphericity_stack_1->SetBinError(3,2256.718);
   VbbHcc_both_Sphericity_stack_1->SetBinError(4,2068.164);
   VbbHcc_both_Sphericity_stack_1->SetBinError(5,1385.69);
   VbbHcc_both_Sphericity_stack_1->SetBinError(6,1325.274);
   VbbHcc_both_Sphericity_stack_1->SetBinError(7,1486.584);
   VbbHcc_both_Sphericity_stack_1->SetBinError(8,674.6561);
   VbbHcc_both_Sphericity_stack_1->SetBinError(9,596.296);
   VbbHcc_both_Sphericity_stack_1->SetBinError(10,1656.678);
   VbbHcc_both_Sphericity_stack_1->SetBinError(11,738.0064);
   VbbHcc_both_Sphericity_stack_1->SetBinError(12,1085.881);
   VbbHcc_both_Sphericity_stack_1->SetBinError(13,581.017);
   VbbHcc_both_Sphericity_stack_1->SetBinError(14,382.7495);
   VbbHcc_both_Sphericity_stack_1->SetBinError(15,1185.744);
   VbbHcc_both_Sphericity_stack_1->SetBinError(16,321.3707);
   VbbHcc_both_Sphericity_stack_1->SetBinError(17,274.3354);
   VbbHcc_both_Sphericity_stack_1->SetBinError(18,401.2669);
   VbbHcc_both_Sphericity_stack_1->SetBinError(19,24.90308);
   VbbHcc_both_Sphericity_stack_1->SetBinError(20,43.4693);
   VbbHcc_both_Sphericity_stack_1->SetBinError(21,9.17198);
   VbbHcc_both_Sphericity_stack_1->SetBinError(22,24.69973);
   VbbHcc_both_Sphericity_stack_1->SetEntries(9183);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Sphericity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_1->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_1,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_2 = new TH1D("VbbHcc_both_Sphericity_stack_2","",25,0,1);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(1,95.29195);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(2,95.32538);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(3,80.85227);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(4,55.53469);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(5,45.31724);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(6,32.23962);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(7,27.09717);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(8,26.64394);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(9,22.46769);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(10,18.33122);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(11,13.96994);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(12,12.69147);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(13,14.12502);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(14,7.583358);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(15,8.750879);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(16,7.55709);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(17,3.401764);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(18,4.124463);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(19,1.673808);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(20,0.7601749);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(21,0.4222352);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(23,0.03624783);
   VbbHcc_both_Sphericity_stack_2->SetBinError(1,3.665958);
   VbbHcc_both_Sphericity_stack_2->SetBinError(2,3.539729);
   VbbHcc_both_Sphericity_stack_2->SetBinError(3,3.343926);
   VbbHcc_both_Sphericity_stack_2->SetBinError(4,2.835736);
   VbbHcc_both_Sphericity_stack_2->SetBinError(5,2.576793);
   VbbHcc_both_Sphericity_stack_2->SetBinError(6,2.122301);
   VbbHcc_both_Sphericity_stack_2->SetBinError(7,1.984609);
   VbbHcc_both_Sphericity_stack_2->SetBinError(8,1.995997);
   VbbHcc_both_Sphericity_stack_2->SetBinError(9,1.816544);
   VbbHcc_both_Sphericity_stack_2->SetBinError(10,1.658335);
   VbbHcc_both_Sphericity_stack_2->SetBinError(11,1.373918);
   VbbHcc_both_Sphericity_stack_2->SetBinError(12,1.406437);
   VbbHcc_both_Sphericity_stack_2->SetBinError(13,1.536121);
   VbbHcc_both_Sphericity_stack_2->SetBinError(14,1.098008);
   VbbHcc_both_Sphericity_stack_2->SetBinError(15,1.240032);
   VbbHcc_both_Sphericity_stack_2->SetBinError(16,1.120024);
   VbbHcc_both_Sphericity_stack_2->SetBinError(17,0.7195094);
   VbbHcc_both_Sphericity_stack_2->SetBinError(18,0.8091453);
   VbbHcc_both_Sphericity_stack_2->SetBinError(19,0.4868046);
   VbbHcc_both_Sphericity_stack_2->SetBinError(20,0.3487988);
   VbbHcc_both_Sphericity_stack_2->SetBinError(21,0.2667179);
   VbbHcc_both_Sphericity_stack_2->SetBinError(23,0.03624783);
   VbbHcc_both_Sphericity_stack_2->SetEntries(9517);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_Sphericity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_2->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_2,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_3 = new TH1D("VbbHcc_both_Sphericity_stack_3","",25,0,1);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(1,1783.874);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(2,2038.229);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(3,1552.583);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(4,1163.615);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(5,924.5364);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(6,726.248);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(7,612.0581);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(8,504.0789);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(9,425.8627);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(10,361.8989);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(11,308.9923);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(12,265.507);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(13,227.309);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(14,190.6482);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(15,155.0013);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(16,125.8697);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(17,98.69495);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(18,70.60838);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(19,41.51532);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(20,21.95121);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(21,6.519419);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(22,3.303142);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(23,0.954542);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(25,0.06405613);
   VbbHcc_both_Sphericity_stack_3->SetBinError(1,9.763306);
   VbbHcc_both_Sphericity_stack_3->SetBinError(2,10.3967);
   VbbHcc_both_Sphericity_stack_3->SetBinError(3,9.100011);
   VbbHcc_both_Sphericity_stack_3->SetBinError(4,7.894886);
   VbbHcc_both_Sphericity_stack_3->SetBinError(5,7.03803);
   VbbHcc_both_Sphericity_stack_3->SetBinError(6,6.231915);
   VbbHcc_both_Sphericity_stack_3->SetBinError(7,5.733027);
   VbbHcc_both_Sphericity_stack_3->SetBinError(8,5.197651);
   VbbHcc_both_Sphericity_stack_3->SetBinError(9,4.787863);
   VbbHcc_both_Sphericity_stack_3->SetBinError(10,4.413303);
   VbbHcc_both_Sphericity_stack_3->SetBinError(11,4.085185);
   VbbHcc_both_Sphericity_stack_3->SetBinError(12,3.775283);
   VbbHcc_both_Sphericity_stack_3->SetBinError(13,3.482005);
   VbbHcc_both_Sphericity_stack_3->SetBinError(14,3.204639);
   VbbHcc_both_Sphericity_stack_3->SetBinError(15,2.885343);
   VbbHcc_both_Sphericity_stack_3->SetBinError(16,2.609579);
   VbbHcc_both_Sphericity_stack_3->SetBinError(17,2.302084);
   VbbHcc_both_Sphericity_stack_3->SetBinError(18,1.953605);
   VbbHcc_both_Sphericity_stack_3->SetBinError(19,1.486794);
   VbbHcc_both_Sphericity_stack_3->SetBinError(20,1.07694);
   VbbHcc_both_Sphericity_stack_3->SetBinError(21,0.5767126);
   VbbHcc_both_Sphericity_stack_3->SetBinError(22,0.4146023);
   VbbHcc_both_Sphericity_stack_3->SetBinError(23,0.2279598);
   VbbHcc_both_Sphericity_stack_3->SetBinError(25,0.06405613);
   VbbHcc_both_Sphericity_stack_3->SetEntries(232621);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Sphericity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_3->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_3,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_4 = new TH1D("VbbHcc_both_Sphericity_stack_4","",25,0,1);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(1,248.3236);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(2,268.8573);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(3,198.0239);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(4,169.7881);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(5,126.1357);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(6,106.8188);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(7,71.26469);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(8,64.30237);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(9,61.64345);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(10,48.08997);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(11,49.35021);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(12,38.73979);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(13,32.40157);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(14,29.22896);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(15,19.07437);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(16,13.78432);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(17,13.31409);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(18,9.802873);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(19,6.588031);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(20,3.190242);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(21,1.290583);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(22,0.8146627);
   VbbHcc_both_Sphericity_stack_4->SetBinError(1,9.20168);
   VbbHcc_both_Sphericity_stack_4->SetBinError(2,10.04338);
   VbbHcc_both_Sphericity_stack_4->SetBinError(3,9.44667);
   VbbHcc_both_Sphericity_stack_4->SetBinError(4,8.87545);
   VbbHcc_both_Sphericity_stack_4->SetBinError(5,6.703034);
   VbbHcc_both_Sphericity_stack_4->SetBinError(6,6.44428);
   VbbHcc_both_Sphericity_stack_4->SetBinError(7,3.822914);
   VbbHcc_both_Sphericity_stack_4->SetBinError(8,3.980212);
   VbbHcc_both_Sphericity_stack_4->SetBinError(9,4.70147);
   VbbHcc_both_Sphericity_stack_4->SetBinError(10,3.749959);
   VbbHcc_both_Sphericity_stack_4->SetBinError(11,4.728435);
   VbbHcc_both_Sphericity_stack_4->SetBinError(12,3.786339);
   VbbHcc_both_Sphericity_stack_4->SetBinError(13,3.567008);
   VbbHcc_both_Sphericity_stack_4->SetBinError(14,3.215068);
   VbbHcc_both_Sphericity_stack_4->SetBinError(15,2.177889);
   VbbHcc_both_Sphericity_stack_4->SetBinError(16,2.0213);
   VbbHcc_both_Sphericity_stack_4->SetBinError(17,2.008994);
   VbbHcc_both_Sphericity_stack_4->SetBinError(18,2.121694);
   VbbHcc_both_Sphericity_stack_4->SetBinError(19,1.837052);
   VbbHcc_both_Sphericity_stack_4->SetBinError(20,1.68615);
   VbbHcc_both_Sphericity_stack_4->SetBinError(21,0.5229036);
   VbbHcc_both_Sphericity_stack_4->SetBinError(22,0.3786753);
   VbbHcc_both_Sphericity_stack_4->SetEntries(15013);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Sphericity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_4->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_4,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_5 = new TH1D("VbbHcc_both_Sphericity_stack_5","",25,0,1);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(1,29.48893);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(2,24.04732);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(3,22.75756);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(4,12.5541);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(5,12.86674);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(6,10.01791);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(7,7.56827);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(8,13.17743);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(9,4.824647);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(10,10.80961);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(11,3.071304);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(12,2.587688);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(13,2.136672);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(14,2.556027);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(15,2.768562);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(16,1.660666);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(17,1.118948);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(18,0.2391611);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(19,0.3571849);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(20,1.832965e-05);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(21,0.0007523573);
   VbbHcc_both_Sphericity_stack_5->SetBinError(1,2.741437);
   VbbHcc_both_Sphericity_stack_5->SetBinError(2,2.542859);
   VbbHcc_both_Sphericity_stack_5->SetBinError(3,2.535424);
   VbbHcc_both_Sphericity_stack_5->SetBinError(4,1.276801);
   VbbHcc_both_Sphericity_stack_5->SetBinError(5,2.099867);
   VbbHcc_both_Sphericity_stack_5->SetBinError(6,1.786314);
   VbbHcc_both_Sphericity_stack_5->SetBinError(7,1.33419);
   VbbHcc_both_Sphericity_stack_5->SetBinError(8,5.838051);
   VbbHcc_both_Sphericity_stack_5->SetBinError(9,1.014296);
   VbbHcc_both_Sphericity_stack_5->SetBinError(10,5.326452);
   VbbHcc_both_Sphericity_stack_5->SetBinError(11,0.5247743);
   VbbHcc_both_Sphericity_stack_5->SetBinError(12,0.4911299);
   VbbHcc_both_Sphericity_stack_5->SetBinError(13,0.410067);
   VbbHcc_both_Sphericity_stack_5->SetBinError(14,0.5583646);
   VbbHcc_both_Sphericity_stack_5->SetBinError(15,0.8815933);
   VbbHcc_both_Sphericity_stack_5->SetBinError(16,0.4335968);
   VbbHcc_both_Sphericity_stack_5->SetBinError(17,0.3112796);
   VbbHcc_both_Sphericity_stack_5->SetBinError(18,0.1216554);
   VbbHcc_both_Sphericity_stack_5->SetBinError(19,0.1767924);
   VbbHcc_both_Sphericity_stack_5->SetBinError(20,1.832965e-05);
   VbbHcc_both_Sphericity_stack_5->SetBinError(21,0.0004343913);
   VbbHcc_both_Sphericity_stack_5->SetEntries(3486);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Sphericity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_5->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_5,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_6 = new TH1D("VbbHcc_both_Sphericity_stack_6","",25,0,1);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(1,0.1152503);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(2,0.3772569);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(4,0.3251108);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(5,0.1195687);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(6,0.1234178);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(7,0.1243737);
   VbbHcc_both_Sphericity_stack_6->SetBinError(1,0.1152503);
   VbbHcc_both_Sphericity_stack_6->SetBinError(2,0.2182816);
   VbbHcc_both_Sphericity_stack_6->SetBinError(4,0.1915479);
   VbbHcc_both_Sphericity_stack_6->SetBinError(5,0.1195687);
   VbbHcc_both_Sphericity_stack_6->SetBinError(6,0.1234178);
   VbbHcc_both_Sphericity_stack_6->SetBinError(7,0.1243737);
   VbbHcc_both_Sphericity_stack_6->SetEntries(10);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Sphericity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_6->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_6,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_7 = new TH1D("VbbHcc_both_Sphericity_stack_7","",25,0,1);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(1,0.4629638);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(2,0.7864048);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(3,0.6140486);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(4,0.465219);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(5,0.2777298);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(6,0.364918);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(7,0.307639);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(8,0.1957118);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(9,0.09049555);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(10,0.3743229);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(11,0.09206678);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(12,0.08558222);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(14,0.1719348);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(15,0.07699256);
   VbbHcc_both_Sphericity_stack_7->SetBinError(1,0.2076475);
   VbbHcc_both_Sphericity_stack_7->SetBinError(2,0.2639187);
   VbbHcc_both_Sphericity_stack_7->SetBinError(3,0.2326602);
   VbbHcc_both_Sphericity_stack_7->SetBinError(4,0.2090058);
   VbbHcc_both_Sphericity_stack_7->SetBinError(5,0.1603787);
   VbbHcc_both_Sphericity_stack_7->SetBinError(6,0.1834333);
   VbbHcc_both_Sphericity_stack_7->SetBinError(7,0.1609581);
   VbbHcc_both_Sphericity_stack_7->SetBinError(8,0.1383897);
   VbbHcc_both_Sphericity_stack_7->SetBinError(9,0.09049555);
   VbbHcc_both_Sphericity_stack_7->SetBinError(10,0.1874663);
   VbbHcc_both_Sphericity_stack_7->SetBinError(11,0.09206678);
   VbbHcc_both_Sphericity_stack_7->SetBinError(12,0.08558222);
   VbbHcc_both_Sphericity_stack_7->SetBinError(14,0.1221175);
   VbbHcc_both_Sphericity_stack_7->SetBinError(15,0.07699256);
   VbbHcc_both_Sphericity_stack_7->SetEntries(49);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Sphericity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_7->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_7,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_8 = new TH1D("VbbHcc_both_Sphericity_stack_8","",25,0,1);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(1,6.667524);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(2,4.873249);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(3,4.244482);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(4,3.699704);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(5,1.920711);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(6,2.069758);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(7,1.520628);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(8,2.073461);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(9,0.8335072);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(10,0.3852276);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(11,0.8661598);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(12,1.247883);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(13,0.6190122);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(14,0.4040284);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(16,0.4257634);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(17,0.1931017);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(20,0.2071046);
   VbbHcc_both_Sphericity_stack_8->SetBinError(1,1.179507);
   VbbHcc_both_Sphericity_stack_8->SetBinError(2,1.008904);
   VbbHcc_both_Sphericity_stack_8->SetBinError(3,0.9351438);
   VbbHcc_both_Sphericity_stack_8->SetBinError(4,0.8810444);
   VbbHcc_both_Sphericity_stack_8->SetBinError(5,0.6423995);
   VbbHcc_both_Sphericity_stack_8->SetBinError(6,0.665414);
   VbbHcc_both_Sphericity_stack_8->SetBinError(7,0.5464099);
   VbbHcc_both_Sphericity_stack_8->SetBinError(8,0.6623977);
   VbbHcc_both_Sphericity_stack_8->SetBinError(9,0.4170124);
   VbbHcc_both_Sphericity_stack_8->SetBinError(10,0.2733122);
   VbbHcc_both_Sphericity_stack_8->SetBinError(11,0.4336145);
   VbbHcc_both_Sphericity_stack_8->SetBinError(12,0.520855);
   VbbHcc_both_Sphericity_stack_8->SetBinError(13,0.359355);
   VbbHcc_both_Sphericity_stack_8->SetBinError(14,0.2882206);
   VbbHcc_both_Sphericity_stack_8->SetBinError(16,0.3010603);
   VbbHcc_both_Sphericity_stack_8->SetBinError(17,0.1931017);
   VbbHcc_both_Sphericity_stack_8->SetBinError(20,0.2071046);
   VbbHcc_both_Sphericity_stack_8->SetEntries(158);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Sphericity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_8->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_8,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_9 = new TH1D("VbbHcc_both_Sphericity_stack_9","",25,0,1);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(1,4.30366);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(2,4.819409);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(3,3.488262);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(4,2.904687);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(5,2.43772);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(6,1.979752);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(7,1.684248);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(8,1.325279);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(9,1.288457);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(10,1.025025);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(11,0.8443262);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(12,0.7586008);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(13,0.5741065);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(14,0.5092554);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(15,0.4331104);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(16,0.3158758);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(17,0.2472033);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(18,0.180091);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(19,0.09583002);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(20,0.04295703);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(21,0.01993626);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(22,0.004672696);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(23,0.001087504);
   VbbHcc_both_Sphericity_stack_9->SetBinError(1,0.06900845);
   VbbHcc_both_Sphericity_stack_9->SetBinError(2,0.07264433);
   VbbHcc_both_Sphericity_stack_9->SetBinError(3,0.0618574);
   VbbHcc_both_Sphericity_stack_9->SetBinError(4,0.05649496);
   VbbHcc_both_Sphericity_stack_9->SetBinError(5,0.05179908);
   VbbHcc_both_Sphericity_stack_9->SetBinError(6,0.04706999);
   VbbHcc_both_Sphericity_stack_9->SetBinError(7,0.04320427);
   VbbHcc_both_Sphericity_stack_9->SetBinError(8,0.03817389);
   VbbHcc_both_Sphericity_stack_9->SetBinError(9,0.0376427);
   VbbHcc_both_Sphericity_stack_9->SetBinError(10,0.0337506);
   VbbHcc_both_Sphericity_stack_9->SetBinError(11,0.03059673);
   VbbHcc_both_Sphericity_stack_9->SetBinError(12,0.02871793);
   VbbHcc_both_Sphericity_stack_9->SetBinError(13,0.02512644);
   VbbHcc_both_Sphericity_stack_9->SetBinError(14,0.023824);
   VbbHcc_both_Sphericity_stack_9->SetBinError(15,0.02201665);
   VbbHcc_both_Sphericity_stack_9->SetBinError(16,0.01858672);
   VbbHcc_both_Sphericity_stack_9->SetBinError(17,0.01640706);
   VbbHcc_both_Sphericity_stack_9->SetBinError(18,0.01403764);
   VbbHcc_both_Sphericity_stack_9->SetBinError(19,0.0104805);
   VbbHcc_both_Sphericity_stack_9->SetBinError(20,0.006730516);
   VbbHcc_both_Sphericity_stack_9->SetBinError(21,0.004519911);
   VbbHcc_both_Sphericity_stack_9->SetBinError(22,0.002119962);
   VbbHcc_both_Sphericity_stack_9->SetBinError(23,0.001087504);
   VbbHcc_both_Sphericity_stack_9->SetEntries(28929);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_Sphericity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_9->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_9,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_10 = new TH1D("VbbHcc_both_Sphericity_stack_10","",25,0,1);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(1,2.069643);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(2,2.241438);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(3,1.655534);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(4,1.291801);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(5,1.125848);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(6,0.8970191);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(7,0.7491677);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(8,0.6608439);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(9,0.5599056);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(10,0.4867138);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(11,0.418461);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(12,0.3585152);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(13,0.3034654);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(14,0.2655727);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(15,0.2148907);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(16,0.1834206);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(17,0.1276468);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(18,0.09359945);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(19,0.05666079);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(20,0.0275979);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(21,0.005276717);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(22,0.001976156);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(23,0.0003005912);
   VbbHcc_both_Sphericity_stack_10->SetBinError(1,0.02645874);
   VbbHcc_both_Sphericity_stack_10->SetBinError(2,0.02733831);
   VbbHcc_both_Sphericity_stack_10->SetBinError(3,0.02355247);
   VbbHcc_both_Sphericity_stack_10->SetBinError(4,0.02081509);
   VbbHcc_both_Sphericity_stack_10->SetBinError(5,0.01944977);
   VbbHcc_both_Sphericity_stack_10->SetBinError(6,0.01737062);
   VbbHcc_both_Sphericity_stack_10->SetBinError(7,0.01585648);
   VbbHcc_both_Sphericity_stack_10->SetBinError(8,0.01488169);
   VbbHcc_both_Sphericity_stack_10->SetBinError(9,0.01374325);
   VbbHcc_both_Sphericity_stack_10->SetBinError(10,0.01279207);
   VbbHcc_both_Sphericity_stack_10->SetBinError(11,0.01186778);
   VbbHcc_both_Sphericity_stack_10->SetBinError(12,0.0109765);
   VbbHcc_both_Sphericity_stack_10->SetBinError(13,0.01012964);
   VbbHcc_both_Sphericity_stack_10->SetBinError(14,0.009474061);
   VbbHcc_both_Sphericity_stack_10->SetBinError(15,0.008495139);
   VbbHcc_both_Sphericity_stack_10->SetBinError(16,0.007818033);
   VbbHcc_both_Sphericity_stack_10->SetBinError(17,0.006572635);
   VbbHcc_both_Sphericity_stack_10->SetBinError(18,0.005579629);
   VbbHcc_both_Sphericity_stack_10->SetBinError(19,0.00430387);
   VbbHcc_both_Sphericity_stack_10->SetBinError(20,0.002998855);
   VbbHcc_both_Sphericity_stack_10->SetBinError(21,0.001296735);
   VbbHcc_both_Sphericity_stack_10->SetBinError(22,0.0008104999);
   VbbHcc_both_Sphericity_stack_10->SetBinError(23,0.0003005912);
   VbbHcc_both_Sphericity_stack_10->SetEntries(41891);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Sphericity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_10->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_10,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_11 = new TH1D("VbbHcc_both_Sphericity_stack_11","",25,0,1);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(1,0.01686239);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(2,0.01709958);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(3,0.02011939);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(4,0.004490014);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(6,0.00429505);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(10,0.003855333);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(11,0.004313137);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(12,0.002243723);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(13,0.002109186);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(14,0.002209336);
   VbbHcc_both_Sphericity_stack_11->SetBinError(1,0.005984462);
   VbbHcc_both_Sphericity_stack_11->SetBinError(2,0.006065616);
   VbbHcc_both_Sphericity_stack_11->SetBinError(3,0.006826184);
   VbbHcc_both_Sphericity_stack_11->SetBinError(4,0.003174932);
   VbbHcc_both_Sphericity_stack_11->SetBinError(6,0.003037556);
   VbbHcc_both_Sphericity_stack_11->SetBinError(10,0.002735039);
   VbbHcc_both_Sphericity_stack_11->SetBinError(11,0.003050143);
   VbbHcc_both_Sphericity_stack_11->SetBinError(12,0.002243723);
   VbbHcc_both_Sphericity_stack_11->SetBinError(13,0.002109186);
   VbbHcc_both_Sphericity_stack_11->SetBinError(14,0.002209336);
   VbbHcc_both_Sphericity_stack_11->SetEntries(36);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Sphericity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_11->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_11,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_12 = new TH1D("VbbHcc_both_Sphericity_stack_12","",25,0,1);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(1,0.00613207);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(2,0.006255243);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(3,0.003209096);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(4,0.003713657);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(5,0.004352755);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(6,0.001284995);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(7,0.001699277);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(8,0.002205751);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(9,0.003110048);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(10,0.001154268);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(11,0.002207791);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(12,0.001177968);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(13,0.0005840297);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(14,0.0002858757);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(15,0.0002816317);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(16,0.0006224638);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(17,0.000276468);
   VbbHcc_both_Sphericity_stack_12->SetBinError(1,0.001343696);
   VbbHcc_both_Sphericity_stack_12->SetBinError(2,0.001336639);
   VbbHcc_both_Sphericity_stack_12->SetBinError(3,0.0009347465);
   VbbHcc_both_Sphericity_stack_12->SetBinError(4,0.001031874);
   VbbHcc_both_Sphericity_stack_12->SetBinError(5,0.001110667);
   VbbHcc_both_Sphericity_stack_12->SetBinError(6,0.0005858844);
   VbbHcc_both_Sphericity_stack_12->SetBinError(7,0.0006946907);
   VbbHcc_both_Sphericity_stack_12->SetBinError(8,0.0007802721);
   VbbHcc_both_Sphericity_stack_12->SetBinError(9,0.000938887);
   VbbHcc_both_Sphericity_stack_12->SetBinError(10,0.0005771936);
   VbbHcc_both_Sphericity_stack_12->SetBinError(11,0.0007856764);
   VbbHcc_both_Sphericity_stack_12->SetBinError(12,0.0005895651);
   VbbHcc_both_Sphericity_stack_12->SetBinError(13,0.0004130563);
   VbbHcc_both_Sphericity_stack_12->SetBinError(14,0.0002858757);
   VbbHcc_both_Sphericity_stack_12->SetBinError(15,0.0002816317);
   VbbHcc_both_Sphericity_stack_12->SetBinError(16,0.0004416732);
   VbbHcc_both_Sphericity_stack_12->SetBinError(17,0.000276468);
   VbbHcc_both_Sphericity_stack_12->SetEntries(137);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Sphericity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_12->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_Sphericity__683 = new TH1D("VbbHcc_both_Sphericity__683","",25,0,1);
   VbbHcc_both_Sphericity__683->SetBinContent(1,16933);
   VbbHcc_both_Sphericity__683->SetBinContent(2,17392);
   VbbHcc_both_Sphericity__683->SetBinContent(3,12938);
   VbbHcc_both_Sphericity__683->SetBinContent(4,9798);
   VbbHcc_both_Sphericity__683->SetBinContent(5,7674);
   VbbHcc_both_Sphericity__683->SetBinContent(6,6415);
   VbbHcc_both_Sphericity__683->SetBinContent(7,5226);
   VbbHcc_both_Sphericity__683->SetBinContent(8,4257);
   VbbHcc_both_Sphericity__683->SetBinContent(9,3556);
   VbbHcc_both_Sphericity__683->SetBinContent(10,2999);
   VbbHcc_both_Sphericity__683->SetBinContent(11,2583);
   VbbHcc_both_Sphericity__683->SetBinContent(12,2198);
   VbbHcc_both_Sphericity__683->SetBinContent(13,1910);
   VbbHcc_both_Sphericity__683->SetBinContent(14,1550);
   VbbHcc_both_Sphericity__683->SetBinContent(15,1252);
   VbbHcc_both_Sphericity__683->SetBinContent(16,977);
   VbbHcc_both_Sphericity__683->SetBinContent(17,767);
   VbbHcc_both_Sphericity__683->SetBinContent(18,555);
   VbbHcc_both_Sphericity__683->SetBinContent(19,307);
   VbbHcc_both_Sphericity__683->SetBinContent(20,140);
   VbbHcc_both_Sphericity__683->SetBinContent(21,45);
   VbbHcc_both_Sphericity__683->SetBinContent(22,14);
   VbbHcc_both_Sphericity__683->SetBinContent(23,5);
   VbbHcc_both_Sphericity__683->SetEntries(99515);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity__683->SetLineColor(ci);
   VbbHcc_both_Sphericity__683->SetLineWidth(2);
   VbbHcc_both_Sphericity__683->SetMarkerStyle(20);
   VbbHcc_both_Sphericity__683->SetMarkerSize(1.2);
   VbbHcc_both_Sphericity__683->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity__683->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity__683->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity__683->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity__683->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity__683->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity__683->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity__683->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity__683->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity__683->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity__683->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity__683->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity__683->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity__683->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity__683->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Sphericity_fx1497[25] = {
   0.02,
   0.06,
   0.1,
   0.14,
   0.18,
   0.22,
   0.26,
   0.3,
   0.34,
   0.38,
   0.42,
   0.46,
   0.5,
   0.54,
   0.58,
   0.62,
   0.66,
   0.7,
   0.74,
   0.78,
   0.82,
   0.86,
   0.9,
   0.94,
   0.98};
   Double_t Graph_from_VbbHcc_both_Sphericity_fy1497[25] = {
   22696.68,
   27916.5,
   19424.04,
   16808.38,
   11196.28,
   9007.089,
   8319.727,
   4669.292,
   3754.816,
   5862.755,
   3896.851,
   3781.008,
   2594.042,
   1683.115,
   3418.506,
   1154.524,
   657.8987,
   995.8835,
   107.767,
   138.0259,
   28.83255,
   38.13567,
   0.9921779,
   0,
   0.06405613};
   Double_t Graph_from_VbbHcc_both_Sphericity_fex1497[25] = {
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02};
   Double_t Graph_from_VbbHcc_both_Sphericity_fey1497[25] = {
   1689.228,
   2560.797,
   2256.76,
   2068.201,
   1385.728,
   1325.307,
   1486.602,
   674.7165,
   596.3376,
   1656.698,
   738.0345,
   1085.895,
   581.0406,
   382.7786,
   1185.75,
   321.3901,
   274.3536,
   401.2781,
   25.02034,
   43.51721,
   9.208822,
   24.70611,
   0.2308264,
   0,
   0.06405613};
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_VbbHcc_both_Sphericity_fx1497,Graph_from_VbbHcc_both_Sphericity_fy1497,Graph_from_VbbHcc_both_Sphericity_fex1497,Graph_from_VbbHcc_both_Sphericity_fey1497);
   gre->SetName("Graph_from_VbbHcc_both_Sphericity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Sphericity1497 = new TH1F("Graph_Graph_from_VbbHcc_both_Sphericity1497","",100,0,1.1);
   Graph_Graph_from_VbbHcc_both_Sphericity1497->SetMinimum(33.52502);
   Graph_Graph_from_VbbHcc_both_Sphericity1497->SetMaximum(33525.02);
   Graph_Graph_from_VbbHcc_both_Sphericity1497->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_Sphericity1497->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Sphericity1497->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Sphericity1497->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Sphericity1497->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity1497->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity1497->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Sphericity1497->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Sphericity1497->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity1497->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity1497->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_Sphericity1497->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Sphericity1497->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Sphericity1497->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity1497->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity1497->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Sphericity1497);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Sphericity","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_10","ggZHbb","F");

   ci = TColor::GetColor("#0000cc");
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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_9","ZHbb","F");

   ci = TColor::GetColor("#cccc00");
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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_8","ZZ","F");

   ci = TColor::GetColor("#33ff99");
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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_7","WZ","F");

   ci = TColor::GetColor("#3399ff");
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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_6","WW","F");

   ci = TColor::GetColor("#9933ff");
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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_5","W + jets","F");

   ci = TColor::GetColor("#ff99cc");
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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_4","Z + jets","F");

   ci = TColor::GetColor("#00cccc");
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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_3","t#bar{t}","F");

   ci = TColor::GetColor("#cc00cc");
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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_2","Single top","F");

   ci = TColor::GetColor("#660066");
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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_Sphericity","MC unc. (stat.)","fl");

   ci = TColor::GetColor("#333333");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3013);

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
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Sphericity_both_16->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.1532254,-0.2774193,1.052419,1.658065);
   bottomPad->SetFillColor(0);
   bottomPad->SetBorderMode(0);
   bottomPad->SetBorderSize(2);
   bottomPad->SetTickx(1);
   bottomPad->SetTicky(1);
   bottomPad->SetLeftMargin(0.12709);
   bottomPad->SetRightMargin(0.0434783);
   bottomPad->SetTopMargin(0.03);
   bottomPad->SetBottomMargin(0.35);
   bottomPad->SetFrameBorderMode(0);
   bottomPad->SetFrameBorderMode(0);
   
   TH1D *data_mc_ratio__684 = new TH1D("data_mc_ratio__684","",25,0,1);
   data_mc_ratio__684->SetBinContent(1,0.7460562);
   data_mc_ratio__684->SetBinContent(2,0.6230008);
   data_mc_ratio__684->SetBinContent(3,0.6660819);
   data_mc_ratio__684->SetBinContent(4,0.5829235);
   data_mc_ratio__684->SetBinContent(5,0.6854063);
   data_mc_ratio__684->SetBinContent(6,0.7122168);
   data_mc_ratio__684->SetBinContent(7,0.6281456);
   data_mc_ratio__684->SetBinContent(8,0.9117014);
   data_mc_ratio__684->SetBinContent(9,0.9470504);
   data_mc_ratio__684->SetBinContent(10,0.5115342);
   data_mc_ratio__684->SetBinContent(11,0.6628428);
   data_mc_ratio__684->SetBinContent(12,0.5813264);
   data_mc_ratio__684->SetBinContent(13,0.7363026);
   data_mc_ratio__684->SetBinContent(14,0.9209113);
   data_mc_ratio__684->SetBinContent(15,0.3662419);
   data_mc_ratio__684->SetBinContent(16,0.8462363);
   data_mc_ratio__684->SetBinContent(17,1.165833);
   data_mc_ratio__684->SetBinContent(18,0.5572941);
   data_mc_ratio__684->SetBinContent(19,2.848738);
   data_mc_ratio__684->SetBinContent(20,1.014303);
   data_mc_ratio__684->SetBinContent(21,1.560736);
   data_mc_ratio__684->SetBinContent(22,0.3671103);
   data_mc_ratio__684->SetBinContent(23,5.039419);
   data_mc_ratio__684->SetBinError(1,0.005733299);
   data_mc_ratio__684->SetBinError(2,0.004724043);
   data_mc_ratio__684->SetBinError(3,0.005855906);
   data_mc_ratio__684->SetBinError(4,0.005889017);
   data_mc_ratio__684->SetBinError(5,0.00782415);
   data_mc_ratio__684->SetBinError(6,0.008892296);
   data_mc_ratio__684->SetBinError(7,0.008689117);
   data_mc_ratio__684->SetBinError(8,0.01397336);
   data_mc_ratio__684->SetBinError(9,0.01588153);
   data_mc_ratio__684->SetBinError(10,0.009340851);
   data_mc_ratio__684->SetBinError(11,0.01304213);
   data_mc_ratio__684->SetBinError(12,0.01239956);
   data_mc_ratio__684->SetBinError(13,0.01684766);
   data_mc_ratio__684->SetBinError(14,0.02339117);
   data_mc_ratio__684->SetBinError(15,0.01035061);
   data_mc_ratio__684->SetBinError(16,0.0270735);
   data_mc_ratio__684->SetBinError(17,0.04209579);
   data_mc_ratio__684->SetBinError(18,0.02365582);
   data_mc_ratio__684->SetBinError(19,0.1625861);
   data_mc_ratio__684->SetBinError(20,0.08572422);
   data_mc_ratio__684->SetBinError(21,0.2326608);
   data_mc_ratio__684->SetBinError(22,0.09811437);
   data_mc_ratio__684->SetBinError(23,2.253697);
   data_mc_ratio__684->SetMinimum(0.4);
   data_mc_ratio__684->SetMaximum(1.6);
   data_mc_ratio__684->SetEntries(70.24674);
   data_mc_ratio__684->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__684->SetLineColor(ci);
   data_mc_ratio__684->SetLineWidth(2);
   data_mc_ratio__684->SetMarkerStyle(20);
   data_mc_ratio__684->SetMarkerSize(1.2);
   data_mc_ratio__684->GetXaxis()->SetTitle("Sphericity");
   data_mc_ratio__684->GetXaxis()->SetRange(1,25);
   data_mc_ratio__684->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__684->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__684->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__684->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__684->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__684->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__684->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__684->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__684->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__684->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__684->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__684->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__684->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__684->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__684->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__684->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__684->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1498[25] = {
   0.02,
   0.06,
   0.1,
   0.14,
   0.18,
   0.22,
   0.26,
   0.3,
   0.34,
   0.38,
   0.42,
   0.46,
   0.5,
   0.54,
   0.58,
   0.62,
   0.66,
   0.7,
   0.74,
   0.78,
   0.82,
   0.86,
   0.9,
   0.94,
   0.98};
   Double_t Graph_from_mc_statistical_error_fy1498[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t Graph_from_mc_statistical_error_fex1498[25] = {
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02};
   Double_t Graph_from_mc_statistical_error_fey1498[25] = {
   0.07442621,
   0.09173059,
   0.1161839,
   0.1230458,
   0.1237668,
   0.1471405,
   0.178684,
   0.1445008,
   0.1588194,
   0.2825801,
   0.1893925,
   0.2871971,
   0.2239904,
   0.2274226,
   0.3468622,
   0.2783746,
   0.4170149,
   0.4029368,
   0.2321707,
   0.315283,
   0.3193898,
   0.6478477,
   0.2326462,
   0,
   1};
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1498,Graph_from_mc_statistical_error_fy1498,Graph_from_mc_statistical_error_fex1498,Graph_from_mc_statistical_error_fey1498);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1498 = new TH1F("Graph_Graph_from_mc_statistical_error1498","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1498->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1498->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1498->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1498->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1498->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1498->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1498->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1498->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1498->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1498->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1498->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1498->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1498->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1498->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1498->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1498->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1498->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1498->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1498);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Sphericity_both_16->cd();
   Sphericity_both_16->Modified();
   Sphericity_both_16->cd();
   Sphericity_both_16->SetSelected(Sphericity_both_16);
}

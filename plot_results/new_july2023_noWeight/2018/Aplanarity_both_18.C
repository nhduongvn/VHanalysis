void Aplanarity_both_18()
{
//=========Macro generated from canvas: Aplanarity_both_18/Aplanarity_both_18
//=========  (Thu Aug  3 12:26:23 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_18 = new TCanvas("Aplanarity_both_18", "Aplanarity_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_18->SetHighLightColor(2);
   Aplanarity_both_18->Range(0,0,1,1);
   Aplanarity_both_18->SetFillColor(0);
   Aplanarity_both_18->SetFillStyle(4000);
   Aplanarity_both_18->SetBorderMode(0);
   Aplanarity_both_18->SetBorderSize(2);
   Aplanarity_both_18->SetFrameFillStyle(1000);
   Aplanarity_both_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-519.6174,1.052419,519107.7);
   topPad->SetFillColor(0);
   topPad->SetBorderMode(0);
   topPad->SetBorderSize(2);
   topPad->SetLeftMargin(0.12709);
   topPad->SetRightMargin(0.0434783);
   topPad->SetBottomMargin(0.001);
   topPad->SetFrameBorderMode(0);
   topPad->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(0.01);
   st->SetMaximum(444900);
   
   TH1F *st_stack_255 = new TH1F("st_stack_255","",50,0,1);
   st_stack_255->SetMinimum(0.01);
   st_stack_255->SetMaximum(467145);
   st_stack_255->SetDirectory(0);
   st_stack_255->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_255->SetLineColor(ci);
   st_stack_255->GetXaxis()->SetRange(1,50);
   st_stack_255->GetXaxis()->SetLabelFont(42);
   st_stack_255->GetXaxis()->SetLabelSize(0.035);
   st_stack_255->GetXaxis()->SetTitleSize(0.035);
   st_stack_255->GetXaxis()->SetTitleFont(42);
   st_stack_255->GetYaxis()->SetTitle("Events/0.02");
   st_stack_255->GetYaxis()->SetLabelFont(42);
   st_stack_255->GetYaxis()->SetLabelSize(0.05);
   st_stack_255->GetYaxis()->SetTitleSize(0.057);
   st_stack_255->GetYaxis()->SetTitleOffset(1.2);
   st_stack_255->GetYaxis()->SetTitleFont(42);
   st_stack_255->GetZaxis()->SetLabelFont(42);
   st_stack_255->GetZaxis()->SetLabelSize(0.035);
   st_stack_255->GetZaxis()->SetTitleSize(0.035);
   st_stack_255->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_255);
   
   
   TH1D *VbbHcc_both_Aplanarity_stack_1 = new TH1D("VbbHcc_both_Aplanarity_stack_1","",50,0,1);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(1,133731.8);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(2,36201.87);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(3,19493.45);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(4,12585.29);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(5,4947.896);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(6,3094.646);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(7,2491.541);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(8,1122.211);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(9,3434.345);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(10,704.8891);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(11,301.4312);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(12,626.5397);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(13,544.9002);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(14,144.1448);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(15,408.4318);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(16,0.3095896);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(17,73.64506);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(18,5.881228);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(19,31.92775);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(1,4804.133);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(2,2976.119);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(3,2913.46);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(4,1695.433);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(5,874.1088);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(6,679.6296);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(7,671.4264);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(8,394.7531);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(9,1786.95);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(10,380.5195);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(11,88.56206);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(12,380.5086);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(13,376.6403);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(14,52.71421);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(15,372.042);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(16,0.3095896);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(17,46.20171);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(18,5.881228);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(19,31.92775);
   VbbHcc_both_Aplanarity_stack_1->SetEntries(10726);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_2 = new TH1D("VbbHcc_both_Aplanarity_stack_2","",50,0,1);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(1,836.4378);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(2,241.2115);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(3,118.6924);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(4,68.85021);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(5,38.75942);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(6,27.63151);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(7,19.73437);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(8,10.73657);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(9,8.863447);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(10,5.088034);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(11,3.434516);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(12,2.063801);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(13,2.104861);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(14,1.23406);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(15,0.9424554);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(16,0.317669);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(17,0.3724347);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(18,0.1458022);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(20,0.04860075);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(23,0.05476569);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(1,11.91756);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(2,6.351602);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(3,4.529363);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(4,3.500788);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(5,2.541306);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(6,2.205333);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(7,1.882407);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(8,1.310523);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(9,1.314673);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(10,0.9656998);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(11,0.7607704);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(12,0.5972252);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(13,0.6862086);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(14,0.4446462);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(15,0.4284134);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(16,0.2734223);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(17,0.2788531);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(18,0.08417896);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(20,0.04860075);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(23,0.05476569);
   VbbHcc_both_Aplanarity_stack_2->SetEntries(15898);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_2,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_3 = new TH1D("VbbHcc_both_Aplanarity_stack_3","",50,0,1);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(1,15700.21);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(2,5111.445);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(3,2474.414);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(4,1421.78);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(5,866.5094);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(6,572.2925);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(7,386.1703);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(8,259.2918);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(9,178.8978);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(10,125.2046);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(11,83.78803);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(12,58.3905);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(13,40.64511);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(14,25.4026);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(15,17.88455);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(16,11.03895);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(17,6.78201);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(18,4.52411);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(19,2.167624);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(20,0.7839539);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(21,0.321506);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(22,0.1529247);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(23,0.06863135);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(1,31.13844);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(2,17.77975);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(3,12.37869);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(4,9.386456);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(5,7.327182);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(6,5.956612);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(7,4.900068);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(8,4.011711);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(9,3.323937);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(10,2.786508);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(11,2.282482);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(12,1.901074);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(13,1.585904);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(14,1.254015);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(15,1.059736);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(16,0.8292729);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(17,0.6512805);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(18,0.5314383);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(19,0.359147);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(20,0.2207215);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(21,0.1450801);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(22,0.09115745);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(23,0.06863135);
   VbbHcc_both_Aplanarity_stack_3->SetEntries(458232);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Aplanarity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_3->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_3,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_4 = new TH1D("VbbHcc_both_Aplanarity_stack_4","",50,0,1);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(1,2097.104);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(2,582.1968);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(3,282.2856);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(4,159.2407);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(5,100.677);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(6,54.32846);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(7,31.54469);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(8,26.78908);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(9,16.67765);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(10,11.10731);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(11,4.908235);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(12,3.373809);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(13,5.755335);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(14,1.336737);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(15,0.7078452);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(16,0.8597858);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(17,1.197339);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(18,0.4894939);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(1,30.74092);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(2,15.7277);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(3,14.22827);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(4,9.657379);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(5,8.661807);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(6,5.582238);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(7,2.982797);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(8,4.752576);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(9,2.190599);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(10,1.856725);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(11,1.124697);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(12,0.8569226);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(13,1.456202);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(14,0.5857433);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(15,0.5138037);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(16,0.5233386);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(17,0.7096467);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(18,0.4894939);
   VbbHcc_both_Aplanarity_stack_4->SetEntries(19394);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Aplanarity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_4->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_4,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_5 = new TH1D("VbbHcc_both_Aplanarity_stack_5","",50,0,1);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(1,212.7863);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(2,70.86178);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(3,25.27535);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(4,14.9415);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(5,8.494855);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(6,2.248119);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(7,4.316842);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(8,1.728031);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(9,0.6617305);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(10,1.140192);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(11,0.5371188);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(12,2.342085);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(13,0.1388096);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(14,0.4041855);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(15,0.386066);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(1,14.99244);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(2,8.075876);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(3,4.552516);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(4,2.611148);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(5,3.07541);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(6,0.583955);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(7,2.184669);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(8,0.5929811);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(9,0.3344673);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(10,0.5613188);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(11,0.3157181);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(12,2.097782);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(13,0.1271571);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(14,0.2199021);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(15,0.2887198);
   VbbHcc_both_Aplanarity_stack_5->SetEntries(2575);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Aplanarity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_5->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_5,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_6 = new TH1D("VbbHcc_both_Aplanarity_stack_6","",50,0,1);
   VbbHcc_both_Aplanarity_stack_6->SetBinContent(1,2.260213);
   VbbHcc_both_Aplanarity_stack_6->SetBinError(1,1.010798);
   VbbHcc_both_Aplanarity_stack_6->SetEntries(5);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Aplanarity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_6->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_6,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_7 = new TH1D("VbbHcc_both_Aplanarity_stack_7","",50,0,1);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(1,4.604589);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(2,3.187792);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(3,1.062597);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(4,1.062597);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(5,0.3541991);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(6,0.7083982);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(8,0.3541991);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(15,0.3541991);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(1,1.277083);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(2,1.062597);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(3,0.6134909);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(4,0.6134909);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(5,0.3541991);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(6,0.5009132);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(8,0.3541991);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(15,0.3541991);
   VbbHcc_both_Aplanarity_stack_7->SetEntries(33);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Aplanarity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_7->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_7,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_8 = new TH1D("VbbHcc_both_Aplanarity_stack_8","",50,0,1);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(1,41.35332);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(2,11.45599);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(3,4.191215);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(4,3.352972);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(5,1.397072);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(6,0.8382431);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(7,1.397072);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(8,0.5588287);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(11,0.2794144);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(1,3.399222);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(2,1.789125);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(3,1.082167);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(4,0.9679197);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(5,0.6247895);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(6,0.4839599);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(7,0.6247895);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(8,0.3951516);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(11,0.2794144);
   VbbHcc_both_Aplanarity_stack_8->SetEntries(232);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Aplanarity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_8->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_8,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_9 = new TH1D("VbbHcc_both_Aplanarity_stack_9","",50,0,1);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(1,39.19882);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(2,10.98088);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(3,5.335007);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(4,2.87551);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(5,1.79205);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(6,1.117746);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(7,0.7565927);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(8,0.4640131);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(9,0.2742934);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(10,0.1942912);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(11,0.1371467);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(12,0.08914537);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(13,0.05714447);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(14,0.0320009);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(15,0.02742934);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(16,0.006857336);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(17,0.004571557);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(18,0.002285779);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(19,0.002285779);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(1,0.2993323);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(2,0.1584294);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(3,0.1104294);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(4,0.08107267);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(5,0.0640018);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(6,0.05054621);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(7,0.0415861);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(8,0.03256733);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(9,0.02503945);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(10,0.02107384);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(11,0.01770557);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(12,0.01427468);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(13,0.01142889);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(14,0.008552601);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(15,0.007918169);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(16,0.003959085);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(17,0.003232579);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(18,0.002285779);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(19,0.002285779);
   VbbHcc_both_Aplanarity_stack_9->SetEntries(27714);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_Aplanarity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_9->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_9,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_10 = new TH1D("VbbHcc_both_Aplanarity_stack_10","",50,0,1);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(1,16.61872);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(2,5.574549);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(3,2.882955);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(4,1.702589);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(5,1.055176);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(6,0.6873548);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(7,0.4638005);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(8,0.329668);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(9,0.2050738);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(10,0.1389017);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(11,0.08822941);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(12,0.06557591);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(13,0.04530699);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(14,0.03219181);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(15,0.0107306);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(16,0.00894217);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(17,0.01013446);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(18,0.002980723);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(19,0.002384579);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(21,0.001192289);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(1,0.09953473);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(2,0.05764753);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(3,0.04145671);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(4,0.0318589);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(5,0.02508062);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(6,0.0202426);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(7,0.01662805);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(8,0.01401891);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(9,0.01105684);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(10,0.009099753);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(11,0.007252413);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(12,0.006252418);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(13,0.005197068);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(14,0.004380751);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(15,0.002529228);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(16,0.002308858);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(17,0.002457967);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(18,0.00133302);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(19,0.001192289);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(21,0.0008430758);
   VbbHcc_both_Aplanarity_stack_10->SetEntries(50200);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Aplanarity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_10->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_10,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_11 = new TH1D("VbbHcc_both_Aplanarity_stack_11","",50,0,1);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(1,0.1251669);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(2,0.0295849);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(3,0.01365457);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(4,0.01137881);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(5,0.006827286);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(6,0.002275762);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(11,0.002275762);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(1,0.0168775);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(2,0.008205376);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(3,0.005574455);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(4,0.005088758);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(5,0.003941735);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(6,0.002275762);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(11,0.002275762);
   VbbHcc_both_Aplanarity_stack_11->SetEntries(84);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Aplanarity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_11->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_11,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_12 = new TH1D("VbbHcc_both_Aplanarity_stack_12","",50,0,1);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(1,0.05903239);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(2,0.01708044);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(3,0.006292793);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(4,0.005693479);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(5,0.002397254);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(6,0.003595882);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(7,0.001498284);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(8,0.0005993136);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(9,0.001198627);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(10,0.0005993136);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(11,0.0002996568);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(12,0.0002996568);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(13,0.0002996568);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(1,0.004205884);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(2,0.002262359);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(3,0.0013732);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(4,0.001306174);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(5,0.0008475574);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(6,0.001038042);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(7,0.000670053);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(8,0.0004237787);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(9,0.0005993136);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(10,0.0004237787);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(11,0.0002996568);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(12,0.0002996568);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(13,0.0002996568);
   VbbHcc_both_Aplanarity_stack_12->SetEntries(330);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Aplanarity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_12->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_Aplanarity__700 = new TH1D("VbbHcc_both_Aplanarity__700","",50,0,1);
   VbbHcc_both_Aplanarity__700->SetBinContent(1,200205);
   VbbHcc_both_Aplanarity__700->SetBinContent(2,57809);
   VbbHcc_both_Aplanarity__700->SetBinContent(3,26971);
   VbbHcc_both_Aplanarity__700->SetBinContent(4,15099);
   VbbHcc_both_Aplanarity__700->SetBinContent(5,9129);
   VbbHcc_both_Aplanarity__700->SetBinContent(6,5696);
   VbbHcc_both_Aplanarity__700->SetBinContent(7,3780);
   VbbHcc_both_Aplanarity__700->SetBinContent(8,2474);
   VbbHcc_both_Aplanarity__700->SetBinContent(9,1697);
   VbbHcc_both_Aplanarity__700->SetBinContent(10,1174);
   VbbHcc_both_Aplanarity__700->SetBinContent(11,808);
   VbbHcc_both_Aplanarity__700->SetBinContent(12,562);
   VbbHcc_both_Aplanarity__700->SetBinContent(13,361);
   VbbHcc_both_Aplanarity__700->SetBinContent(14,209);
   VbbHcc_both_Aplanarity__700->SetBinContent(15,159);
   VbbHcc_both_Aplanarity__700->SetBinContent(16,102);
   VbbHcc_both_Aplanarity__700->SetBinContent(17,62);
   VbbHcc_both_Aplanarity__700->SetBinContent(18,33);
   VbbHcc_both_Aplanarity__700->SetBinContent(19,19);
   VbbHcc_both_Aplanarity__700->SetBinContent(20,14);
   VbbHcc_both_Aplanarity__700->SetBinContent(21,3);
   VbbHcc_both_Aplanarity__700->SetBinContent(22,1);
   VbbHcc_both_Aplanarity__700->SetBinContent(24,1);
   VbbHcc_both_Aplanarity__700->SetEntries(326417);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity__700->SetLineColor(ci);
   VbbHcc_both_Aplanarity__700->SetLineWidth(2);
   VbbHcc_both_Aplanarity__700->SetMarkerStyle(20);
   VbbHcc_both_Aplanarity__700->SetMarkerSize(1.2);
   VbbHcc_both_Aplanarity__700->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity__700->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity__700->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity__700->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity__700->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity__700->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity__700->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity__700->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity__700->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity__700->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity__700->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity__700->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity__700->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity__700->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity__700->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Aplanarity_fx1509[50] = {
   0.01,
   0.03,
   0.05,
   0.07,
   0.09,
   0.11,
   0.13,
   0.15,
   0.17,
   0.19,
   0.21,
   0.23,
   0.25,
   0.27,
   0.29,
   0.31,
   0.33,
   0.35,
   0.37,
   0.39,
   0.41,
   0.43,
   0.45,
   0.47,
   0.49,
   0.51,
   0.53,
   0.55,
   0.57,
   0.59,
   0.61,
   0.63,
   0.65,
   0.67,
   0.69,
   0.71,
   0.73,
   0.75,
   0.77,
   0.79,
   0.81,
   0.83,
   0.85,
   0.87,
   0.89,
   0.91,
   0.93,
   0.95,
   0.97,
   0.99};
   Double_t Graph_from_VbbHcc_both_Aplanarity_fy1509[50] = {
   152682.6,
   42238.83,
   22407.61,
   14259.11,
   5966.945,
   3754.504,
   2935.926,
   1422.464,
   3639.926,
   847.763,
   394.6065,
   692.8649,
   593.6471,
   172.5866,
   428.7451,
   12.54179,
   82.01155,
   11.0459,
   34.10005,
   0.8325546,
   0.3226983,
   0.1529247,
   0.123397,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_VbbHcc_both_Aplanarity_fex1509[50] = {
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01};
   Double_t Graph_from_VbbHcc_both_Aplanarity_fey1509[50] = {
   4804.372,
   2976.232,
   2913.528,
   1695.493,
   874.1919,
   679.6828,
   671.4574,
   394.8051,
   1786.955,
   380.5359,
   88.60288,
   380.5205,
   376.6471,
   52.73471,
   372.0444,
   1.06405,
   46.21259,
   5.926042,
   31.92977,
   0.2260089,
   0.1450825,
   0.09115745,
   0.087804,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_both_Aplanarity_fx1509,Graph_from_VbbHcc_both_Aplanarity_fy1509,Graph_from_VbbHcc_both_Aplanarity_fex1509,Graph_from_VbbHcc_both_Aplanarity_fey1509);
   gre->SetName("Graph_from_VbbHcc_both_Aplanarity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Aplanarity1509 = new TH1F("Graph_Graph_from_VbbHcc_both_Aplanarity1509","",100,0,1.1);
   Graph_Graph_from_VbbHcc_both_Aplanarity1509->SetMinimum(0);
   Graph_Graph_from_VbbHcc_both_Aplanarity1509->SetMaximum(173235.6);
   Graph_Graph_from_VbbHcc_both_Aplanarity1509->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_Aplanarity1509->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Aplanarity1509->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Aplanarity1509->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Aplanarity1509->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Aplanarity1509->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Aplanarity1509->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Aplanarity1509->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Aplanarity1509->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Aplanarity1509->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Aplanarity1509->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_Aplanarity1509->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Aplanarity1509->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Aplanarity1509->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Aplanarity1509->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Aplanarity1509->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Aplanarity1509);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Aplanarity","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_Aplanarity","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Aplanarity_both_18->cd();
  
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
   
   TH1D *data_mc_ratio__701 = new TH1D("data_mc_ratio__701","",50,0,1);
   data_mc_ratio__701->SetBinContent(1,1.31125);
   data_mc_ratio__701->SetBinContent(2,1.368622);
   data_mc_ratio__701->SetBinContent(3,1.203654);
   data_mc_ratio__701->SetBinContent(4,1.058902);
   data_mc_ratio__701->SetBinContent(5,1.529929);
   data_mc_ratio__701->SetBinContent(6,1.517111);
   data_mc_ratio__701->SetBinContent(7,1.287498);
   data_mc_ratio__701->SetBinContent(8,1.739236);
   data_mc_ratio__701->SetBinContent(9,0.4662182);
   data_mc_ratio__701->SetBinContent(10,1.384821);
   data_mc_ratio__701->SetBinContent(11,2.04761);
   data_mc_ratio__701->SetBinContent(12,0.8111249);
   data_mc_ratio__701->SetBinContent(13,0.6081054);
   data_mc_ratio__701->SetBinContent(14,1.210986);
   data_mc_ratio__701->SetBinContent(15,0.3708498);
   data_mc_ratio__701->SetBinContent(16,8.132809);
   data_mc_ratio__701->SetBinContent(17,0.7559911);
   data_mc_ratio__701->SetBinContent(18,2.987534);
   data_mc_ratio__701->SetBinContent(19,0.557184);
   data_mc_ratio__701->SetBinContent(20,16.81571);
   data_mc_ratio__701->SetBinContent(21,9.296609);
   data_mc_ratio__701->SetBinContent(22,6.539166);
   data_mc_ratio__701->SetBinError(1,0.002930542);
   data_mc_ratio__701->SetBinError(2,0.005692275);
   data_mc_ratio__701->SetBinError(3,0.00732914);
   data_mc_ratio__701->SetBinError(4,0.008617506);
   data_mc_ratio__701->SetBinError(5,0.01601252);
   data_mc_ratio__701->SetBinError(6,0.02010168);
   data_mc_ratio__701->SetBinError(7,0.02094116);
   data_mc_ratio__701->SetBinError(8,0.03496702);
   data_mc_ratio__701->SetBinError(9,0.01131744);
   data_mc_ratio__701->SetBinError(10,0.04041658);
   data_mc_ratio__701->SetBinError(11,0.07203466);
   data_mc_ratio__701->SetBinError(12,0.03421524);
   data_mc_ratio__701->SetBinError(13,0.03200555);
   data_mc_ratio__701->SetBinError(14,0.08376567);
   data_mc_ratio__701->SetBinError(15,0.0294103);
   data_mc_ratio__701->SetBinError(16,0.8052681);
   data_mc_ratio__701->SetBinError(17,0.09601096);
   data_mc_ratio__701->SetBinError(18,0.5200629);
   data_mc_ratio__701->SetBinError(19,0.1278268);
   data_mc_ratio__701->SetBinError(20,4.494188);
   data_mc_ratio__701->SetBinError(21,5.3674);
   data_mc_ratio__701->SetBinError(22,6.539166);
   data_mc_ratio__701->SetMinimum(0.4);
   data_mc_ratio__701->SetMaximum(1.6);
   data_mc_ratio__701->SetEntries(26.20457);
   data_mc_ratio__701->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__701->SetLineColor(ci);
   data_mc_ratio__701->SetLineWidth(2);
   data_mc_ratio__701->SetMarkerStyle(20);
   data_mc_ratio__701->SetMarkerSize(1.2);
   data_mc_ratio__701->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__701->GetXaxis()->SetRange(1,50);
   data_mc_ratio__701->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__701->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__701->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__701->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__701->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__701->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__701->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__701->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__701->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__701->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__701->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__701->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__701->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__701->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__701->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__701->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__701->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1510[50] = {
   0.01,
   0.03,
   0.05,
   0.07,
   0.09,
   0.11,
   0.13,
   0.15,
   0.17,
   0.19,
   0.21,
   0.23,
   0.25,
   0.27,
   0.29,
   0.31,
   0.33,
   0.35,
   0.37,
   0.39,
   0.41,
   0.43,
   0.45,
   0.47,
   0.49,
   0.51,
   0.53,
   0.55,
   0.57,
   0.59,
   0.61,
   0.63,
   0.65,
   0.67,
   0.69,
   0.71,
   0.73,
   0.75,
   0.77,
   0.79,
   0.81,
   0.83,
   0.85,
   0.87,
   0.89,
   0.91,
   0.93,
   0.95,
   0.97,
   0.99};
   Double_t Graph_from_mc_statistical_error_fy1510[50] = {
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
   1,
   1};
   Double_t Graph_from_mc_statistical_error_fex1510[50] = {
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01};
   Double_t Graph_from_mc_statistical_error_fey1510[50] = {
   0.03146641,
   0.07046199,
   0.1300241,
   0.1189059,
   0.1465058,
   0.1810313,
   0.2287038,
   0.2775502,
   0.4909315,
   0.4488706,
   0.2245348,
   0.5491987,
   0.6344629,
   0.3055551,
   0.867752,
   0.08484039,
   0.5634888,
   0.5364924,
   0.9363557,
   0.2714643,
   0.4495918,
   0.5960937,
   0.7115568,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1510,Graph_from_mc_statistical_error_fy1510,Graph_from_mc_statistical_error_fex1510,Graph_from_mc_statistical_error_fey1510);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1510 = new TH1F("Graph_Graph_from_mc_statistical_error1510","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1510->SetMinimum(0.05727988);
   Graph_Graph_from_mc_statistical_error1510->SetMaximum(2.123627);
   Graph_Graph_from_mc_statistical_error1510->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1510->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1510->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1510->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1510->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1510->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1510->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1510->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1510->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1510->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1510->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1510->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1510->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1510->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1510->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1510->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1510);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_both_18->cd();
   Aplanarity_both_18->Modified();
   Aplanarity_both_18->cd();
   Aplanarity_both_18->SetSelected(Aplanarity_both_18);
}

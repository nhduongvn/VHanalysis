void Z_pt_VbbHcc_18()
{
//=========Macro generated from canvas: Z_pt_VbbHcc_18/Z_pt_VbbHcc_18
//=========  (Tue Nov 22 09:15:59 2022) by ROOT version 6.14/09
   TCanvas *Z_pt_VbbHcc_18 = new TCanvas("Z_pt_VbbHcc_18", "Z_pt_VbbHcc_18",0,0,600,600);
   Z_pt_VbbHcc_18->SetHighLightColor(2);
   Z_pt_VbbHcc_18->Range(0,0,1,1);
   Z_pt_VbbHcc_18->SetFillColor(0);
   Z_pt_VbbHcc_18->SetFillStyle(4000);
   Z_pt_VbbHcc_18->SetBorderMode(0);
   Z_pt_VbbHcc_18->SetBorderSize(2);
   Z_pt_VbbHcc_18->SetFrameFillStyle(1000);
   Z_pt_VbbHcc_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(116.1295,-6305.804,1562.903,6299508);
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
   st->SetMaximum(5398978);
   
   TH1F *st_stack_11 = new TH1F("st_stack_11","",40,0,2000);
   st_stack_11->SetMinimum(0.01);
   st_stack_11->SetMaximum(5668927);
   st_stack_11->SetDirectory(0);
   st_stack_11->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_11->SetLineColor(ci);
   st_stack_11->GetXaxis()->SetRange(7,30);
   st_stack_11->GetXaxis()->SetLabelFont(42);
   st_stack_11->GetXaxis()->SetLabelSize(0.035);
   st_stack_11->GetXaxis()->SetTitleSize(0.035);
   st_stack_11->GetXaxis()->SetTitleFont(42);
   st_stack_11->GetYaxis()->SetTitle("Events/50.0");
   st_stack_11->GetYaxis()->SetLabelFont(42);
   st_stack_11->GetYaxis()->SetLabelSize(0.05);
   st_stack_11->GetYaxis()->SetTitleSize(0.057);
   st_stack_11->GetYaxis()->SetTitleOffset(1.2);
   st_stack_11->GetYaxis()->SetTitleFont(42);
   st_stack_11->GetZaxis()->SetLabelFont(42);
   st_stack_11->GetZaxis()->SetLabelSize(0.035);
   st_stack_11->GetZaxis()->SetTitleSize(0.035);
   st_stack_11->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_11);
   
   
   TH1D *VbbHcc_algo_Z_pt_stack_1 = new TH1D("VbbHcc_algo_Z_pt_stack_1","",40,0,2000);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(1,628437);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(2,2332779);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(3,1000900);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(4,16686.3);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(1,33202.76);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(2,70049.76);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(3,43294.86);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(4,5232.229);
   VbbHcc_algo_Z_pt_stack_1->SetEntries(2374);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Z_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_pt_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_Z_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_pt_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_pt_stack_2 = new TH1D("VbbHcc_algo_Z_pt_stack_2","",40,0,2000);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(1,3598.541);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(2,9585.413);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(3,5578.636);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(4,2174.063);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(5,994.3649);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(6,506.3492);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(7,288.9897);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(8,169.5935);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(9,98.17244);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(10,77.80596);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(11,42.99617);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(12,29.13524);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(13,21.95071);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(14,16.90298);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(15,12.98753);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(16,3.647677);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(17,4.009176);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(18,5.538959);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(19,1.721911);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(20,0.632126);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(21,0.5068255);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(22,0.7428234);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(23,0.8048005);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(24,0.3564947);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(25,0.5334288);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(26,0.3227898);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(27,0.5571186);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(28,0.3213483);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(29,-0.05821845);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(30,-0.09527578);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(31,0.3918381);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(32,0.07338273);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(33,0.6871089);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(34,0.3053592);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(38,-0.05673641);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(1,23.78401);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(2,39.39233);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(3,31.10857);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(4,20.80135);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(5,13.92875);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(6,10.09472);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(7,7.973169);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(8,6.457894);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(9,4.723159);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(10,4.53029);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(11,3.282386);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(12,2.785565);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(13,2.403966);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(14,2.079871);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(15,3.723158);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(16,0.9115991);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(17,1.026705);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(18,1.25291);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(19,0.6273304);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(20,0.3806838);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(21,0.4110492);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(22,0.4862167);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(23,0.5162854);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(24,0.3127469);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(25,0.4251213);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(26,0.2338894);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(27,0.3940927);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(28,0.2663549);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(29,0.05821845);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(30,0.09527578);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(31,0.3008506);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(32,0.07338273);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(33,0.4903409);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(34,0.3053592);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(38,0.05673641);
   VbbHcc_algo_Z_pt_stack_2->SetEntries(331043);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Z_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_pt_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_Z_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_pt_stack_2,"");
   
   TH1D *VbbHcc_algo_Z_pt_stack_3 = new TH1D("VbbHcc_algo_Z_pt_stack_3","",40,0,2000);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(1,29252.22);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(2,81541.59);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(3,57713.64);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(4,15917.51);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(5,6823.561);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(6,3433.246);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(7,1842.313);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(8,1044.083);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(9,642.7262);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(10,411.3269);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(11,265.3979);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(12,183.2678);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(13,125.92);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(14,85.24628);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(15,58.78989);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(16,41.77322);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(17,28.67174);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(18,23.00102);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(19,18.86846);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(20,10.91455);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(21,9.392211);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(22,7.537516);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(23,4.424347);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(24,4.015272);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(25,2.584295);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(26,1.563751);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(27,2.35566);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(28,1.120735);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(29,0.9405362);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(30,0.6358011);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(31,0.7062715);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(32,0.1780917);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(33,0.6447793);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(34,0.2010398);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(35,0.1599035);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(36,0.1451029);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(37,0.07422835);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(40,0.09870307);
   VbbHcc_algo_Z_pt_stack_3->SetBinContent(41,0.07422835);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(1,47.08471);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(2,80.0995);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(3,68.06483);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(4,35.35062);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(5,23.1761);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(6,16.59961);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(7,12.26202);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(8,9.56448);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(9,7.331357);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(10,5.985789);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(11,4.616585);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(12,4.000273);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(13,3.242011);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(14,2.783074);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(15,2.163582);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(16,1.941983);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(17,1.484919);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(18,1.336674);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(19,1.69953);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(20,0.8998719);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(21,0.8667462);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(22,0.7862016);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(23,0.5936012);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(24,0.55688);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(25,0.4325876);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(26,0.3320744);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(27,0.4450784);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(28,0.3147518);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(29,0.2660065);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(30,0.2188504);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(31,0.2270565);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(32,0.1269144);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(33,0.2350813);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(34,0.1223965);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(35,0.1133582);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(36,0.102745);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(37,0.07422835);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(40,0.09870307);
   VbbHcc_algo_Z_pt_stack_3->SetBinError(41,0.07422835);
   VbbHcc_algo_Z_pt_stack_3->SetEntries(3142446);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Z_pt_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_pt_stack_3->SetLineColor(ci);
   VbbHcc_algo_Z_pt_stack_3->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_Z_pt_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_pt_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_pt_stack_3,"");
   
   TH1D *VbbHcc_algo_Z_pt_stack_4 = new TH1D("VbbHcc_algo_Z_pt_stack_4","",40,0,2000);
   VbbHcc_algo_Z_pt_stack_4->SetBinContent(1,266.7494);
   VbbHcc_algo_Z_pt_stack_4->SetBinContent(2,812.1554);
   VbbHcc_algo_Z_pt_stack_4->SetBinContent(3,2025.689);
   VbbHcc_algo_Z_pt_stack_4->SetBinContent(4,2454.975);
   VbbHcc_algo_Z_pt_stack_4->SetBinContent(5,1262.979);
   VbbHcc_algo_Z_pt_stack_4->SetBinContent(6,258.3721);
   VbbHcc_algo_Z_pt_stack_4->SetBinContent(7,12.74445);
   VbbHcc_algo_Z_pt_stack_4->SetBinContent(8,1.810024);
   VbbHcc_algo_Z_pt_stack_4->SetBinError(1,12.46436);
   VbbHcc_algo_Z_pt_stack_4->SetBinError(2,21.72656);
   VbbHcc_algo_Z_pt_stack_4->SetBinError(3,35.80817);
   VbbHcc_algo_Z_pt_stack_4->SetBinError(4,38.98751);
   VbbHcc_algo_Z_pt_stack_4->SetBinError(5,27.78696);
   VbbHcc_algo_Z_pt_stack_4->SetBinError(6,12.09656);
   VbbHcc_algo_Z_pt_stack_4->SetBinError(7,2.609433);
   VbbHcc_algo_Z_pt_stack_4->SetBinError(8,1.054321);
   VbbHcc_algo_Z_pt_stack_4->SetEntries(12998);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Z_pt_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_pt_stack_4->SetLineColor(ci);
   VbbHcc_algo_Z_pt_stack_4->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_Z_pt_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_pt_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_pt_stack_4,"");
   
   TH1D *VbbHcc_algo_Z_pt_stack_5 = new TH1D("VbbHcc_algo_Z_pt_stack_5","",40,0,2000);
   VbbHcc_algo_Z_pt_stack_5->SetBinContent(1,151.139);
   VbbHcc_algo_Z_pt_stack_5->SetBinContent(2,449.8027);
   VbbHcc_algo_Z_pt_stack_5->SetBinContent(3,885.6023);
   VbbHcc_algo_Z_pt_stack_5->SetBinContent(4,1020.855);
   VbbHcc_algo_Z_pt_stack_5->SetBinContent(5,582.3051);
   VbbHcc_algo_Z_pt_stack_5->SetBinContent(6,92.80377);
   VbbHcc_algo_Z_pt_stack_5->SetBinContent(7,2.819805);
   VbbHcc_algo_Z_pt_stack_5->SetBinError(1,19.30207);
   VbbHcc_algo_Z_pt_stack_5->SetBinError(2,33.47916);
   VbbHcc_algo_Z_pt_stack_5->SetBinError(3,47.57828);
   VbbHcc_algo_Z_pt_stack_5->SetBinError(4,51.41366);
   VbbHcc_algo_Z_pt_stack_5->SetBinError(5,43.10565);
   VbbHcc_algo_Z_pt_stack_5->SetBinError(6,16.1339);
   VbbHcc_algo_Z_pt_stack_5->SetBinError(7,2.819805);
   VbbHcc_algo_Z_pt_stack_5->SetEntries(1311);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Z_pt_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_pt_stack_5->SetLineColor(ci);
   VbbHcc_algo_Z_pt_stack_5->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_Z_pt_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_pt_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_pt_stack_5,"");
   
   TH1D *VbbHcc_algo_Z_pt_stack_6 = new TH1D("VbbHcc_algo_Z_pt_stack_6","",40,0,2000);
   VbbHcc_algo_Z_pt_stack_6->SetBinContent(1,22.77634);
   VbbHcc_algo_Z_pt_stack_6->SetBinContent(2,45.10381);
   VbbHcc_algo_Z_pt_stack_6->SetBinContent(3,21.78807);
   VbbHcc_algo_Z_pt_stack_6->SetBinContent(4,5.61788);
   VbbHcc_algo_Z_pt_stack_6->SetBinContent(5,5.294715);
   VbbHcc_algo_Z_pt_stack_6->SetBinContent(6,1.713676);
   VbbHcc_algo_Z_pt_stack_6->SetBinContent(7,1.207856);
   VbbHcc_algo_Z_pt_stack_6->SetBinContent(8,0.482459);
   VbbHcc_algo_Z_pt_stack_6->SetBinContent(9,1.095211);
   VbbHcc_algo_Z_pt_stack_6->SetBinContent(10,0.7578162);
   VbbHcc_algo_Z_pt_stack_6->SetBinContent(18,0.3664998);
   VbbHcc_algo_Z_pt_stack_6->SetBinError(1,3.191837);
   VbbHcc_algo_Z_pt_stack_6->SetBinError(2,4.331016);
   VbbHcc_algo_Z_pt_stack_6->SetBinError(3,2.853514);
   VbbHcc_algo_Z_pt_stack_6->SetBinError(4,1.548464);
   VbbHcc_algo_Z_pt_stack_6->SetBinError(5,1.457955);
   VbbHcc_algo_Z_pt_stack_6->SetBinError(6,0.7692966);
   VbbHcc_algo_Z_pt_stack_6->SetBinError(7,0.6981144);
   VbbHcc_algo_Z_pt_stack_6->SetBinError(8,0.482459);
   VbbHcc_algo_Z_pt_stack_6->SetBinError(9,0.6402972);
   VbbHcc_algo_Z_pt_stack_6->SetBinError(10,0.5364088);
   VbbHcc_algo_Z_pt_stack_6->SetBinError(18,0.3664998);
   VbbHcc_algo_Z_pt_stack_6->SetEntries(289);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Z_pt_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_pt_stack_6->SetLineColor(ci);
   VbbHcc_algo_Z_pt_stack_6->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_Z_pt_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_pt_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_pt_stack_6,"");
   
   TH1D *VbbHcc_algo_Z_pt_stack_7 = new TH1D("VbbHcc_algo_Z_pt_stack_7","",40,0,2000);
   VbbHcc_algo_Z_pt_stack_7->SetBinContent(1,54.45484);
   VbbHcc_algo_Z_pt_stack_7->SetBinContent(2,123.5256);
   VbbHcc_algo_Z_pt_stack_7->SetBinContent(3,94.4044);
   VbbHcc_algo_Z_pt_stack_7->SetBinContent(4,43.50632);
   VbbHcc_algo_Z_pt_stack_7->SetBinContent(5,26.20535);
   VbbHcc_algo_Z_pt_stack_7->SetBinContent(6,14.73132);
   VbbHcc_algo_Z_pt_stack_7->SetBinContent(7,9.242694);
   VbbHcc_algo_Z_pt_stack_7->SetBinContent(8,5.913831);
   VbbHcc_algo_Z_pt_stack_7->SetBinContent(9,2.392136);
   VbbHcc_algo_Z_pt_stack_7->SetBinContent(10,1.157465);
   VbbHcc_algo_Z_pt_stack_7->SetBinContent(12,0.194337);
   VbbHcc_algo_Z_pt_stack_7->SetBinContent(13,0.4876403);
   VbbHcc_algo_Z_pt_stack_7->SetBinContent(15,0.2276773);
   VbbHcc_algo_Z_pt_stack_7->SetBinContent(22,0.2183893);
   VbbHcc_algo_Z_pt_stack_7->SetBinError(1,3.613303);
   VbbHcc_algo_Z_pt_stack_7->SetBinError(2,5.471132);
   VbbHcc_algo_Z_pt_stack_7->SetBinError(3,4.764232);
   VbbHcc_algo_Z_pt_stack_7->SetBinError(4,3.234931);
   VbbHcc_algo_Z_pt_stack_7->SetBinError(5,2.472848);
   VbbHcc_algo_Z_pt_stack_7->SetBinError(6,1.921039);
   VbbHcc_algo_Z_pt_stack_7->SetBinError(7,1.492438);
   VbbHcc_algo_Z_pt_stack_7->SetBinError(8,1.21343);
   VbbHcc_algo_Z_pt_stack_7->SetBinError(9,0.7732801);
   VbbHcc_algo_Z_pt_stack_7->SetBinError(10,0.5240485);
   VbbHcc_algo_Z_pt_stack_7->SetBinError(12,0.194337);
   VbbHcc_algo_Z_pt_stack_7->SetBinError(13,0.3550547);
   VbbHcc_algo_Z_pt_stack_7->SetBinError(15,0.2276773);
   VbbHcc_algo_Z_pt_stack_7->SetBinError(22,0.2183893);
   VbbHcc_algo_Z_pt_stack_7->SetEntries(1657);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Z_pt_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_pt_stack_7->SetLineColor(ci);
   VbbHcc_algo_Z_pt_stack_7->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_Z_pt_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_pt_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_pt_stack_7,"");
   
   TH1D *VbbHcc_algo_Z_pt_stack_8 = new TH1D("VbbHcc_algo_Z_pt_stack_8","",40,0,2000);
   VbbHcc_algo_Z_pt_stack_8->SetBinContent(1,71.05596);
   VbbHcc_algo_Z_pt_stack_8->SetBinContent(2,142.8975);
   VbbHcc_algo_Z_pt_stack_8->SetBinContent(3,90.43766);
   VbbHcc_algo_Z_pt_stack_8->SetBinContent(4,39.43661);
   VbbHcc_algo_Z_pt_stack_8->SetBinContent(5,20.65761);
   VbbHcc_algo_Z_pt_stack_8->SetBinContent(6,9.965544);
   VbbHcc_algo_Z_pt_stack_8->SetBinContent(7,7.496351);
   VbbHcc_algo_Z_pt_stack_8->SetBinContent(8,2.57563);
   VbbHcc_algo_Z_pt_stack_8->SetBinContent(9,2.080595);
   VbbHcc_algo_Z_pt_stack_8->SetBinContent(10,0.7994975);
   VbbHcc_algo_Z_pt_stack_8->SetBinContent(13,0.2887973);
   VbbHcc_algo_Z_pt_stack_8->SetBinContent(18,0.2263142);
   VbbHcc_algo_Z_pt_stack_8->SetBinError(1,4.158761);
   VbbHcc_algo_Z_pt_stack_8->SetBinError(2,5.906048);
   VbbHcc_algo_Z_pt_stack_8->SetBinError(3,4.693221);
   VbbHcc_algo_Z_pt_stack_8->SetBinError(4,3.876647);
   VbbHcc_algo_Z_pt_stack_8->SetBinError(5,2.161832);
   VbbHcc_algo_Z_pt_stack_8->SetBinError(6,1.561978);
   VbbHcc_algo_Z_pt_stack_8->SetBinError(7,1.344207);
   VbbHcc_algo_Z_pt_stack_8->SetBinError(8,0.768951);
   VbbHcc_algo_Z_pt_stack_8->SetBinError(9,0.7004864);
   VbbHcc_algo_Z_pt_stack_8->SetBinError(10,0.4254894);
   VbbHcc_algo_Z_pt_stack_8->SetBinError(13,0.2887973);
   VbbHcc_algo_Z_pt_stack_8->SetBinError(18,0.2263142);
   VbbHcc_algo_Z_pt_stack_8->SetEntries(1688);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Z_pt_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_pt_stack_8->SetLineColor(ci);
   VbbHcc_algo_Z_pt_stack_8->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_Z_pt_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_pt_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_pt_stack_8,"");
   
   TH1D *VbbHcc_algo_Z_pt_stack_9 = new TH1D("VbbHcc_algo_Z_pt_stack_9","",40,0,2000);
   VbbHcc_algo_Z_pt_stack_9->SetBinContent(1,11.22877);
   VbbHcc_algo_Z_pt_stack_9->SetBinContent(2,31.93977);
   VbbHcc_algo_Z_pt_stack_9->SetBinContent(3,24.43257);
   VbbHcc_algo_Z_pt_stack_9->SetBinContent(4,14.51459);
   VbbHcc_algo_Z_pt_stack_9->SetBinContent(5,8.18272);
   VbbHcc_algo_Z_pt_stack_9->SetBinContent(6,4.882344);
   VbbHcc_algo_Z_pt_stack_9->SetBinContent(7,2.940903);
   VbbHcc_algo_Z_pt_stack_9->SetBinContent(8,1.828458);
   VbbHcc_algo_Z_pt_stack_9->SetBinContent(9,1.068922);
   VbbHcc_algo_Z_pt_stack_9->SetBinContent(10,0.6540633);
   VbbHcc_algo_Z_pt_stack_9->SetBinContent(11,0.2448605);
   VbbHcc_algo_Z_pt_stack_9->SetBinContent(12,0.1722176);
   VbbHcc_algo_Z_pt_stack_9->SetBinContent(13,0.08830953);
   VbbHcc_algo_Z_pt_stack_9->SetBinContent(14,0.0322988);
   VbbHcc_algo_Z_pt_stack_9->SetBinContent(15,0.01773098);
   VbbHcc_algo_Z_pt_stack_9->SetBinContent(16,0.008805736);
   VbbHcc_algo_Z_pt_stack_9->SetBinContent(17,0.01026759);
   VbbHcc_algo_Z_pt_stack_9->SetBinContent(18,0.001739166);
   VbbHcc_algo_Z_pt_stack_9->SetBinContent(19,0.003287269);
   VbbHcc_algo_Z_pt_stack_9->SetBinContent(20,0.002472148);
   VbbHcc_algo_Z_pt_stack_9->SetBinContent(21,0.001104061);
   VbbHcc_algo_Z_pt_stack_9->SetBinContent(22,0.006936253);
   VbbHcc_algo_Z_pt_stack_9->SetBinContent(24,0.002472148);
   VbbHcc_algo_Z_pt_stack_9->SetBinContent(25,0.00320311);
   VbbHcc_algo_Z_pt_stack_9->SetBinContent(33,0.002142527);
   VbbHcc_algo_Z_pt_stack_9->SetBinContent(34,0.002028083);
   VbbHcc_algo_Z_pt_stack_9->SetBinError(1,0.2133974);
   VbbHcc_algo_Z_pt_stack_9->SetBinError(2,0.3116705);
   VbbHcc_algo_Z_pt_stack_9->SetBinError(3,0.2906549);
   VbbHcc_algo_Z_pt_stack_9->SetBinError(4,0.21182);
   VbbHcc_algo_Z_pt_stack_9->SetBinError(5,0.1866237);
   VbbHcc_algo_Z_pt_stack_9->SetBinError(6,0.1195383);
   VbbHcc_algo_Z_pt_stack_9->SetBinError(7,0.09225787);
   VbbHcc_algo_Z_pt_stack_9->SetBinError(8,0.07526945);
   VbbHcc_algo_Z_pt_stack_9->SetBinError(9,0.06706955);
   VbbHcc_algo_Z_pt_stack_9->SetBinError(10,0.1132032);
   VbbHcc_algo_Z_pt_stack_9->SetBinError(11,0.02546085);
   VbbHcc_algo_Z_pt_stack_9->SetBinError(12,0.02178799);
   VbbHcc_algo_Z_pt_stack_9->SetBinError(13,0.01638161);
   VbbHcc_algo_Z_pt_stack_9->SetBinError(14,0.009427354);
   VbbHcc_algo_Z_pt_stack_9->SetBinError(15,0.00654556);
   VbbHcc_algo_Z_pt_stack_9->SetBinError(16,0.00453696);
   VbbHcc_algo_Z_pt_stack_9->SetBinError(17,0.004839497);
   VbbHcc_algo_Z_pt_stack_9->SetBinError(18,0.001739166);
   VbbHcc_algo_Z_pt_stack_9->SetBinError(19,0.003287269);
   VbbHcc_algo_Z_pt_stack_9->SetBinError(20,0.002472148);
   VbbHcc_algo_Z_pt_stack_9->SetBinError(21,0.001104061);
   VbbHcc_algo_Z_pt_stack_9->SetBinError(22,0.004019745);
   VbbHcc_algo_Z_pt_stack_9->SetBinError(24,0.002472148);
   VbbHcc_algo_Z_pt_stack_9->SetBinError(25,0.00320311);
   VbbHcc_algo_Z_pt_stack_9->SetBinError(33,0.002142527);
   VbbHcc_algo_Z_pt_stack_9->SetBinError(34,0.002028083);
   VbbHcc_algo_Z_pt_stack_9->SetEntries(40744);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Z_pt_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_pt_stack_9->SetLineColor(ci);
   VbbHcc_algo_Z_pt_stack_9->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_Z_pt_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_pt_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_pt_stack_9,"");
   
   TH1D *VbbHcc_algo_Z_pt_stack_10 = new TH1D("VbbHcc_algo_Z_pt_stack_10","",40,0,2000);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(1,1.292314);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(2,5.304071);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(3,7.11203);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(4,4.520377);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(5,2.483875);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(6,1.436917);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(7,0.8624712);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(8,0.5244901);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(9,0.342897);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(10,0.2419319);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(11,0.1454792);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(12,0.1057619);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(13,0.05595753);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(14,0.04110728);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(15,0.02744193);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(16,0.02815632);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(17,0.01376014);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(18,0.01452643);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(19,0.01113084);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(20,0.007061935);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(21,0.006309262);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(22,0.005551461);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(23,0.003564037);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(24,0.003693031);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(25,0.00482899);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(26,0.0007123036);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(27,0.001294606);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(28,0.000625931);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(29,0.002549482);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(30,0.001333082);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(33,0.000646865);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(34,0.001924105);
   VbbHcc_algo_Z_pt_stack_10->SetBinContent(41,0.0006263911);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(1,0.02866559);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(2,0.05818474);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(3,0.06746811);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(4,0.0537365);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(5,0.03982428);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(6,0.03025493);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(7,0.02339127);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(8,0.0182456);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(9,0.01475358);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(10,0.01241853);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(11,0.009650342);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(12,0.008192222);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(13,0.00599202);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(14,0.005075012);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(15,0.004196337);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(16,0.004234977);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(17,0.003006214);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(18,0.003023768);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(19,0.002707088);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(20,0.002142833);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(21,0.001999168);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(22,0.001860909);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(23,0.001461382);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(24,0.001519108);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(25,0.001827062);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(26,0.0006228125);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(27,0.0009154643);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(28,0.000625931);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(29,0.001275035);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(30,0.0009443261);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(33,0.000646865);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(34,0.001111085);
   VbbHcc_algo_Z_pt_stack_10->SetBinError(41,0.0006263911);
   VbbHcc_algo_Z_pt_stack_10->SetEntries(39248);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Z_pt_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_pt_stack_10->SetLineColor(ci);
   VbbHcc_algo_Z_pt_stack_10->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_Z_pt_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_pt_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_pt_stack_10,"");
   
   TH1D *VbbHcc_algo_Z_pt_stack_11 = new TH1D("VbbHcc_algo_Z_pt_stack_11","",40,0,2000);
   VbbHcc_algo_Z_pt_stack_11->SetBinContent(1,0.2612183);
   VbbHcc_algo_Z_pt_stack_11->SetBinContent(2,1.279041);
   VbbHcc_algo_Z_pt_stack_11->SetBinContent(3,1.011235);
   VbbHcc_algo_Z_pt_stack_11->SetBinContent(4,0.392319);
   VbbHcc_algo_Z_pt_stack_11->SetBinContent(5,0.1467358);
   VbbHcc_algo_Z_pt_stack_11->SetBinContent(6,0.06919398);
   VbbHcc_algo_Z_pt_stack_11->SetBinContent(7,0.05740679);
   VbbHcc_algo_Z_pt_stack_11->SetBinContent(8,0.02988815);
   VbbHcc_algo_Z_pt_stack_11->SetBinContent(9,0.008392194);
   VbbHcc_algo_Z_pt_stack_11->SetBinContent(10,0.007144636);
   VbbHcc_algo_Z_pt_stack_11->SetBinContent(11,0.002471056);
   VbbHcc_algo_Z_pt_stack_11->SetBinError(1,0.02606392);
   VbbHcc_algo_Z_pt_stack_11->SetBinError(2,0.05895651);
   VbbHcc_algo_Z_pt_stack_11->SetBinError(3,0.05265575);
   VbbHcc_algo_Z_pt_stack_11->SetBinError(4,0.03243071);
   VbbHcc_algo_Z_pt_stack_11->SetBinError(5,0.01949919);
   VbbHcc_algo_Z_pt_stack_11->SetBinError(6,0.01392085);
   VbbHcc_algo_Z_pt_stack_11->SetBinError(7,0.01212541);
   VbbHcc_algo_Z_pt_stack_11->SetBinError(8,0.008914632);
   VbbHcc_algo_Z_pt_stack_11->SetBinError(9,0.004901729);
   VbbHcc_algo_Z_pt_stack_11->SetBinError(10,0.004128438);
   VbbHcc_algo_Z_pt_stack_11->SetBinError(11,0.002471056);
   VbbHcc_algo_Z_pt_stack_11->SetEntries(1458);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_pt_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_pt_stack_11->SetLineColor(ci);
   VbbHcc_algo_Z_pt_stack_11->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_Z_pt_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_pt_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_pt_stack_11,"");
   
   TH1D *VbbHcc_algo_Z_pt_stack_12 = new TH1D("VbbHcc_algo_Z_pt_stack_12","",40,0,2000);
   VbbHcc_algo_Z_pt_stack_12->SetBinContent(1,755.2928);
   VbbHcc_algo_Z_pt_stack_12->SetBinContent(2,4021.625);
   VbbHcc_algo_Z_pt_stack_12->SetBinContent(3,7569.093);
   VbbHcc_algo_Z_pt_stack_12->SetBinContent(4,3629.072);
   VbbHcc_algo_Z_pt_stack_12->SetBinContent(5,1169.094);
   VbbHcc_algo_Z_pt_stack_12->SetBinContent(6,518.2115);
   VbbHcc_algo_Z_pt_stack_12->SetBinContent(7,250.488);
   VbbHcc_algo_Z_pt_stack_12->SetBinContent(8,161.3931);
   VbbHcc_algo_Z_pt_stack_12->SetBinContent(9,31.19091);
   VbbHcc_algo_Z_pt_stack_12->SetBinContent(10,47.77878);
   VbbHcc_algo_Z_pt_stack_12->SetBinContent(11,24.87108);
   VbbHcc_algo_Z_pt_stack_12->SetBinContent(12,47.19745);
   VbbHcc_algo_Z_pt_stack_12->SetBinContent(14,23.43302);
   VbbHcc_algo_Z_pt_stack_12->SetBinContent(15,19.35116);
   VbbHcc_algo_Z_pt_stack_12->SetBinContent(16,3.933459);
   VbbHcc_algo_Z_pt_stack_12->SetBinContent(17,12.05426);
   VbbHcc_algo_Z_pt_stack_12->SetBinContent(18,12.93111);
   VbbHcc_algo_Z_pt_stack_12->SetBinContent(19,9.226369);
   VbbHcc_algo_Z_pt_stack_12->SetBinError(1,73.03493);
   VbbHcc_algo_Z_pt_stack_12->SetBinError(2,169.7771);
   VbbHcc_algo_Z_pt_stack_12->SetBinError(3,233.4332);
   VbbHcc_algo_Z_pt_stack_12->SetBinError(4,158.338);
   VbbHcc_algo_Z_pt_stack_12->SetBinError(5,91.22238);
   VbbHcc_algo_Z_pt_stack_12->SetBinError(6,60.55872);
   VbbHcc_algo_Z_pt_stack_12->SetBinError(7,41.68305);
   VbbHcc_algo_Z_pt_stack_12->SetBinError(8,32.97915);
   VbbHcc_algo_Z_pt_stack_12->SetBinError(9,14.69587);
   VbbHcc_algo_Z_pt_stack_12->SetBinError(10,17.90607);
   VbbHcc_algo_Z_pt_stack_12->SetBinError(11,13.58777);
   VbbHcc_algo_Z_pt_stack_12->SetBinError(12,16.83178);
   VbbHcc_algo_Z_pt_stack_12->SetBinError(14,13.64471);
   VbbHcc_algo_Z_pt_stack_12->SetBinError(15,11.86161);
   VbbHcc_algo_Z_pt_stack_12->SetBinError(16,3.933459);
   VbbHcc_algo_Z_pt_stack_12->SetBinError(17,12.05426);
   VbbHcc_algo_Z_pt_stack_12->SetBinError(18,9.606409);
   VbbHcc_algo_Z_pt_stack_12->SetBinError(19,9.226369);
   VbbHcc_algo_Z_pt_stack_12->SetEntries(2917);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_pt_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_pt_stack_12->SetLineColor(ci);
   VbbHcc_algo_Z_pt_stack_12->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_Z_pt_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_pt_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_pt_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_Z_pt__21 = new TH1D("VbbHcc_algo_Z_pt__21","",40,0,2000);
   VbbHcc_algo_Z_pt__21->SetBinContent(1,29974);
   VbbHcc_algo_Z_pt__21->SetBinContent(2,86821);
   VbbHcc_algo_Z_pt__21->SetBinContent(3,163052);
   VbbHcc_algo_Z_pt__21->SetBinContent(4,190001);
   VbbHcc_algo_Z_pt__21->SetBinContent(5,136153);
   VbbHcc_algo_Z_pt__21->SetBinContent(6,83791);
   VbbHcc_algo_Z_pt__21->SetBinContent(7,53330);
   VbbHcc_algo_Z_pt__21->SetBinContent(8,35866);
   VbbHcc_algo_Z_pt__21->SetBinContent(9,21829);
   VbbHcc_algo_Z_pt__21->SetBinContent(10,12944);
   VbbHcc_algo_Z_pt__21->SetBinContent(11,7849);
   VbbHcc_algo_Z_pt__21->SetBinContent(12,4825);
   VbbHcc_algo_Z_pt__21->SetBinContent(13,3059);
   VbbHcc_algo_Z_pt__21->SetBinContent(14,2015);
   VbbHcc_algo_Z_pt__21->SetBinContent(15,1283);
   VbbHcc_algo_Z_pt__21->SetBinContent(16,863);
   VbbHcc_algo_Z_pt__21->SetBinContent(17,590);
   VbbHcc_algo_Z_pt__21->SetBinContent(18,450);
   VbbHcc_algo_Z_pt__21->SetBinContent(19,297);
   VbbHcc_algo_Z_pt__21->SetBinContent(20,198);
   VbbHcc_algo_Z_pt__21->SetBinContent(21,164);
   VbbHcc_algo_Z_pt__21->SetBinContent(22,116);
   VbbHcc_algo_Z_pt__21->SetBinContent(23,71);
   VbbHcc_algo_Z_pt__21->SetBinContent(24,57);
   VbbHcc_algo_Z_pt__21->SetBinContent(25,39);
   VbbHcc_algo_Z_pt__21->SetBinContent(26,31);
   VbbHcc_algo_Z_pt__21->SetBinContent(27,24);
   VbbHcc_algo_Z_pt__21->SetBinContent(28,16);
   VbbHcc_algo_Z_pt__21->SetBinContent(29,11);
   VbbHcc_algo_Z_pt__21->SetBinContent(30,11);
   VbbHcc_algo_Z_pt__21->SetBinContent(31,8);
   VbbHcc_algo_Z_pt__21->SetBinContent(32,4);
   VbbHcc_algo_Z_pt__21->SetBinContent(33,2);
   VbbHcc_algo_Z_pt__21->SetBinContent(34,4);
   VbbHcc_algo_Z_pt__21->SetBinContent(35,2);
   VbbHcc_algo_Z_pt__21->SetBinContent(36,4);
   VbbHcc_algo_Z_pt__21->SetBinContent(37,2);
   VbbHcc_algo_Z_pt__21->SetBinContent(38,1);
   VbbHcc_algo_Z_pt__21->SetBinContent(39,2);
   VbbHcc_algo_Z_pt__21->SetBinContent(41,2);
   VbbHcc_algo_Z_pt__21->SetEntries(835761);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_pt__21->SetLineColor(ci);
   VbbHcc_algo_Z_pt__21->SetLineWidth(2);
   VbbHcc_algo_Z_pt__21->SetMarkerStyle(20);
   VbbHcc_algo_Z_pt__21->SetMarkerSize(1.2);
   VbbHcc_algo_Z_pt__21->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_Z_pt__21->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt__21->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt__21->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt__21->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt__21->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt__21->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt__21->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt__21->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_pt__21->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt__21->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt__21->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt__21->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt__21->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt__21->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Z_pt_fx1021[40] = {
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1025,
   1075,
   1125,
   1175,
   1225,
   1275,
   1325,
   1375,
   1425,
   1475,
   1525,
   1575,
   1625,
   1675,
   1725,
   1775,
   1825,
   1875,
   1925,
   1975};
   Double_t Graph_from_VbbHcc_algo_Z_pt_fy1021[40] = {
   662622,
   2429540,
   1074912,
   41990.77,
   10895.27,
   4841.782,
   2419.163,
   1388.234,
   779.0777,
   540.5296,
   333.658,
   260.0728,
   148.7914,
   125.6557,
   91.40143,
   49.39131,
   44.7592,
   42.08017,
   29.83116,
   11.55621,
   9.90645,
   8.511216,
   5.232712,
   4.377932,
   3.125756,
   1.887253,
   2.914074,
   1.442709,
   0.8848672,
   0.5418584,
   1.09811,
   0.2514744,
   1.334678,
   0.5103512,
   0.1599035,
   0.1451029,
   0.07422835,
   -0.05673641,
   0,
   0.09870307};
   Double_t Graph_from_VbbHcc_algo_Z_pt_fex1021[40] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t Graph_from_VbbHcc_algo_Z_pt_fey1021[40] = {
   33202.89,
   70050.04,
   43295.6,
   5235.186,
   108.1472,
   66.76957,
   44.39253,
   34.98888,
   17.13269,
   19.43546,
   14.72125,
   17.52452,
   4.061953,
   14.08011,
   12.62112,
   4.480452,
   12.18869,
   9.789031,
   9.402545,
   0.9770877,
   0.9592787,
   0.9498595,
   0.7867116,
   0.6386974,
   0.6065259,
   0.4061749,
   0.5944785,
   0.4123275,
   0.2723059,
   0.238692,
   0.3769161,
   0.1466025,
   0.5437853,
   0.328984,
   0.1133582,
   0.102745,
   0.07422835,
   0.05673641,
   0,
   0.09870307};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_VbbHcc_algo_Z_pt_fx1021,Graph_from_VbbHcc_algo_Z_pt_fy1021,Graph_from_VbbHcc_algo_Z_pt_fex1021,Graph_from_VbbHcc_algo_Z_pt_fey1021);
   gre->SetName("Graph_from_VbbHcc_algo_Z_pt");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Z_pt1021 = new TH1F("Graph_Graph_from_VbbHcc_algo_Z_pt1021","",100,0,2200);
   Graph_Graph_from_VbbHcc_algo_Z_pt1021->SetMinimum(-249959.1);
   Graph_Graph_from_VbbHcc_algo_Z_pt1021->SetMaximum(2749549);
   Graph_Graph_from_VbbHcc_algo_Z_pt1021->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_Z_pt1021->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Z_pt1021->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Z_pt1021->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_pt1021->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_pt1021->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_pt1021->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_pt1021->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_pt1021->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_pt1021->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_pt1021->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_Z_pt1021->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_pt1021->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_pt1021->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_pt1021->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_pt1021->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Z_pt1021);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_pt","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_pt_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_pt_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_pt_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_pt_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_pt_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_pt_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_pt_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_pt_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_pt_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_pt_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_pt_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_pt_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_Z_pt","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_pt_VbbHcc_18->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(116.1295,-0.2774193,1562.903,1.658065);
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
   
   TH1D *data_mc_ratio__22 = new TH1D("data_mc_ratio__22","",40,0,2000);
   data_mc_ratio__22->SetBinContent(1,0.04523544);
   data_mc_ratio__22->SetBinContent(2,0.03573557);
   data_mc_ratio__22->SetBinContent(3,0.1516887);
   data_mc_ratio__22->SetBinContent(4,4.524828);
   data_mc_ratio__22->SetBinContent(5,12.49652);
   data_mc_ratio__22->SetBinContent(6,17.30582);
   data_mc_ratio__22->SetBinContent(7,22.04482);
   data_mc_ratio__22->SetBinContent(8,25.8357);
   data_mc_ratio__22->SetBinContent(9,28.01903);
   data_mc_ratio__22->SetBinContent(10,23.94688);
   data_mc_ratio__22->SetBinContent(11,23.52409);
   data_mc_ratio__22->SetBinContent(12,18.5525);
   data_mc_ratio__22->SetBinContent(13,20.55898);
   data_mc_ratio__22->SetBinContent(14,16.03588);
   data_mc_ratio__22->SetBinContent(15,14.03698);
   data_mc_ratio__22->SetBinContent(16,17.47271);
   data_mc_ratio__22->SetBinContent(17,13.18165);
   data_mc_ratio__22->SetBinContent(18,10.69387);
   data_mc_ratio__22->SetBinContent(19,9.956032);
   data_mc_ratio__22->SetBinContent(20,17.13364);
   data_mc_ratio__22->SetBinContent(21,16.55487);
   data_mc_ratio__22->SetBinContent(22,13.62907);
   data_mc_ratio__22->SetBinContent(23,13.56849);
   data_mc_ratio__22->SetBinContent(24,13.01985);
   data_mc_ratio__22->SetBinContent(25,12.47698);
   data_mc_ratio__22->SetBinContent(26,16.42599);
   data_mc_ratio__22->SetBinContent(27,8.235893);
   data_mc_ratio__22->SetBinContent(28,11.09025);
   data_mc_ratio__22->SetBinContent(29,12.43124);
   data_mc_ratio__22->SetBinContent(30,20.30051);
   data_mc_ratio__22->SetBinContent(31,7.285247);
   data_mc_ratio__22->SetBinContent(32,15.90619);
   data_mc_ratio__22->SetBinContent(33,1.498489);
   data_mc_ratio__22->SetBinContent(34,7.83774);
   data_mc_ratio__22->SetBinContent(35,12.50755);
   data_mc_ratio__22->SetBinContent(36,27.56664);
   data_mc_ratio__22->SetBinContent(37,26.94388);
   data_mc_ratio__22->SetBinContent(38,-17.62537);
   data_mc_ratio__22->SetBinContent(41,26.71841);
   data_mc_ratio__22->SetBinError(1,0.0002612802);
   data_mc_ratio__22->SetBinError(2,0.0001212798);
   data_mc_ratio__22->SetBinError(3,0.0003756558);
   data_mc_ratio__22->SetBinError(4,0.01038064);
   data_mc_ratio__22->SetBinError(5,0.0338669);
   data_mc_ratio__22->SetBinError(6,0.05978517);
   data_mc_ratio__22->SetBinError(7,0.09545984);
   data_mc_ratio__22->SetBinError(8,0.1364202);
   data_mc_ratio__22->SetBinError(9,0.1896427);
   data_mc_ratio__22->SetBinError(10,0.2104819);
   data_mc_ratio__22->SetBinError(11,0.2655251);
   data_mc_ratio__22->SetBinError(12,0.2670876);
   data_mc_ratio__22->SetBinError(13,0.3717165);
   data_mc_ratio__22->SetBinError(14,0.3572361);
   data_mc_ratio__22->SetBinError(15,0.3918865);
   data_mc_ratio__22->SetBinError(16,0.5947779);
   data_mc_ratio__22->SetBinError(17,0.5426798);
   data_mc_ratio__22->SetBinError(18,0.504114);
   data_mc_ratio__22->SetBinError(19,0.5777076);
   data_mc_ratio__22->SetBinError(20,1.217635);
   data_mc_ratio__22->SetBinError(21,1.292718);
   data_mc_ratio__22->SetBinError(22,1.265428);
   data_mc_ratio__22->SetBinError(23,1.610284);
   data_mc_ratio__22->SetBinError(24,1.724521);
   data_mc_ratio__22->SetBinError(25,1.997916);
   data_mc_ratio__22->SetBinError(26,2.950194);
   data_mc_ratio__22->SetBinError(27,1.681145);
   data_mc_ratio__22->SetBinError(28,2.772561);
   data_mc_ratio__22->SetBinError(29,3.748161);
   data_mc_ratio__22->SetBinError(30,6.120833);
   data_mc_ratio__22->SetBinError(31,2.575724);
   data_mc_ratio__22->SetBinError(32,7.953096);
   data_mc_ratio__22->SetBinError(33,1.059592);
   data_mc_ratio__22->SetBinError(34,3.91887);
   data_mc_ratio__22->SetBinError(35,8.844171);
   data_mc_ratio__22->SetBinError(36,13.78332);
   data_mc_ratio__22->SetBinError(37,19.0522);
   data_mc_ratio__22->SetBinError(38,17.62537);
   data_mc_ratio__22->SetBinError(41,32.54171);
   data_mc_ratio__22->SetMinimum(0.4);
   data_mc_ratio__22->SetMaximum(1.6);
   data_mc_ratio__22->SetEntries(91.10252);
   data_mc_ratio__22->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__22->SetLineColor(ci);
   data_mc_ratio__22->SetLineWidth(2);
   data_mc_ratio__22->SetMarkerStyle(20);
   data_mc_ratio__22->SetMarkerSize(1.2);
   data_mc_ratio__22->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   data_mc_ratio__22->GetXaxis()->SetRange(7,30);
   data_mc_ratio__22->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__22->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__22->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__22->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__22->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__22->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__22->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__22->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__22->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__22->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__22->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__22->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__22->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__22->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__22->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__22->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__22->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1022[40] = {
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1025,
   1075,
   1125,
   1175,
   1225,
   1275,
   1325,
   1375,
   1425,
   1475,
   1525,
   1575,
   1625,
   1675,
   1725,
   1775,
   1825,
   1875,
   1925,
   1975};
   Double_t Graph_from_mc_statistical_error_fy1022[40] = {
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
   Double_t Graph_from_mc_statistical_error_fex1022[40] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t Graph_from_mc_statistical_error_fey1022[40] = {
   0.05010835,
   0.02883263,
   0.04027826,
   0.1246747,
   0.009926069,
   0.01379029,
   0.01835037,
   0.02520388,
   0.02199099,
   0.03595633,
   0.04412079,
   0.06738313,
   0.02729964,
   0.1120531,
   0.1380845,
   0.09071336,
   0.272317,
   0.2326281,
   0.315192,
   0.08455086,
   0.09683375,
   0.1116009,
   0.1503449,
   0.1458902,
   0.1940413,
   0.2152201,
   0.2040026,
   0.2858009,
   0.3077364,
   0.4405062,
   0.3432408,
   0.5829717,
   0.4074282,
   0.6446228,
   0.7089162,
   0.7080836,
   1,
   0,
   0,
   1};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1022,Graph_from_mc_statistical_error_fy1022,Graph_from_mc_statistical_error_fex1022,Graph_from_mc_statistical_error_fey1022);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1022 = new TH1F("Graph_Graph_from_mc_statistical_error1022","",100,0,2200);
   Graph_Graph_from_mc_statistical_error1022->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1022->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1022->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1022->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1022->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1022->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1022->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1022->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1022->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1022->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1022->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1022->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1022->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1022->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1022->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1022->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1022->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1022->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1022);
   
   gre->Draw("e2");
   TLine *line = new TLine(300,1,1500,1);
   line->Draw();
   bottomPad->Modified();
   Z_pt_VbbHcc_18->cd();
   Z_pt_VbbHcc_18->Modified();
   Z_pt_VbbHcc_18->cd();
   Z_pt_VbbHcc_18->SetSelected(Z_pt_VbbHcc_18);
}

void H_dR_tags_16()
{
//=========Macro generated from canvas: H_dR_tags_16/H_dR_tags_16
//=========  (Mon Jul 24 10:11:17 2023) by ROOT version 6.14/09
   TCanvas *H_dR_tags_16 = new TCanvas("H_dR_tags_16", "H_dR_tags_16",0,0,600,600);
   H_dR_tags_16->SetHighLightColor(2);
   H_dR_tags_16->Range(0,0,1,1);
   H_dR_tags_16->SetFillColor(0);
   H_dR_tags_16->SetFillStyle(4000);
   H_dR_tags_16->SetBorderMode(0);
   H_dR_tags_16->SetBorderSize(2);
   H_dR_tags_16->SetFrameFillStyle(1000);
   H_dR_tags_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9499975,-526.0088,6.525,525492.8);
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
   st->SetMaximum(450372.3);
   
   TH1F *st_stack_21 = new TH1F("st_stack_21","",30,0,6);
   st_stack_21->SetMinimum(0.01);
   st_stack_21->SetMaximum(472890.9);
   st_stack_21->SetDirectory(0);
   st_stack_21->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_21->SetLineColor(ci);
   st_stack_21->GetXaxis()->SetRange(1,31);
   st_stack_21->GetXaxis()->SetLabelFont(42);
   st_stack_21->GetXaxis()->SetLabelSize(0.035);
   st_stack_21->GetXaxis()->SetTitleSize(0.035);
   st_stack_21->GetXaxis()->SetTitleFont(42);
   st_stack_21->GetYaxis()->SetTitle("Events/0.2");
   st_stack_21->GetYaxis()->SetLabelFont(42);
   st_stack_21->GetYaxis()->SetLabelSize(0.05);
   st_stack_21->GetYaxis()->SetTitleSize(0.057);
   st_stack_21->GetYaxis()->SetTitleOffset(1.2);
   st_stack_21->GetYaxis()->SetTitleFont(42);
   st_stack_21->GetZaxis()->SetLabelFont(42);
   st_stack_21->GetZaxis()->SetLabelSize(0.035);
   st_stack_21->GetZaxis()->SetTitleSize(0.035);
   st_stack_21->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_21);
   
   
   TH1D *VbbHcc_tags_H_dR_stack_1 = new TH1D("VbbHcc_tags_H_dR_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(2,80.77705);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(3,133085.7);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(4,127129.5);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(5,98049.58);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(6,87269.93);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(7,88417.19);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(8,93110.97);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(9,94377.08);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(10,105609.3);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(11,129860);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(12,137699.7);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(13,130860.9);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(14,140882.1);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(15,158498.9);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(16,168303);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(17,155283.3);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(18,148759);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(19,131746);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(20,115789.2);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(21,94985.86);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(22,89412.98);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(23,64723.1);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(24,87360.96);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(25,46265);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(26,39120.17);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(27,28827.05);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(28,25942.94);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(29,26627.95);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(30,12217.19);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(31,14034.06);
   VbbHcc_tags_H_dR_stack_1->SetBinError(2,40.25011);
   VbbHcc_tags_H_dR_stack_1->SetBinError(3,5931.384);
   VbbHcc_tags_H_dR_stack_1->SetBinError(4,5226.994);
   VbbHcc_tags_H_dR_stack_1->SetBinError(5,4996.013);
   VbbHcc_tags_H_dR_stack_1->SetBinError(6,4632.506);
   VbbHcc_tags_H_dR_stack_1->SetBinError(7,5417.269);
   VbbHcc_tags_H_dR_stack_1->SetBinError(8,5385.953);
   VbbHcc_tags_H_dR_stack_1->SetBinError(9,5026.488);
   VbbHcc_tags_H_dR_stack_1->SetBinError(10,6023.15);
   VbbHcc_tags_H_dR_stack_1->SetBinError(11,22197.43);
   VbbHcc_tags_H_dR_stack_1->SetBinError(12,22986.84);
   VbbHcc_tags_H_dR_stack_1->SetBinError(13,6171.584);
   VbbHcc_tags_H_dR_stack_1->SetBinError(14,5523.838);
   VbbHcc_tags_H_dR_stack_1->SetBinError(15,7120.465);
   VbbHcc_tags_H_dR_stack_1->SetBinError(16,7154.611);
   VbbHcc_tags_H_dR_stack_1->SetBinError(17,6945.297);
   VbbHcc_tags_H_dR_stack_1->SetBinError(18,6944.36);
   VbbHcc_tags_H_dR_stack_1->SetBinError(19,6684.889);
   VbbHcc_tags_H_dR_stack_1->SetBinError(20,5920.936);
   VbbHcc_tags_H_dR_stack_1->SetBinError(21,4917.119);
   VbbHcc_tags_H_dR_stack_1->SetBinError(22,4698.782);
   VbbHcc_tags_H_dR_stack_1->SetBinError(23,3915.866);
   VbbHcc_tags_H_dR_stack_1->SetBinError(24,23920.1);
   VbbHcc_tags_H_dR_stack_1->SetBinError(25,3383.298);
   VbbHcc_tags_H_dR_stack_1->SetBinError(26,3633.003);
   VbbHcc_tags_H_dR_stack_1->SetBinError(27,2238.574);
   VbbHcc_tags_H_dR_stack_1->SetBinError(28,2950.417);
   VbbHcc_tags_H_dR_stack_1->SetBinError(29,3212.558);
   VbbHcc_tags_H_dR_stack_1->SetBinError(30,1354.962);
   VbbHcc_tags_H_dR_stack_1->SetBinError(31,2073.525);
   VbbHcc_tags_H_dR_stack_1->SetEntries(174298);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_2 = new TH1D("VbbHcc_tags_H_dR_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(2,0.8868124);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(3,1034.497);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(4,1376.374);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(5,1280.043);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(6,1186.074);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(7,1054.628);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(8,965.7254);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(9,949.5414);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(10,982.7141);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(11,1080.532);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(12,1197.329);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(13,1343.895);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(14,1531.778);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(15,1633.251);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(16,1753.393);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(17,1653.853);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(18,1506.921);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(19,1363.793);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(20,1176.428);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(21,992.5277);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(22,805.2211);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(23,663.6663);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(24,550.2106);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(25,450.6601);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(26,364.6403);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(27,311.8339);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(28,243.9648);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(29,192.4484);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(30,133.5873);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(31,126.6965);
   VbbHcc_tags_H_dR_stack_2->SetBinError(2,0.4420902);
   VbbHcc_tags_H_dR_stack_2->SetBinError(3,15.08673);
   VbbHcc_tags_H_dR_stack_2->SetBinError(4,16.98058);
   VbbHcc_tags_H_dR_stack_2->SetBinError(5,15.83301);
   VbbHcc_tags_H_dR_stack_2->SetBinError(6,14.8594);
   VbbHcc_tags_H_dR_stack_2->SetBinError(7,13.79138);
   VbbHcc_tags_H_dR_stack_2->SetBinError(8,13.33678);
   VbbHcc_tags_H_dR_stack_2->SetBinError(9,13.23379);
   VbbHcc_tags_H_dR_stack_2->SetBinError(10,13.41203);
   VbbHcc_tags_H_dR_stack_2->SetBinError(11,14.07792);
   VbbHcc_tags_H_dR_stack_2->SetBinError(12,14.67855);
   VbbHcc_tags_H_dR_stack_2->SetBinError(13,15.43606);
   VbbHcc_tags_H_dR_stack_2->SetBinError(14,16.4619);
   VbbHcc_tags_H_dR_stack_2->SetBinError(15,16.7034);
   VbbHcc_tags_H_dR_stack_2->SetBinError(16,17.40674);
   VbbHcc_tags_H_dR_stack_2->SetBinError(17,16.84214);
   VbbHcc_tags_H_dR_stack_2->SetBinError(18,15.9253);
   VbbHcc_tags_H_dR_stack_2->SetBinError(19,15.24846);
   VbbHcc_tags_H_dR_stack_2->SetBinError(20,13.8407);
   VbbHcc_tags_H_dR_stack_2->SetBinError(21,12.76933);
   VbbHcc_tags_H_dR_stack_2->SetBinError(22,11.38233);
   VbbHcc_tags_H_dR_stack_2->SetBinError(23,10.39031);
   VbbHcc_tags_H_dR_stack_2->SetBinError(24,9.519904);
   VbbHcc_tags_H_dR_stack_2->SetBinError(25,8.607798);
   VbbHcc_tags_H_dR_stack_2->SetBinError(26,7.667664);
   VbbHcc_tags_H_dR_stack_2->SetBinError(27,7.2372);
   VbbHcc_tags_H_dR_stack_2->SetBinError(28,6.472395);
   VbbHcc_tags_H_dR_stack_2->SetBinError(29,5.807419);
   VbbHcc_tags_H_dR_stack_2->SetBinError(30,4.883631);
   VbbHcc_tags_H_dR_stack_2->SetBinError(31,4.530801);
   VbbHcc_tags_H_dR_stack_2->SetEntries(391454);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_2,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_3 = new TH1D("VbbHcc_tags_H_dR_stack_3","",30,0,6);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(2,10.04257);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(3,11620.7);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(4,19741.54);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(5,22118.91);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(6,22471.32);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(7,20354.07);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(8,18256.68);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(9,17355.96);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(10,17832.15);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(11,19466.2);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(12,21627.1);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(13,24169.65);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(14,26909.46);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(15,29218.31);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(16,30596.46);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(17,29246.16);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(18,27088.35);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(19,24153.41);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(20,20740.25);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(21,17246.24);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(22,13992.13);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(23,11264.94);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(24,9074.013);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(25,7411.871);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(26,6134.142);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(27,5066.696);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(28,4079.676);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(29,3095.155);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(30,1939.992);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(31,1702.276);
   VbbHcc_tags_H_dR_stack_3->SetBinError(2,0.8124574);
   VbbHcc_tags_H_dR_stack_3->SetBinError(3,27.91887);
   VbbHcc_tags_H_dR_stack_3->SetBinError(4,36.3384);
   VbbHcc_tags_H_dR_stack_3->SetBinError(5,38.43641);
   VbbHcc_tags_H_dR_stack_3->SetBinError(6,38.73128);
   VbbHcc_tags_H_dR_stack_3->SetBinError(7,36.87876);
   VbbHcc_tags_H_dR_stack_3->SetBinError(8,34.94785);
   VbbHcc_tags_H_dR_stack_3->SetBinError(9,34.08001);
   VbbHcc_tags_H_dR_stack_3->SetBinError(10,34.56873);
   VbbHcc_tags_H_dR_stack_3->SetBinError(11,36.14488);
   VbbHcc_tags_H_dR_stack_3->SetBinError(12,38.12503);
   VbbHcc_tags_H_dR_stack_3->SetBinError(13,40.34907);
   VbbHcc_tags_H_dR_stack_3->SetBinError(14,42.61199);
   VbbHcc_tags_H_dR_stack_3->SetBinError(15,44.4356);
   VbbHcc_tags_H_dR_stack_3->SetBinError(16,45.50532);
   VbbHcc_tags_H_dR_stack_3->SetBinError(17,44.55551);
   VbbHcc_tags_H_dR_stack_3->SetBinError(18,42.87867);
   VbbHcc_tags_H_dR_stack_3->SetBinError(19,40.4869);
   VbbHcc_tags_H_dR_stack_3->SetBinError(20,37.46341);
   VbbHcc_tags_H_dR_stack_3->SetBinError(21,34.12094);
   VbbHcc_tags_H_dR_stack_3->SetBinError(22,30.67778);
   VbbHcc_tags_H_dR_stack_3->SetBinError(23,27.48653);
   VbbHcc_tags_H_dR_stack_3->SetBinError(24,24.60981);
   VbbHcc_tags_H_dR_stack_3->SetBinError(25,22.22117);
   VbbHcc_tags_H_dR_stack_3->SetBinError(26,20.1862);
   VbbHcc_tags_H_dR_stack_3->SetBinError(27,18.32328);
   VbbHcc_tags_H_dR_stack_3->SetBinError(28,16.44713);
   VbbHcc_tags_H_dR_stack_3->SetBinError(29,14.32464);
   VbbHcc_tags_H_dR_stack_3->SetBinError(30,11.32917);
   VbbHcc_tags_H_dR_stack_3->SetBinError(31,10.57113);
   VbbHcc_tags_H_dR_stack_3->SetEntries(7663533);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_H_dR_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_3->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_3,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_4 = new TH1D("VbbHcc_tags_H_dR_stack_4","",30,0,6);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(2,1.363284);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(3,848.3411);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(4,944.5711);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(5,863.3547);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(6,819.6044);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(7,787.2811);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(8,731.4811);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(9,760.5968);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(10,793.1171);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(11,828.0332);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(12,941.5475);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(13,973.9906);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(14,1093.78);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(15,1197.836);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(16,1279.344);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(17,1230.945);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(18,1138.262);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(19,997.4501);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(20,895.5553);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(21,748.3605);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(22,657.5579);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(23,548.7365);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(24,453.0858);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(25,324.1311);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(26,264.9443);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(27,215.8047);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(28,190.611);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(29,180.6435);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(30,95.32457);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(31,90.81923);
   VbbHcc_tags_H_dR_stack_4->SetBinError(2,0.4117408);
   VbbHcc_tags_H_dR_stack_4->SetBinError(3,18.97354);
   VbbHcc_tags_H_dR_stack_4->SetBinError(4,21.36436);
   VbbHcc_tags_H_dR_stack_4->SetBinError(5,22.3383);
   VbbHcc_tags_H_dR_stack_4->SetBinError(6,24.07378);
   VbbHcc_tags_H_dR_stack_4->SetBinError(7,24.49227);
   VbbHcc_tags_H_dR_stack_4->SetBinError(8,22.24189);
   VbbHcc_tags_H_dR_stack_4->SetBinError(9,23.09966);
   VbbHcc_tags_H_dR_stack_4->SetBinError(10,23.64062);
   VbbHcc_tags_H_dR_stack_4->SetBinError(11,22.90048);
   VbbHcc_tags_H_dR_stack_4->SetBinError(12,26.54186);
   VbbHcc_tags_H_dR_stack_4->SetBinError(13,23.7381);
   VbbHcc_tags_H_dR_stack_4->SetBinError(14,25.21754);
   VbbHcc_tags_H_dR_stack_4->SetBinError(15,26.26109);
   VbbHcc_tags_H_dR_stack_4->SetBinError(16,27.07354);
   VbbHcc_tags_H_dR_stack_4->SetBinError(17,25.52291);
   VbbHcc_tags_H_dR_stack_4->SetBinError(18,24.94498);
   VbbHcc_tags_H_dR_stack_4->SetBinError(19,22.1871);
   VbbHcc_tags_H_dR_stack_4->SetBinError(20,22.42331);
   VbbHcc_tags_H_dR_stack_4->SetBinError(21,20.27171);
   VbbHcc_tags_H_dR_stack_4->SetBinError(22,20.95237);
   VbbHcc_tags_H_dR_stack_4->SetBinError(23,20.56249);
   VbbHcc_tags_H_dR_stack_4->SetBinError(24,19.92489);
   VbbHcc_tags_H_dR_stack_4->SetBinError(25,13.23386);
   VbbHcc_tags_H_dR_stack_4->SetBinError(26,13.26728);
   VbbHcc_tags_H_dR_stack_4->SetBinError(27,12.12389);
   VbbHcc_tags_H_dR_stack_4->SetBinError(28,11.34832);
   VbbHcc_tags_H_dR_stack_4->SetBinError(29,12.51589);
   VbbHcc_tags_H_dR_stack_4->SetBinError(30,6.294892);
   VbbHcc_tags_H_dR_stack_4->SetBinError(31,7.547775);
   VbbHcc_tags_H_dR_stack_4->SetEntries(163132);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_H_dR_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_4->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_4,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_5 = new TH1D("VbbHcc_tags_H_dR_stack_5","",30,0,6);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(2,0.4798204);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(3,563.1473);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(4,688.6607);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(5,651.7112);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(6,609.7063);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(7,493.2152);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(8,454.7534);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(9,464.0289);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(10,463.1264);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(11,449.5957);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(12,543.743);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(13,542.7482);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(14,545.529);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(15,662.1436);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(16,703.5002);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(17,666.6585);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(18,657.6385);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(19,543.121);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(20,453.0557);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(21,418.1679);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(22,320.1703);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(23,263.6533);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(24,218.4499);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(25,209.769);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(26,167.4294);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(27,143.2281);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(28,126.754);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(29,102.8499);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(30,65.91547);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(31,69.83156);
   VbbHcc_tags_H_dR_stack_5->SetBinError(2,0.2282809);
   VbbHcc_tags_H_dR_stack_5->SetBinError(3,17.20024);
   VbbHcc_tags_H_dR_stack_5->SetBinError(4,23.99218);
   VbbHcc_tags_H_dR_stack_5->SetBinError(5,34.40472);
   VbbHcc_tags_H_dR_stack_5->SetBinError(6,36.57715);
   VbbHcc_tags_H_dR_stack_5->SetBinError(7,28.26005);
   VbbHcc_tags_H_dR_stack_5->SetBinError(8,26.58188);
   VbbHcc_tags_H_dR_stack_5->SetBinError(9,27.77745);
   VbbHcc_tags_H_dR_stack_5->SetBinError(10,26.17597);
   VbbHcc_tags_H_dR_stack_5->SetBinError(11,23.17297);
   VbbHcc_tags_H_dR_stack_5->SetBinError(12,28.80581);
   VbbHcc_tags_H_dR_stack_5->SetBinError(13,26.71121);
   VbbHcc_tags_H_dR_stack_5->SetBinError(14,22.34503);
   VbbHcc_tags_H_dR_stack_5->SetBinError(15,32.07185);
   VbbHcc_tags_H_dR_stack_5->SetBinError(16,32.46459);
   VbbHcc_tags_H_dR_stack_5->SetBinError(17,30.65436);
   VbbHcc_tags_H_dR_stack_5->SetBinError(18,32.28551);
   VbbHcc_tags_H_dR_stack_5->SetBinError(19,27.43041);
   VbbHcc_tags_H_dR_stack_5->SetBinError(20,23.68563);
   VbbHcc_tags_H_dR_stack_5->SetBinError(21,24.71022);
   VbbHcc_tags_H_dR_stack_5->SetBinError(22,18.55969);
   VbbHcc_tags_H_dR_stack_5->SetBinError(23,16.8637);
   VbbHcc_tags_H_dR_stack_5->SetBinError(24,17.45817);
   VbbHcc_tags_H_dR_stack_5->SetBinError(25,20.05681);
   VbbHcc_tags_H_dR_stack_5->SetBinError(26,14.78029);
   VbbHcc_tags_H_dR_stack_5->SetBinError(27,15.83746);
   VbbHcc_tags_H_dR_stack_5->SetBinError(28,15.35328);
   VbbHcc_tags_H_dR_stack_5->SetBinError(29,9.674462);
   VbbHcc_tags_H_dR_stack_5->SetBinError(30,8.269621);
   VbbHcc_tags_H_dR_stack_5->SetBinError(31,12.84189);
   VbbHcc_tags_H_dR_stack_5->SetEntries(113083);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_H_dR_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_5->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_5,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_6 = new TH1D("VbbHcc_tags_H_dR_stack_6","",30,0,6);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(3,3.794549);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(4,4.886278);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(5,2.552864);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(6,3.279029);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(7,2.673123);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(8,2.475076);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(9,3.295071);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(10,3.225596);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(11,2.45839);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(12,2.64861);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(13,3.182828);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(14,3.100026);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(15,3.741665);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(16,5.000945);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(17,3.153909);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(18,3.703998);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(19,3.293317);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(20,1.96291);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(21,2.259021);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(22,1.499614);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(23,1.626939);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(24,1.421922);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(25,0.4536815);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(26,0.8162396);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(27,0.539439);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(28,0.6382484);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(29,0.1796543);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(30,0.6499316);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(31,0.09409418);
   VbbHcc_tags_H_dR_stack_6->SetBinError(3,0.588446);
   VbbHcc_tags_H_dR_stack_6->SetBinError(4,0.6593825);
   VbbHcc_tags_H_dR_stack_6->SetBinError(5,0.4855011);
   VbbHcc_tags_H_dR_stack_6->SetBinError(6,0.5472042);
   VbbHcc_tags_H_dR_stack_6->SetBinError(7,0.4889275);
   VbbHcc_tags_H_dR_stack_6->SetBinError(8,0.472157);
   VbbHcc_tags_H_dR_stack_6->SetBinError(9,0.5503371);
   VbbHcc_tags_H_dR_stack_6->SetBinError(10,0.541581);
   VbbHcc_tags_H_dR_stack_6->SetBinError(11,0.4676267);
   VbbHcc_tags_H_dR_stack_6->SetBinError(12,0.4906436);
   VbbHcc_tags_H_dR_stack_6->SetBinError(13,0.5406184);
   VbbHcc_tags_H_dR_stack_6->SetBinError(14,0.5300612);
   VbbHcc_tags_H_dR_stack_6->SetBinError(15,0.5857436);
   VbbHcc_tags_H_dR_stack_6->SetBinError(16,0.6766247);
   VbbHcc_tags_H_dR_stack_6->SetBinError(17,0.5415754);
   VbbHcc_tags_H_dR_stack_6->SetBinError(18,0.5811475);
   VbbHcc_tags_H_dR_stack_6->SetBinError(19,0.5505178);
   VbbHcc_tags_H_dR_stack_6->SetBinError(20,0.4197369);
   VbbHcc_tags_H_dR_stack_6->SetBinError(21,0.4462659);
   VbbHcc_tags_H_dR_stack_6->SetBinError(22,0.368789);
   VbbHcc_tags_H_dR_stack_6->SetBinError(23,0.384834);
   VbbHcc_tags_H_dR_stack_6->SetBinError(24,0.3581084);
   VbbHcc_tags_H_dR_stack_6->SetBinError(25,0.203321);
   VbbHcc_tags_H_dR_stack_6->SetBinError(26,0.2724679);
   VbbHcc_tags_H_dR_stack_6->SetBinError(27,0.2208495);
   VbbHcc_tags_H_dR_stack_6->SetBinError(28,0.2419184);
   VbbHcc_tags_H_dR_stack_6->SetBinError(29,0.1270366);
   VbbHcc_tags_H_dR_stack_6->SetBinError(30,0.2457629);
   VbbHcc_tags_H_dR_stack_6->SetBinError(31,0.09409418);
   VbbHcc_tags_H_dR_stack_6->SetEntries(766);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_H_dR_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_6->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_6,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_7 = new TH1D("VbbHcc_tags_H_dR_stack_7","",30,0,6);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(3,12.21902);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(4,15.92873);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(5,12.0121);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(6,8.809357);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(7,6.394751);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(8,5.214615);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(9,3.725558);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(10,4.438561);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(11,5.79906);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(12,6.581672);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(13,8.139181);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(14,6.998714);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(15,7.834448);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(16,10.72687);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(17,6.861992);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(18,8.226367);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(19,6.098915);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(20,5.13361);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(21,3.965627);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(22,3.998901);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(23,2.820899);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(24,2.755329);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(25,2.464801);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(26,1.643531);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(27,1.452044);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(28,2.473647);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(29,1.779121);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(30,1.080379);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(31,1.37459);
   VbbHcc_tags_H_dR_stack_7->SetBinError(3,0.9113415);
   VbbHcc_tags_H_dR_stack_7->SetBinError(4,1.046585);
   VbbHcc_tags_H_dR_stack_7->SetBinError(5,0.9077047);
   VbbHcc_tags_H_dR_stack_7->SetBinError(6,0.780749);
   VbbHcc_tags_H_dR_stack_7->SetBinError(7,0.6609143);
   VbbHcc_tags_H_dR_stack_7->SetBinError(8,0.6026605);
   VbbHcc_tags_H_dR_stack_7->SetBinError(9,0.5008428);
   VbbHcc_tags_H_dR_stack_7->SetBinError(10,0.5470917);
   VbbHcc_tags_H_dR_stack_7->SetBinError(11,0.6262469);
   VbbHcc_tags_H_dR_stack_7->SetBinError(12,0.6646023);
   VbbHcc_tags_H_dR_stack_7->SetBinError(13,0.7467715);
   VbbHcc_tags_H_dR_stack_7->SetBinError(14,0.6960262);
   VbbHcc_tags_H_dR_stack_7->SetBinError(15,0.7310638);
   VbbHcc_tags_H_dR_stack_7->SetBinError(16,0.8575949);
   VbbHcc_tags_H_dR_stack_7->SetBinError(17,0.6822227);
   VbbHcc_tags_H_dR_stack_7->SetBinError(18,0.7487893);
   VbbHcc_tags_H_dR_stack_7->SetBinError(19,0.6415682);
   VbbHcc_tags_H_dR_stack_7->SetBinError(20,0.5869288);
   VbbHcc_tags_H_dR_stack_7->SetBinError(21,0.5194624);
   VbbHcc_tags_H_dR_stack_7->SetBinError(22,0.5145591);
   VbbHcc_tags_H_dR_stack_7->SetBinError(23,0.4346377);
   VbbHcc_tags_H_dR_stack_7->SetBinError(24,0.4277461);
   VbbHcc_tags_H_dR_stack_7->SetBinError(25,0.4091219);
   VbbHcc_tags_H_dR_stack_7->SetBinError(26,0.3321424);
   VbbHcc_tags_H_dR_stack_7->SetBinError(27,0.3135575);
   VbbHcc_tags_H_dR_stack_7->SetBinError(28,0.4134042);
   VbbHcc_tags_H_dR_stack_7->SetBinError(29,0.3505227);
   VbbHcc_tags_H_dR_stack_7->SetBinError(30,0.2677777);
   VbbHcc_tags_H_dR_stack_7->SetBinError(31,0.3081312);
   VbbHcc_tags_H_dR_stack_7->SetEntries(2496);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_dR_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_7->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_7,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_8 = new TH1D("VbbHcc_tags_H_dR_stack_8","",30,0,6);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(3,9.328245);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(4,12.8012);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(5,13.22527);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(6,9.750209);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(7,6.009441);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(8,5.968326);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(9,3.523955);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(10,4.340232);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(11,5.746623);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(12,5.941774);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(13,6.096483);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(14,7.098265);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(15,9.162998);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(16,7.964694);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(17,7.06865);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(18,8.532391);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(19,7.487403);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(20,4.997314);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(21,3.22077);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(22,3.955297);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(23,2.515448);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(24,1.577193);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(25,3.111224);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(26,1.45888);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(27,1.756201);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(28,1.971072);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(29,0.9956295);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(30,0.7646134);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(31,0.387201);
   VbbHcc_tags_H_dR_stack_8->SetBinError(3,1.329438);
   VbbHcc_tags_H_dR_stack_8->SetBinError(4,1.585245);
   VbbHcc_tags_H_dR_stack_8->SetBinError(5,1.590448);
   VbbHcc_tags_H_dR_stack_8->SetBinError(6,1.374684);
   VbbHcc_tags_H_dR_stack_8->SetBinError(7,1.08118);
   VbbHcc_tags_H_dR_stack_8->SetBinError(8,1.059949);
   VbbHcc_tags_H_dR_stack_8->SetBinError(9,0.8234839);
   VbbHcc_tags_H_dR_stack_8->SetBinError(10,0.9001649);
   VbbHcc_tags_H_dR_stack_8->SetBinError(11,1.042456);
   VbbHcc_tags_H_dR_stack_8->SetBinError(12,1.070883);
   VbbHcc_tags_H_dR_stack_8->SetBinError(13,1.060057);
   VbbHcc_tags_H_dR_stack_8->SetBinError(14,1.170554);
   VbbHcc_tags_H_dR_stack_8->SetBinError(15,1.325289);
   VbbHcc_tags_H_dR_stack_8->SetBinError(16,1.229815);
   VbbHcc_tags_H_dR_stack_8->SetBinError(17,1.164645);
   VbbHcc_tags_H_dR_stack_8->SetBinError(18,1.279981);
   VbbHcc_tags_H_dR_stack_8->SetBinError(19,1.193744);
   VbbHcc_tags_H_dR_stack_8->SetBinError(20,0.9653836);
   VbbHcc_tags_H_dR_stack_8->SetBinError(21,0.7843832);
   VbbHcc_tags_H_dR_stack_8->SetBinError(22,0.8671926);
   VbbHcc_tags_H_dR_stack_8->SetBinError(23,0.6985491);
   VbbHcc_tags_H_dR_stack_8->SetBinError(24,0.5590883);
   VbbHcc_tags_H_dR_stack_8->SetBinError(25,0.7702569);
   VbbHcc_tags_H_dR_stack_8->SetBinError(26,0.5175644);
   VbbHcc_tags_H_dR_stack_8->SetBinError(27,0.5874382);
   VbbHcc_tags_H_dR_stack_8->SetBinError(28,0.6243356);
   VbbHcc_tags_H_dR_stack_8->SetBinError(29,0.4458006);
   VbbHcc_tags_H_dR_stack_8->SetBinError(30,0.383034);
   VbbHcc_tags_H_dR_stack_8->SetBinError(31,0.2738209);
   VbbHcc_tags_H_dR_stack_8->SetEntries(834);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_H_dR_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_8->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_8,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_9 = new TH1D("VbbHcc_tags_H_dR_stack_9","",30,0,6);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(2,0.01003985);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(3,6.056626);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(4,8.364502);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(5,7.475043);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(6,6.035762);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(7,4.199558);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(8,3.291781);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(9,2.889243);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(10,2.863687);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(11,3.040352);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(12,3.415366);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(13,3.924503);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(14,4.52656);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(15,5.254559);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(16,5.417061);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(17,5.298557);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(18,4.497778);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(19,3.596581);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(20,2.891023);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(21,2.386556);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(22,1.934814);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(23,1.502329);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(24,1.260794);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(25,1.115099);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(26,1.034896);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(27,1.022144);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(28,1.057032);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(29,0.9261476);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(30,0.5175593);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(31,0.4072405);
   VbbHcc_tags_H_dR_stack_9->SetBinError(2,0.003827421);
   VbbHcc_tags_H_dR_stack_9->SetBinError(3,0.09667612);
   VbbHcc_tags_H_dR_stack_9->SetBinError(4,0.113475);
   VbbHcc_tags_H_dR_stack_9->SetBinError(5,0.107174);
   VbbHcc_tags_H_dR_stack_9->SetBinError(6,0.09610684);
   VbbHcc_tags_H_dR_stack_9->SetBinError(7,0.08002995);
   VbbHcc_tags_H_dR_stack_9->SetBinError(8,0.07016246);
   VbbHcc_tags_H_dR_stack_9->SetBinError(9,0.06562093);
   VbbHcc_tags_H_dR_stack_9->SetBinError(10,0.06525145);
   VbbHcc_tags_H_dR_stack_9->SetBinError(11,0.06719881);
   VbbHcc_tags_H_dR_stack_9->SetBinError(12,0.07130176);
   VbbHcc_tags_H_dR_stack_9->SetBinError(13,0.07633237);
   VbbHcc_tags_H_dR_stack_9->SetBinError(14,0.08219938);
   VbbHcc_tags_H_dR_stack_9->SetBinError(15,0.08866846);
   VbbHcc_tags_H_dR_stack_9->SetBinError(16,0.09027152);
   VbbHcc_tags_H_dR_stack_9->SetBinError(17,0.08914897);
   VbbHcc_tags_H_dR_stack_9->SetBinError(18,0.08215937);
   VbbHcc_tags_H_dR_stack_9->SetBinError(19,0.07341352);
   VbbHcc_tags_H_dR_stack_9->SetBinError(20,0.06577274);
   VbbHcc_tags_H_dR_stack_9->SetBinError(21,0.05967304);
   VbbHcc_tags_H_dR_stack_9->SetBinError(22,0.05363172);
   VbbHcc_tags_H_dR_stack_9->SetBinError(23,0.04709383);
   VbbHcc_tags_H_dR_stack_9->SetBinError(24,0.04327075);
   VbbHcc_tags_H_dR_stack_9->SetBinError(25,0.04068778);
   VbbHcc_tags_H_dR_stack_9->SetBinError(26,0.03952276);
   VbbHcc_tags_H_dR_stack_9->SetBinError(27,0.03912739);
   VbbHcc_tags_H_dR_stack_9->SetBinError(28,0.03990139);
   VbbHcc_tags_H_dR_stack_9->SetBinError(29,0.03737868);
   VbbHcc_tags_H_dR_stack_9->SetBinError(30,0.02801484);
   VbbHcc_tags_H_dR_stack_9->SetBinError(31,0.02458784);
   VbbHcc_tags_H_dR_stack_9->SetEntries(67621);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_H_dR_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_9->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_9,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_10 = new TH1D("VbbHcc_tags_H_dR_stack_10","",30,0,6);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(2,0.0004324426);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(3,2.162064);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(4,3.52857);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(5,3.591992);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(6,3.1245);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(7,2.172378);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(8,1.534303);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(9,1.399848);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(10,1.423709);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(11,1.547683);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(12,1.758629);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(13,2.005556);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(14,2.281276);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(15,2.460378);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(16,2.542397);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(17,2.391237);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(18,2.24769);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(19,1.920225);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(20,1.655451);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(21,1.351938);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(22,1.063705);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(23,0.886276);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(24,0.712453);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(25,0.592563);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(26,0.5731949);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(27,0.5776915);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(28,0.4962569);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(29,0.4310598);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(30,0.2681807);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(31,0.1816201);
   VbbHcc_tags_H_dR_stack_10->SetBinError(2,0.0004324426);
   VbbHcc_tags_H_dR_stack_10->SetBinError(3,0.02878222);
   VbbHcc_tags_H_dR_stack_10->SetBinError(4,0.0367953);
   VbbHcc_tags_H_dR_stack_10->SetBinError(5,0.03718296);
   VbbHcc_tags_H_dR_stack_10->SetBinError(6,0.03468008);
   VbbHcc_tags_H_dR_stack_10->SetBinError(7,0.02889464);
   VbbHcc_tags_H_dR_stack_10->SetBinError(8,0.02423803);
   VbbHcc_tags_H_dR_stack_10->SetBinError(9,0.02310557);
   VbbHcc_tags_H_dR_stack_10->SetBinError(10,0.02333254);
   VbbHcc_tags_H_dR_stack_10->SetBinError(11,0.02431888);
   VbbHcc_tags_H_dR_stack_10->SetBinError(12,0.0258831);
   VbbHcc_tags_H_dR_stack_10->SetBinError(13,0.02768077);
   VbbHcc_tags_H_dR_stack_10->SetBinError(14,0.02950612);
   VbbHcc_tags_H_dR_stack_10->SetBinError(15,0.03066043);
   VbbHcc_tags_H_dR_stack_10->SetBinError(16,0.03114934);
   VbbHcc_tags_H_dR_stack_10->SetBinError(17,0.03023621);
   VbbHcc_tags_H_dR_stack_10->SetBinError(18,0.02927366);
   VbbHcc_tags_H_dR_stack_10->SetBinError(19,0.02704727);
   VbbHcc_tags_H_dR_stack_10->SetBinError(20,0.02510587);
   VbbHcc_tags_H_dR_stack_10->SetBinError(21,0.02268168);
   VbbHcc_tags_H_dR_stack_10->SetBinError(22,0.0200955);
   VbbHcc_tags_H_dR_stack_10->SetBinError(23,0.01834655);
   VbbHcc_tags_H_dR_stack_10->SetBinError(24,0.01645847);
   VbbHcc_tags_H_dR_stack_10->SetBinError(25,0.01503672);
   VbbHcc_tags_H_dR_stack_10->SetBinError(26,0.0147812);
   VbbHcc_tags_H_dR_stack_10->SetBinError(27,0.01486464);
   VbbHcc_tags_H_dR_stack_10->SetBinError(28,0.0137618);
   VbbHcc_tags_H_dR_stack_10->SetBinError(29,0.01285585);
   VbbHcc_tags_H_dR_stack_10->SetBinError(30,0.01011869);
   VbbHcc_tags_H_dR_stack_10->SetBinError(31,0.008310526);
   VbbHcc_tags_H_dR_stack_10->SetEntries(124885);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_H_dR_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_10->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_10,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_11 = new TH1D("VbbHcc_tags_H_dR_stack_11","",30,0,6);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(3,0.05983116);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(4,0.1501519);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(5,0.221653);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(6,0.2054978);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(7,0.2192084);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(8,0.1746044);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(9,0.1381091);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(10,0.0882154);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(11,0.09909035);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(12,0.07477736);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(13,0.07630616);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(14,0.07855881);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(15,0.055599);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(16,0.1198013);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(17,0.1168486);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(18,0.1284842);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(19,0.09446592);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(20,0.04365092);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(21,0.06536419);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(22,0.02088256);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(23,0.05187638);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(24,0.02092047);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(25,0.04135648);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(26,0.04255321);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(27,0.05235074);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(28,0.02382864);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(29,0.02914206);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(30,0.009026912);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(31,0.01190332);
   VbbHcc_tags_H_dR_stack_11->SetBinError(3,0.01339569);
   VbbHcc_tags_H_dR_stack_11->SetBinError(4,0.02112007);
   VbbHcc_tags_H_dR_stack_11->SetBinError(5,0.02548446);
   VbbHcc_tags_H_dR_stack_11->SetBinError(6,0.02458758);
   VbbHcc_tags_H_dR_stack_11->SetBinError(7,0.0258048);
   VbbHcc_tags_H_dR_stack_11->SetBinError(8,0.02256406);
   VbbHcc_tags_H_dR_stack_11->SetBinError(9,0.02024469);
   VbbHcc_tags_H_dR_stack_11->SetBinError(10,0.01674613);
   VbbHcc_tags_H_dR_stack_11->SetBinError(11,0.01680732);
   VbbHcc_tags_H_dR_stack_11->SetBinError(12,0.01478663);
   VbbHcc_tags_H_dR_stack_11->SetBinError(13,0.01489712);
   VbbHcc_tags_H_dR_stack_11->SetBinError(14,0.01481368);
   VbbHcc_tags_H_dR_stack_11->SetBinError(15,0.01402249);
   VbbHcc_tags_H_dR_stack_11->SetBinError(16,0.01877362);
   VbbHcc_tags_H_dR_stack_11->SetBinError(17,0.01860528);
   VbbHcc_tags_H_dR_stack_11->SetBinError(18,0.01953205);
   VbbHcc_tags_H_dR_stack_11->SetBinError(19,0.01652944);
   VbbHcc_tags_H_dR_stack_11->SetBinError(20,0.01130627);
   VbbHcc_tags_H_dR_stack_11->SetBinError(21,0.01363271);
   VbbHcc_tags_H_dR_stack_11->SetBinError(22,0.007674788);
   VbbHcc_tags_H_dR_stack_11->SetBinError(23,0.01227901);
   VbbHcc_tags_H_dR_stack_11->SetBinError(24,0.007923132);
   VbbHcc_tags_H_dR_stack_11->SetBinError(25,0.01180665);
   VbbHcc_tags_H_dR_stack_11->SetBinError(26,0.01139172);
   VbbHcc_tags_H_dR_stack_11->SetBinError(27,0.01237116);
   VbbHcc_tags_H_dR_stack_11->SetBinError(28,0.008432547);
   VbbHcc_tags_H_dR_stack_11->SetBinError(29,0.009240357);
   VbbHcc_tags_H_dR_stack_11->SetBinError(30,0.005219037);
   VbbHcc_tags_H_dR_stack_11->SetBinError(31,0.005959662);
   VbbHcc_tags_H_dR_stack_11->SetEntries(888);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_11->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_11,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_12 = new TH1D("VbbHcc_tags_H_dR_stack_12","",30,0,6);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(3,0.02528462);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(4,0.04890394);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(5,0.08242613);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(6,0.09505765);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(7,0.1204886);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(8,0.08967428);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(9,0.04961342);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(10,0.05244929);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(11,0.03761185);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(12,0.04809726);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(13,0.03906509);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(14,0.04568628);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(15,0.04587852);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(16,0.04585167);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(17,0.04227966);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(18,0.03232991);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(19,0.03446584);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(20,0.02520843);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(21,0.0305092);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(22,0.02401276);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(23,0.02075214);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(24,0.01988434);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(25,0.02327167);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(26,0.02476557);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(27,0.0172411);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(28,0.01289449);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(29,0.009568846);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(30,0.002160836);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(31,0.00491674);
   VbbHcc_tags_H_dR_stack_12->SetBinError(3,0.003042512);
   VbbHcc_tags_H_dR_stack_12->SetBinError(4,0.004297282);
   VbbHcc_tags_H_dR_stack_12->SetBinError(5,0.005592394);
   VbbHcc_tags_H_dR_stack_12->SetBinError(6,0.006036016);
   VbbHcc_tags_H_dR_stack_12->SetBinError(7,0.006802669);
   VbbHcc_tags_H_dR_stack_12->SetBinError(8,0.005818782);
   VbbHcc_tags_H_dR_stack_12->SetBinError(9,0.004378357);
   VbbHcc_tags_H_dR_stack_12->SetBinError(10,0.004440514);
   VbbHcc_tags_H_dR_stack_12->SetBinError(11,0.003799959);
   VbbHcc_tags_H_dR_stack_12->SetBinError(12,0.004314031);
   VbbHcc_tags_H_dR_stack_12->SetBinError(13,0.00385788);
   VbbHcc_tags_H_dR_stack_12->SetBinError(14,0.004166198);
   VbbHcc_tags_H_dR_stack_12->SetBinError(15,0.004174451);
   VbbHcc_tags_H_dR_stack_12->SetBinError(16,0.004172127);
   VbbHcc_tags_H_dR_stack_12->SetBinError(17,0.004035555);
   VbbHcc_tags_H_dR_stack_12->SetBinError(18,0.003512444);
   VbbHcc_tags_H_dR_stack_12->SetBinError(19,0.003580445);
   VbbHcc_tags_H_dR_stack_12->SetBinError(20,0.00306024);
   VbbHcc_tags_H_dR_stack_12->SetBinError(21,0.003433123);
   VbbHcc_tags_H_dR_stack_12->SetBinError(22,0.003004541);
   VbbHcc_tags_H_dR_stack_12->SetBinError(23,0.002821744);
   VbbHcc_tags_H_dR_stack_12->SetBinError(24,0.002732098);
   VbbHcc_tags_H_dR_stack_12->SetBinError(25,0.002977465);
   VbbHcc_tags_H_dR_stack_12->SetBinError(26,0.003065295);
   VbbHcc_tags_H_dR_stack_12->SetBinError(27,0.002587621);
   VbbHcc_tags_H_dR_stack_12->SetBinError(28,0.002206681);
   VbbHcc_tags_H_dR_stack_12->SetBinError(29,0.001921983);
   VbbHcc_tags_H_dR_stack_12->SetBinError(30,0.0008976949);
   VbbHcc_tags_H_dR_stack_12->SetBinError(31,0.001369722);
   VbbHcc_tags_H_dR_stack_12->SetEntries(3081);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_dR_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_12->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_H_dR__41 = new TH1D("VbbHcc_tags_H_dR__41","",30,0,6);
   VbbHcc_tags_H_dR__41->SetBinContent(2,68);
   VbbHcc_tags_H_dR__41->SetBinContent(3,62916);
   VbbHcc_tags_H_dR__41->SetBinContent(4,69307);
   VbbHcc_tags_H_dR__41->SetBinContent(5,55232);
   VbbHcc_tags_H_dR__41->SetBinContent(6,52698);
   VbbHcc_tags_H_dR__41->SetBinContent(7,51145);
   VbbHcc_tags_H_dR__41->SetBinContent(8,51115);
   VbbHcc_tags_H_dR__41->SetBinContent(9,53200);
   VbbHcc_tags_H_dR__41->SetBinContent(10,56407);
   VbbHcc_tags_H_dR__41->SetBinContent(11,61038);
   VbbHcc_tags_H_dR__41->SetBinContent(12,66674);
   VbbHcc_tags_H_dR__41->SetBinContent(13,73618);
   VbbHcc_tags_H_dR__41->SetBinContent(14,81859);
   VbbHcc_tags_H_dR__41->SetBinContent(15,90015);
   VbbHcc_tags_H_dR__41->SetBinContent(16,95050);
   VbbHcc_tags_H_dR__41->SetBinContent(17,89772);
   VbbHcc_tags_H_dR__41->SetBinContent(18,83080);
   VbbHcc_tags_H_dR__41->SetBinContent(19,75911);
   VbbHcc_tags_H_dR__41->SetBinContent(20,66720);
   VbbHcc_tags_H_dR__41->SetBinContent(21,56534);
   VbbHcc_tags_H_dR__41->SetBinContent(22,47116);
   VbbHcc_tags_H_dR__41->SetBinContent(23,38550);
   VbbHcc_tags_H_dR__41->SetBinContent(24,30635);
   VbbHcc_tags_H_dR__41->SetBinContent(25,24456);
   VbbHcc_tags_H_dR__41->SetBinContent(26,19752);
   VbbHcc_tags_H_dR__41->SetBinContent(27,16097);
   VbbHcc_tags_H_dR__41->SetBinContent(28,13080);
   VbbHcc_tags_H_dR__41->SetBinContent(29,11476);
   VbbHcc_tags_H_dR__41->SetBinContent(30,7870);
   VbbHcc_tags_H_dR__41->SetBinContent(31,7284);
   VbbHcc_tags_H_dR__41->SetEntries(1508704);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR__41->SetLineColor(ci);
   VbbHcc_tags_H_dR__41->SetLineWidth(2);
   VbbHcc_tags_H_dR__41->SetMarkerStyle(20);
   VbbHcc_tags_H_dR__41->SetMarkerSize(1.2);
   VbbHcc_tags_H_dR__41->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR__41->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__41->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR__41->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR__41->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__41->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__41->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR__41->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR__41->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR__41->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__41->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__41->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR__41->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR__41->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__41->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_H_dR_fx1041[30] = {
   0.1,
   0.3,
   0.5,
   0.7,
   0.9,
   1.1,
   1.3,
   1.5,
   1.7,
   1.9,
   2.1,
   2.3,
   2.5,
   2.7,
   2.9,
   3.1,
   3.3,
   3.5,
   3.7,
   3.9,
   4.1,
   4.3,
   4.5,
   4.7,
   4.9,
   5.1,
   5.3,
   5.5,
   5.7,
   5.9};
   Double_t Graph_from_VbbHcc_tags_H_dR_fy1041[30] = {
   0,
   93.56001,
   147186,
   149926.3,
   123002.8,
   112387.9,
   111128.2,
   113538.4,
   113922.2,
   125696.8,
   151703.1,
   162029.9,
   157914.7,
   170986.7,
   191239,
   202667.5,
   188105.8,
   179177.6,
   158826.3,
   139071.2,
   114404.4,
   105200.6,
   77473.52,
   97664.49,
   54669.23,
   46056.92,
   34570.03,
   30590.61,
   30203.4,
   14455.31};
   Double_t Graph_from_VbbHcc_tags_H_dR_fex1041[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1};
   Double_t Graph_from_VbbHcc_tags_H_dR_fey1041[30] = {
   0,
   40.26348,
   5931.524,
   5227.247,
   4996.354,
   4632.899,
   5417.541,
   5386.195,
   5026.751,
   6023.367,
   22197.49,
   22986.91,
   6171.839,
   5524.13,
   7120.745,
   7154.902,
   6945.575,
   6944.631,
   6685.122,
   5921.161,
   4917.358,
   4698.979,
   3916.067,
   23920.13,
   3383.468,
   3633.121,
   2238.749,
   2950.532,
   3212.635,
   1355.058};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_H_dR_fx1041,Graph_from_VbbHcc_tags_H_dR_fy1041,Graph_from_VbbHcc_tags_H_dR_fex1041,Graph_from_VbbHcc_tags_H_dR_fey1041);
   gre->SetName("Graph_from_VbbHcc_tags_H_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_H_dR1041 = new TH1F("Graph_Graph_from_VbbHcc_tags_H_dR1041","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_H_dR1041->SetMinimum(0);
   Graph_Graph_from_VbbHcc_tags_H_dR1041->SetMaximum(230804.7);
   Graph_Graph_from_VbbHcc_tags_H_dR1041->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_H_dR1041->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_H_dR1041->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_H_dR1041->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR1041->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1041->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1041->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR1041->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR1041->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1041->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1041->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_H_dR1041->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR1041->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR1041->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1041->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1041->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_H_dR1041);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_H_dR","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_dR_tags_16->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.9499975,-0.2774193,6.525,1.658065);
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
   
   TH1D *data_mc_ratio__42 = new TH1D("data_mc_ratio__42","",30,0,6);
   data_mc_ratio__42->SetBinContent(2,0.7268063);
   data_mc_ratio__42->SetBinContent(3,0.4274591);
   data_mc_ratio__42->SetBinContent(4,0.4622736);
   data_mc_ratio__42->SetBinContent(5,0.4490306);
   data_mc_ratio__42->SetBinContent(6,0.4688938);
   data_mc_ratio__42->SetBinContent(7,0.4602343);
   data_mc_ratio__42->SetBinContent(8,0.4502003);
   data_mc_ratio__42->SetBinContent(9,0.4669852);
   data_mc_ratio__42->SetBinContent(10,0.4487544);
   data_mc_ratio__42->SetBinContent(11,0.4023518);
   data_mc_ratio__42->SetBinContent(12,0.4114919);
   data_mc_ratio__42->SetBinContent(13,0.4661885);
   data_mc_ratio__42->SetBinContent(14,0.4787447);
   data_mc_ratio__42->SetBinContent(15,0.4706938);
   data_mc_ratio__42->SetBinContent(16,0.4689947);
   data_mc_ratio__42->SetBinContent(17,0.477242);
   data_mc_ratio__42->SetBinContent(18,0.4636741);
   data_mc_ratio__42->SetBinContent(19,0.47795);
   data_mc_ratio__42->SetBinContent(20,0.4797543);
   data_mc_ratio__42->SetBinContent(21,0.4941591);
   data_mc_ratio__42->SetBinContent(22,0.4478683);
   data_mc_ratio__42->SetBinContent(23,0.4975894);
   data_mc_ratio__42->SetBinContent(24,0.3136759);
   data_mc_ratio__42->SetBinContent(25,0.4473449);
   data_mc_ratio__42->SetBinContent(26,0.4288607);
   data_mc_ratio__42->SetBinContent(27,0.4656345);
   data_mc_ratio__42->SetBinContent(28,0.4275821);
   data_mc_ratio__42->SetBinContent(29,0.3799573);
   data_mc_ratio__42->SetBinContent(30,0.5444368);
   data_mc_ratio__42->SetBinContent(31,0.4545074);
   data_mc_ratio__42->SetBinError(2,0.08813821);
   data_mc_ratio__42->SetBinError(3,0.001704174);
   data_mc_ratio__42->SetBinError(4,0.001755944);
   data_mc_ratio__42->SetBinError(5,0.001910647);
   data_mc_ratio__42->SetBinError(6,0.002042572);
   data_mc_ratio__42->SetBinError(7,0.002035061);
   data_mc_ratio__42->SetBinError(8,0.001991276);
   data_mc_ratio__42->SetBinError(9,0.002024638);
   data_mc_ratio__42->SetBinError(10,0.00188948);
   data_mc_ratio__42->SetBinError(11,0.001628568);
   data_mc_ratio__42->SetBinError(12,0.001593614);
   data_mc_ratio__42->SetBinError(13,0.001718184);
   data_mc_ratio__42->SetBinError(14,0.001673288);
   data_mc_ratio__42->SetBinError(15,0.001568849);
   data_mc_ratio__42->SetBinError(16,0.001521219);
   data_mc_ratio__42->SetBinError(17,0.001592826);
   data_mc_ratio__42->SetBinError(18,0.001608661);
   data_mc_ratio__42->SetBinError(19,0.001734723);
   data_mc_ratio__42->SetBinError(20,0.001857338);
   data_mc_ratio__42->SetBinError(21,0.002078318);
   data_mc_ratio__42->SetBinError(22,0.002063318);
   data_mc_ratio__42->SetBinError(23,0.002534305);
   data_mc_ratio__42->SetBinError(24,0.001792141);
   data_mc_ratio__42->SetBinError(25,0.002860551);
   data_mc_ratio__42->SetBinError(26,0.003051481);
   data_mc_ratio__42->SetBinError(27,0.003670056);
   data_mc_ratio__42->SetBinError(28,0.003738657);
   data_mc_ratio__42->SetBinError(29,0.003546823);
   data_mc_ratio__42->SetBinError(30,0.006137056);
   data_mc_ratio__42->SetBinError(31,0.05904899);
   data_mc_ratio__42->SetMinimum(0.4);
   data_mc_ratio__42->SetMaximum(1.6);
   data_mc_ratio__42->SetEntries(1335.913);
   data_mc_ratio__42->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__42->SetLineColor(ci);
   data_mc_ratio__42->SetLineWidth(2);
   data_mc_ratio__42->SetMarkerStyle(20);
   data_mc_ratio__42->SetMarkerSize(1.2);
   data_mc_ratio__42->GetXaxis()->SetTitle("#DeltaR(c,c)");
   data_mc_ratio__42->GetXaxis()->SetRange(1,31);
   data_mc_ratio__42->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__42->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__42->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__42->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__42->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__42->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__42->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__42->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__42->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__42->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__42->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__42->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__42->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__42->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__42->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__42->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__42->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1042[30] = {
   0.1,
   0.3,
   0.5,
   0.7,
   0.9,
   1.1,
   1.3,
   1.5,
   1.7,
   1.9,
   2.1,
   2.3,
   2.5,
   2.7,
   2.9,
   3.1,
   3.3,
   3.5,
   3.7,
   3.9,
   4.1,
   4.3,
   4.5,
   4.7,
   4.9,
   5.1,
   5.3,
   5.5,
   5.7,
   5.9};
   Double_t Graph_from_mc_statistical_error_fy1042[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1042[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1};
   Double_t Graph_from_mc_statistical_error_fey1042[30] = {
   0,
   0.4303493,
   0.04029951,
   0.03486543,
   0.04061986,
   0.04122239,
   0.04875039,
   0.04743943,
   0.0441244,
   0.04791981,
   0.146322,
   0.1418683,
   0.03908338,
   0.03230736,
   0.0372348,
   0.03530364,
   0.03692376,
   0.03875837,
   0.04209079,
   0.04257648,
   0.04298223,
   0.04466687,
   0.05054717,
   0.2449215,
   0.0618898,
   0.0788833,
   0.06475984,
   0.09645218,
   0.1063667,
   0.09374122};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1042,Graph_from_mc_statistical_error_fy1042,Graph_from_mc_statistical_error_fex1042,Graph_from_mc_statistical_error_fey1042);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1042 = new TH1F("Graph_Graph_from_mc_statistical_error1042","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1042->SetMinimum(0.4835808);
   Graph_Graph_from_mc_statistical_error1042->SetMaximum(1.516419);
   Graph_Graph_from_mc_statistical_error1042->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1042->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1042->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1042->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1042->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1042->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1042->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1042->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1042->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1042->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1042->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1042->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1042->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1042->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1042->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1042->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1042);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_tags_16->cd();
   H_dR_tags_16->Modified();
   H_dR_tags_16->cd();
   H_dR_tags_16->SetSelected(H_dR_tags_16);
}

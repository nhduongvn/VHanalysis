void Z_mass_tags_17_logY()
{
//=========Macro generated from canvas: Z_mass_tags_17/Z_mass_tags_17
//=========  (Tue Aug 22 09:15:50 2023) by ROOT version 6.14/09
   TCanvas *Z_mass_tags_17 = new TCanvas("Z_mass_tags_17", "Z_mass_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_mass_tags_17->SetHighLightColor(2);
   Z_mass_tags_17->Range(0,0,1,1);
   Z_mass_tags_17->SetFillColor(0);
   Z_mass_tags_17->SetFillStyle(4000);
   Z_mass_tags_17->SetBorderMode(0);
   Z_mass_tags_17->SetBorderSize(2);
   Z_mass_tags_17->SetFrameFillStyle(1000);
   Z_mass_tags_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-2.849388,315.7258,11.64758);
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
   st->SetMaximum(4.729212e+09);
   
   TH1F *st_stack_2 = new TH1F("st_stack_2","",40,0,400);
   st_stack_2->SetMinimum(0.001462545);
   st_stack_2->SetMaximum(1.577172e+10);
   st_stack_2->SetDirectory(0);
   st_stack_2->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_2->SetLineColor(ci);
   st_stack_2->GetXaxis()->SetRange(1,30);
   st_stack_2->GetXaxis()->SetLabelFont(42);
   st_stack_2->GetXaxis()->SetLabelSize(0.035);
   st_stack_2->GetXaxis()->SetTitleSize(0.035);
   st_stack_2->GetXaxis()->SetTitleFont(42);
   st_stack_2->GetYaxis()->SetTitle("Events/10.0");
   st_stack_2->GetYaxis()->SetLabelFont(42);
   st_stack_2->GetYaxis()->SetLabelSize(0.05);
   st_stack_2->GetYaxis()->SetTitleSize(0.057);
   st_stack_2->GetYaxis()->SetTitleOffset(1.2);
   st_stack_2->GetYaxis()->SetTitleFont(42);
   st_stack_2->GetZaxis()->SetLabelFont(42);
   st_stack_2->GetZaxis()->SetLabelSize(0.035);
   st_stack_2->GetZaxis()->SetTitleSize(0.035);
   st_stack_2->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_2);
   
   
   TH1D *VbbHcc_tags_Z_mass_stack_1 = new TH1D("VbbHcc_tags_Z_mass_stack_1","",40,0,400);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(3,5.534113);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(4,826.3314);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(5,1455.206);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(6,4401.012);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(7,5048.563);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(8,6032.957);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(9,4871.479);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(10,4817.638);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(11,2670.678);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(12,2032.33);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(13,4131.07);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(14,3450.632);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(15,4193.612);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(16,2277.738);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(17,2907.069);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(18,3086.176);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(19,4562.364);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(20,2609.291);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(21,3584.772);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(22,22222.92);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(23,2531.965);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(24,2226.146);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(25,2729.912);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(26,1533.311);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(27,1989.176);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(28,1786.241);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(29,1865.889);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(30,1062.288);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(31,1198.371);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(32,1640.262);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(33,1125.68);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(34,1510.046);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(35,1785.536);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(36,2176.02);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(37,1079.085);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(38,2282.501);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(39,1988.121);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(40,1627.658);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(41,77694.57);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(3,5.534113);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(4,366.0156);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(5,354.1189);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(6,824.1202);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(7,822.3926);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(8,992.5971);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(9,926.1554);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(10,905.9755);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(11,537.2921);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(12,412.0942);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(13,852.7007);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(14,739.9262);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(15,836.709);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(16,524.6088);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(17,643.8855);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(18,1313.693);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(19,916.5451);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(20,598.035);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(21,1039.259);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(22,20593.87);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(23,653.6388);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(24,554.7716);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(25,685.9064);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(26,439.0026);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(27,576.1675);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(28,566.145);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(29,521.9345);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(30,325.0104);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(31,335.5643);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(32,540.1871);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(33,351.5762);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(34,447.3151);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(35,396.9195);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(36,624.1125);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(37,399.772);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(38,659.3484);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(39,534.3574);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(40,543.8648);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(41,16757.89);
   VbbHcc_tags_Z_mass_stack_1->SetEntries(9351);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Z_mass_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_mass_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_mass_stack_1->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_Z_mass_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_mass_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_mass_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_mass_stack_2 = new TH1D("VbbHcc_tags_Z_mass_stack_2","",40,0,400);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(3,0.03568801);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(4,1.868388);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(5,5.555769);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(6,10.63469);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(7,10.87169);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(8,16.2436);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(9,13.21697);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(10,17.66617);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(11,14.91344);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(12,19.85518);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(13,19.69016);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(14,20.59139);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(15,16.55458);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(16,16.65154);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(17,15.14603);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(18,17.97798);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(19,14.21609);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(20,18.80212);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(21,16.64961);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(22,12.77985);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(23,12.83429);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(24,11.49211);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(25,12.86857);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(26,13.19095);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(27,13.37724);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(28,11.34194);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(29,14.03406);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(30,11.76579);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(31,9.35605);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(32,12.19123);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(33,9.280739);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(34,10.86229);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(35,10.67633);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(36,8.785577);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(37,10.40702);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(38,8.302124);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(39,8.696009);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(40,8.598728);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(41,367.7932);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(3,0.03568801);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(4,0.5425611);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(5,0.8008382);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(6,1.29777);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(7,1.218092);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(8,1.607898);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(9,1.468564);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(10,1.769534);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(11,1.521059);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(12,1.853467);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(13,1.892151);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(14,1.882979);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(15,1.698102);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(16,1.603645);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(17,1.493125);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(18,1.772873);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(19,1.555464);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(20,1.826869);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(21,1.686866);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(22,1.451667);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(23,1.464252);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(24,1.332597);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(25,1.413078);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(26,1.546464);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(27,1.485349);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(28,1.2903);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(29,1.628671);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(30,1.399155);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(31,1.22812);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(32,1.433245);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(33,1.249113);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(34,1.450724);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(35,1.433806);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(36,1.225525);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(37,1.308515);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(38,1.080255);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(39,1.25645);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(40,1.260252);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(41,8.115239);
   VbbHcc_tags_Z_mass_stack_2->SetEntries(11598);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Z_mass_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_mass_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_mass_stack_2->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_Z_mass_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_mass_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_mass_stack_2,"");
   
   TH1D *VbbHcc_tags_Z_mass_stack_3 = new TH1D("VbbHcc_tags_Z_mass_stack_3","",40,0,400);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(3,0.9759251);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(4,33.62248);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(5,122.4675);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(6,202.892);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(7,252.0112);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(8,297.7079);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(9,327.6365);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(10,355.6081);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(11,393.1613);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(12,415.615);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(13,428.9081);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(14,426.0314);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(15,419.3993);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(16,402.9327);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(17,385.1992);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(18,370.823);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(19,356.4621);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(20,329.4417);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(21,318.7217);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(22,306.41);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(23,291.1694);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(24,282.5856);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(25,281.9268);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(26,261.9889);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(27,263.231);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(28,249.4715);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(29,253.6149);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(30,247.0074);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(31,228.861);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(32,233.7888);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(33,229.9023);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(34,222.8082);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(35,209.3338);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(36,212.4831);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(37,201.6491);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(38,193.935);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(39,196.7303);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(40,190.4441);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(41,7615.264);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(3,0.226382);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(4,1.460822);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(5,2.780373);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(6,3.591973);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(7,3.998309);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(8,4.397279);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(9,4.627368);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(10,4.814226);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(11,5.08123);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(12,5.22224);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(13,5.305217);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(14,5.29804);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(15,5.245031);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(16,5.132206);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(17,5.025472);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(18,4.942717);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(19,4.837489);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(20,4.641844);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(21,4.559359);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(22,4.468623);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(23,4.348097);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(24,4.295905);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(25,4.275253);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(26,4.127417);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(27,4.156654);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(28,4.018562);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(29,4.076719);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(30,4.027381);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(31,3.864191);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(32,3.904856);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(33,3.881692);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(34,3.82007);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(35,3.708527);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(36,3.75125);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(37,3.643662);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(38,3.575486);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(39,3.603511);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(40,3.544049);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(41,22.61987);
   VbbHcc_tags_Z_mass_stack_3->SetEntries(305979);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Z_mass_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_mass_stack_3->SetLineColor(ci);
   VbbHcc_tags_Z_mass_stack_3->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_Z_mass_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_mass_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_mass_stack_3,"");
   
   TH1D *VbbHcc_tags_Z_mass_stack_4 = new TH1D("VbbHcc_tags_Z_mass_stack_4","",40,0,400);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(4,2.752261);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(5,14.81949);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(6,24.73361);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(7,36.88708);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(8,57.46356);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(9,111.6853);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(10,152.488);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(11,114.6168);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(12,67.80663);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(13,48.9209);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(14,44.08114);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(15,35.92935);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(16,39.63909);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(17,37.37838);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(18,30.65449);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(19,30.99689);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(20,30.61159);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(21,30.26211);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(22,30.77753);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(23,33.77832);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(24,28.58899);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(25,26.97374);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(26,37.3127);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(27,24.10725);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(28,29.20464);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(29,25.0885);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(30,23.7169);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(31,24.96954);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(32,23.73556);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(33,22.76121);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(34,20.63031);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(35,32.55744);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(36,23.38231);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(37,20.2038);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(38,24.63315);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(39,16.51615);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(40,17.77463);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(41,856.865);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(4,0.7772088);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(5,2.495196);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(6,2.289752);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(7,2.705002);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(8,4.556629);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(9,6.146173);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(10,6.4493);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(11,6.664924);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(12,4.796935);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(13,3.788868);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(14,5.171157);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(15,3.714806);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(16,3.514636);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(17,5.045426);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(18,3.553427);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(19,3.597822);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(20,3.68283);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(21,2.400113);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(22,4.591429);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(23,5.061996);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(24,3.889556);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(25,3.691482);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(26,6.176379);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(27,2.143306);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(28,4.852143);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(29,4.305599);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(30,2.116477);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(31,3.84052);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(32,2.172867);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(33,3.517412);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(34,2.783999);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(35,5.541809);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(36,2.19878);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(37,2.814104);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(38,3.55352);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(39,1.89439);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(40,1.945534);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(41,15.30056);
   VbbHcc_tags_Z_mass_stack_4->SetEntries(17592);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Z_mass_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_mass_stack_4->SetLineColor(ci);
   VbbHcc_tags_Z_mass_stack_4->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_Z_mass_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_mass_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_mass_stack_4,"");
   
   TH1D *VbbHcc_tags_Z_mass_stack_5 = new TH1D("VbbHcc_tags_Z_mass_stack_5","",40,0,400);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(4,0.7917833);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(5,3.371247);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(6,9.152302);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(7,9.595351);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(8,10.79801);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(9,16.48627);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(10,8.331275);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(11,6.402002);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(12,4.358506);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(13,6.110439);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(14,4.532953);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(15,4.412766);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(16,6.315755);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(17,4.577343);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(18,3.930748);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(19,3.059663);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(20,2.855339);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(21,3.529991);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(22,2.795231);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(23,3.627895);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(24,3.162904);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(25,13.06625);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(26,2.934904);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(27,2.587894);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(28,1.537295);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(29,2.891877);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(30,2.43689);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(31,0.7342439);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(32,1.666133);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(33,1.064955);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(34,1.449459);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(35,1.581367);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(36,1.971039);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(37,1.865631);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(38,1.130093);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(39,2.957386);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(40,1.356658);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(41,81.22311);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(4,0.2659973);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(5,1.434528);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(6,2.254654);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(7,2.453773);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(8,2.433431);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(9,5.700964);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(10,1.82013);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(11,1.413077);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(12,0.8096494);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(13,1.274192);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(14,0.8074493);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(15,1.223034);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(16,1.867629);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(17,1.806367);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(18,1.318422);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(19,0.6038117);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(20,0.7078937);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(21,1.336978);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(22,0.6411238);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(23,1.454616);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(24,0.8573889);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(25,8.034408);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(26,1.276707);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(27,1.427929);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(28,0.523537);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(29,1.163879);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(30,1.405854);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(31,0.3095767);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(32,0.4629686);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(33,0.3631396);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(34,0.4249069);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(35,0.5688533);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(36,0.4980553);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(37,0.5975611);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(38,0.3718939);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(39,1.320279);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(40,0.406406);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(41,4.80918);
   VbbHcc_tags_Z_mass_stack_5->SetEntries(2041);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Z_mass_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_mass_stack_5->SetLineColor(ci);
   VbbHcc_tags_Z_mass_stack_5->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_Z_mass_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_mass_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_mass_stack_5,"");
   
   TH1D *VbbHcc_tags_Z_mass_stack_6 = new TH1D("VbbHcc_tags_Z_mass_stack_6","",40,0,400);
   VbbHcc_tags_Z_mass_stack_6->SetBinContent(11,0.3049337);
   VbbHcc_tags_Z_mass_stack_6->SetBinContent(12,0.3752659);
   VbbHcc_tags_Z_mass_stack_6->SetBinContent(15,0.2355824);
   VbbHcc_tags_Z_mass_stack_6->SetBinContent(26,0.2950387);
   VbbHcc_tags_Z_mass_stack_6->SetBinContent(41,0.232904);
   VbbHcc_tags_Z_mass_stack_6->SetBinError(11,0.3049337);
   VbbHcc_tags_Z_mass_stack_6->SetBinError(12,0.3752659);
   VbbHcc_tags_Z_mass_stack_6->SetBinError(15,0.2355824);
   VbbHcc_tags_Z_mass_stack_6->SetBinError(26,0.2950387);
   VbbHcc_tags_Z_mass_stack_6->SetBinError(41,0.232904);
   VbbHcc_tags_Z_mass_stack_6->SetEntries(5);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Z_mass_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_mass_stack_6->SetLineColor(ci);
   VbbHcc_tags_Z_mass_stack_6->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_Z_mass_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_mass_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_mass_stack_6,"");
   
   TH1D *VbbHcc_tags_Z_mass_stack_7 = new TH1D("VbbHcc_tags_Z_mass_stack_7","",40,0,400);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(5,0.6061748);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(8,0.269206);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(9,0.5280754);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(10,0.7413938);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(11,0.5866755);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(16,0.4901618);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(19,0.2711943);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(25,0.2333619);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(30,0.2849003);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(32,0.2529144);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(41,1.842563);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(5,0.4315985);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(8,0.269206);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(9,0.3769486);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(10,0.4410353);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(11,0.4154508);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(16,0.348904);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(19,0.2711943);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(25,0.2333619);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(30,0.2849003);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(32,0.2529144);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(41,0.6701059);
   VbbHcc_tags_Z_mass_stack_7->SetEntries(24);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Z_mass_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_mass_stack_7->SetLineColor(ci);
   VbbHcc_tags_Z_mass_stack_7->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_Z_mass_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_mass_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_mass_stack_7,"");
   
   TH1D *VbbHcc_tags_Z_mass_stack_8 = new TH1D("VbbHcc_tags_Z_mass_stack_8","",40,0,400);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(6,0.5923174);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(7,0.2571625);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(8,1.942084);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(9,1.716783);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(10,5.842505);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(11,1.901362);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(12,1.762013);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(13,0.4436355);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(14,1.071992);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(15,0.2721982);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(16,0.4289348);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(17,0.4804571);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(18,0.260034);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(20,0.45599);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(21,0.3183534);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(22,0.1807044);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(23,0.1646707);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(24,0.3074656);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(26,0.2552682);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(27,0.4497318);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(30,0.230644);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(33,1.138553);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(34,0.2792177);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(35,0.4805116);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(36,0.2688617);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(37,1.280521);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(38,0.215303);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(39,0.5223881);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(40,0.2791285);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(41,17.35446);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(6,0.3563813);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(7,0.2571625);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(8,0.6990917);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(9,0.6170009);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(10,1.184968);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(11,0.6835243);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(12,0.6830307);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(13,0.3184862);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(14,0.5410006);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(15,0.2721982);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(16,0.3153587);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(17,0.3442987);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(18,0.260034);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(20,0.3224517);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(21,0.3183534);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(22,0.1807044);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(23,0.1646707);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(24,0.3074656);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(26,0.2552682);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(27,0.3204484);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(30,0.230644);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(33,0.4807403);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(34,0.2792177);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(35,0.340019);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(36,0.2688617);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(37,0.574804);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(38,0.215303);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(39,0.3694277);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(40,0.2791285);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(41,2.063185);
   VbbHcc_tags_Z_mass_stack_8->SetEntries(178);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Z_mass_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_mass_stack_8->SetLineColor(ci);
   VbbHcc_tags_Z_mass_stack_8->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_Z_mass_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_mass_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_mass_stack_8,"");
   
   TH1D *VbbHcc_tags_Z_mass_stack_9 = new TH1D("VbbHcc_tags_Z_mass_stack_9","",40,0,400);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(4,0.01775267);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(5,0.1018239);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(6,0.1852133);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(7,0.3191671);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(8,0.7484966);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(9,1.742138);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(10,2.312797);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(11,1.962879);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(12,1.63014);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(13,1.759255);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(14,1.519801);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(15,1.031598);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(16,0.6295285);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(17,0.5121217);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(18,0.4361343);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(19,0.361255);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(20,0.3930195);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(21,0.3543346);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(22,0.3580561);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(23,0.3573192);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(24,0.3716274);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(25,0.377074);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(26,0.4166748);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(27,0.3886585);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(28,0.3812305);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(29,0.3917118);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(30,0.3813182);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(31,0.3770375);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(32,0.3630557);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(33,0.4359073);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(34,0.4350856);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(35,0.3997949);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(36,0.4376711);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(37,0.3527892);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(38,0.4312692);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(39,0.4460902);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(40,0.4100156);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(41,18.45559);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(4,0.005223543);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(5,0.01277363);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(6,0.01690149);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(7,0.02245727);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(8,0.03434197);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(9,0.05306316);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(10,0.0609283);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(11,0.05640347);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(12,0.05134508);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(13,0.05339641);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(14,0.04970354);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(15,0.04033554);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(16,0.03190283);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(17,0.02853347);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(18,0.02609261);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(19,0.02401097);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(20,0.02488178);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(21,0.02357468);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(22,0.02382668);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(23,0.02342633);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(24,0.02410078);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(25,0.02434497);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(26,0.02539843);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(27,0.02460411);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(28,0.02459101);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(29,0.02492923);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(30,0.02462868);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(31,0.02436143);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(32,0.02378547);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(33,0.02607829);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(34,0.02648987);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(35,0.02493936);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(36,0.02604016);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(37,0.02351146);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(38,0.02576006);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(39,0.02640305);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(40,0.02543705);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(41,0.1738668);
   VbbHcc_tags_Z_mass_stack_9->SetEntries(28819);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Z_mass_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_mass_stack_9->SetLineColor(ci);
   VbbHcc_tags_Z_mass_stack_9->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_Z_mass_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_mass_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_mass_stack_9,"");
   
   TH1D *VbbHcc_tags_Z_mass_stack_10 = new TH1D("VbbHcc_tags_Z_mass_stack_10","",40,0,400);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(3,0.0004063588);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(4,0.009972995);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(5,0.02716623);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(6,0.06976275);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(7,0.1411035);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(8,0.3195654);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(9,0.7055839);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(10,0.9137362);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(11,0.701965);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(12,0.684485);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(13,0.6935903);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(14,0.5568977);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(15,0.3773272);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(16,0.274299);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(17,0.2399327);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(18,0.1999498);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(19,0.2187318);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(20,0.196746);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(21,0.1804151);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(22,0.1954717);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(23,0.1929944);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(24,0.170724);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(25,0.1911126);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(26,0.1782446);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(27,0.191923);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(28,0.1721589);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(29,0.1932423);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(30,0.181104);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(31,0.1774209);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(32,0.1797477);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(33,0.1702537);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(34,0.1660824);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(35,0.1651388);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(36,0.1568928);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(37,0.1589613);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(38,0.1527055);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(39,0.1703264);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(40,0.1487285);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(41,5.773947);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(3,0.0004063588);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(4,0.00200281);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(5,0.003249311);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(6,0.005199077);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(7,0.007400871);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(8,0.01108643);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(9,0.01652223);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(10,0.01885754);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(11,0.01650441);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(12,0.01635987);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(13,0.01655195);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(14,0.01479998);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(15,0.012104);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(16,0.0103122);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(17,0.009686921);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(18,0.008800119);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(19,0.009223086);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(20,0.008705908);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(21,0.00839284);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(22,0.008688846);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(23,0.008630859);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(24,0.00808493);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(25,0.008570164);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(26,0.008270596);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(27,0.00860531);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(28,0.008105669);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(29,0.008620365);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(30,0.008350548);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(31,0.008267131);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(32,0.008298116);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(33,0.008070355);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(34,0.007952715);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(35,0.007942156);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(36,0.007724781);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(37,0.007805745);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(38,0.007618807);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(39,0.008036193);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(40,0.007554626);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(41,0.04745639);
   VbbHcc_tags_Z_mass_stack_10->SetEntries(40948);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Z_mass_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_mass_stack_10->SetLineColor(ci);
   VbbHcc_tags_Z_mass_stack_10->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_Z_mass_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_mass_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_mass_stack_10,"");
   
   TH1D *VbbHcc_tags_Z_mass_stack_11 = new TH1D("VbbHcc_tags_Z_mass_stack_11","",40,0,400);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(6,0.002991835);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(7,0.001684601);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(8,0.004814529);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(9,0.01471684);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(10,0.02372491);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(11,0.02217143);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(12,0.0026686);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(13,0.003005378);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(14,0.001602781);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(15,0.001917841);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(16,0.004215973);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(17,0.002850123);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(18,0.003811375);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(19,0.00174143);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(20,0.001839315);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(21,0.002988166);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(24,0.00111652);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(25,0.001737587);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(26,0.001052596);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(30,0.001611336);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(32,0.001310475);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(35,0.001131928);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(36,0.002176473);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(37,0.001399899);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(40,0.001435202);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(41,0.02300642);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(6,0.002117139);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(7,0.001684601);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(8,0.002845594);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(9,0.00496222);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(10,0.006193057);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(11,0.005660333);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(12,0.001927013);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(13,0.002127544);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(14,0.001602781);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(15,0.001917841);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(16,0.002477817);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(17,0.002015479);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(18,0.002745529);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(19,0.00174143);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(20,0.001839315);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(21,0.002117065);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(24,0.00111652);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(25,0.001737587);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(26,0.001052596);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(30,0.001611336);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(32,0.001310475);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(35,0.001131928);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(36,0.002176473);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(37,0.001399899);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(40,0.001435202);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(41,0.006160429);
   VbbHcc_tags_Z_mass_stack_11->SetEntries(87);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_mass_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_mass_stack_11->SetLineColor(ci);
   VbbHcc_tags_Z_mass_stack_11->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_Z_mass_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_mass_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_mass_stack_11,"");
   
   TH1D *VbbHcc_tags_Z_mass_stack_12 = new TH1D("VbbHcc_tags_Z_mass_stack_12","",40,0,400);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(4,0.0002594099);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(5,0.000150291);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(7,0.0005656146);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(8,0.002872824);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(9,0.008544812);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(10,0.009464502);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(11,0.006871229);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(12,0.00239885);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(13,0.0004156393);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(14,0.0002409376);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(15,0.0008507369);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(16,0.0005922962);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(17,0.001115723);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(18,0.001011597);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(19,0.0002192044);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(21,0.0004973878);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(22,0.0005964941);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(23,0.0007747221);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(24,0.0007470318);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(25,0.000427218);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(27,0.000698054);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(29,0.0001641435);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(32,0.0004224872);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(33,0.0006363202);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(34,0.0002835605);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(35,0.0004441767);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(36,0.0002108705);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(37,0.0003199525);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(38,0.0004889899);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(39,0.0003286085);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(40,0.0004265901);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(41,0.0122468);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(4,0.0002594099);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(5,0.000150291);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(7,0.0003323121);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(8,0.0007837893);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(9,0.00135487);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(10,0.001404681);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(11,0.001222142);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(12,0.0006986636);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(13,0.0002947742);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(14,0.0001757616);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(15,0.0004261305);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(16,0.0003456832);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(17,0.0005013528);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(18,0.0004591292);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(19,0.0002192044);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(21,0.0002916691);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(22,0.0003631834);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(23,0.0003898665);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(24,0.0003795521);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(25,0.0002643753);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(27,0.0004031345);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(29,0.0001641435);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(32,0.0002994831);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(33,0.000367778);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(34,0.0002017076);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(35,0.0003141312);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(36,0.0002108705);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(37,0.0002266573);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(38,0.0003458007);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(39,0.0002330292);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(40,0.0003016754);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(41,0.00157834);
   VbbHcc_tags_Z_mass_stack_12->SetEntries(277);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_mass_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_mass_stack_12->SetLineColor(ci);
   VbbHcc_tags_Z_mass_stack_12->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_Z_mass_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_mass_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_mass_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_Z_mass__4 = new TH1D("VbbHcc_tags_Z_mass__4","",40,0,400);
   VbbHcc_tags_Z_mass__4->SetBinContent(3,7);
   VbbHcc_tags_Z_mass__4->SetBinContent(4,256);
   VbbHcc_tags_Z_mass__4->SetBinContent(5,947);
   VbbHcc_tags_Z_mass__4->SetBinContent(6,1470);
   VbbHcc_tags_Z_mass__4->SetBinContent(7,1775);
   VbbHcc_tags_Z_mass__4->SetBinContent(15,1419);
   VbbHcc_tags_Z_mass__4->SetBinContent(16,1354);
   VbbHcc_tags_Z_mass__4->SetBinContent(17,1285);
   VbbHcc_tags_Z_mass__4->SetBinContent(18,1218);
   VbbHcc_tags_Z_mass__4->SetBinContent(19,1162);
   VbbHcc_tags_Z_mass__4->SetBinContent(20,1151);
   VbbHcc_tags_Z_mass__4->SetBinContent(21,1091);
   VbbHcc_tags_Z_mass__4->SetBinContent(22,1013);
   VbbHcc_tags_Z_mass__4->SetBinContent(23,908);
   VbbHcc_tags_Z_mass__4->SetBinContent(24,932);
   VbbHcc_tags_Z_mass__4->SetBinContent(25,878);
   VbbHcc_tags_Z_mass__4->SetBinContent(26,838);
   VbbHcc_tags_Z_mass__4->SetBinContent(27,771);
   VbbHcc_tags_Z_mass__4->SetBinContent(28,815);
   VbbHcc_tags_Z_mass__4->SetBinContent(29,783);
   VbbHcc_tags_Z_mass__4->SetBinContent(30,697);
   VbbHcc_tags_Z_mass__4->SetBinContent(31,725);
   VbbHcc_tags_Z_mass__4->SetBinContent(32,698);
   VbbHcc_tags_Z_mass__4->SetBinContent(33,732);
   VbbHcc_tags_Z_mass__4->SetBinContent(34,632);
   VbbHcc_tags_Z_mass__4->SetBinContent(35,644);
   VbbHcc_tags_Z_mass__4->SetBinContent(36,588);
   VbbHcc_tags_Z_mass__4->SetBinContent(37,655);
   VbbHcc_tags_Z_mass__4->SetBinContent(38,597);
   VbbHcc_tags_Z_mass__4->SetBinContent(39,591);
   VbbHcc_tags_Z_mass__4->SetBinContent(40,580);
   VbbHcc_tags_Z_mass__4->SetBinContent(41,24140);
   VbbHcc_tags_Z_mass__4->SetEntries(63158);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_mass__4->SetLineColor(ci);
   VbbHcc_tags_Z_mass__4->SetLineWidth(2);
   VbbHcc_tags_Z_mass__4->SetMarkerStyle(20);
   VbbHcc_tags_Z_mass__4->SetMarkerSize(1.2);
   VbbHcc_tags_Z_mass__4->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_Z_mass__4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass__4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass__4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass__4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass__4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass__4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass__4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass__4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_mass__4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass__4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass__4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass__4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass__4->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass__4->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Z_mass_fx1003[40] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255,
   265,
   275,
   285,
   295,
   305,
   315,
   325,
   335,
   345,
   355,
   365,
   375,
   385,
   395};
   Double_t Graph_from_VbbHcc_tags_Z_mass_fy1003[40] = {
   0,
   0,
   6.546133,
   865.3943,
   1602.156,
   4649.274,
   5358.648,
   6418.457,
   5345.22,
   5361.575,
   3205.258,
   2544.422,
   4637.6,
   3949.02,
   4671.827,
   2745.105,
   3350.606,
   3510.463,
   4967.952,
   2992.049,
   3954.792,
   22576.41,
   2874.091,
   2552.827,
   3065.551,
   1849.885,
   2293.511,
   2078.349,
   2162.104,
   1348.294,
   1462.846,
   1912.442,
   1390.435,
   1766.677,
   2040.732,
   2423.508,
   1315.004,
   2511.301,
   2214.159,
   1846.672};
   Double_t Graph_from_VbbHcc_tags_Z_mass_fex1003[40] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t Graph_from_VbbHcc_tags_Z_mass_fey1003[40] = {
   0,
   0,
   5.538857,
   366.0198,
   354.1427,
   824.1354,
   822.4114,
   992.6218,
   926.2063,
   906.0157,
   537.3622,
   412.1609,
   852.7287,
   739.9663,
   836.7364,
   524.6517,
   643.9292,
   1313.709,
   916.5665,
   598.0677,
   1039.274,
   20593.87,
   653.6762,
   554.8042,
   685.9782,
   439.0702,
   576.1902,
   566.1818,
   521.972,
   325.0485,
   335.6109,
   540.2078,
   351.618,
   447.3428,
   396.9786,
   624.1291,
   399.8015,
   659.3687,
   534.3761,
   543.8815};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_VbbHcc_tags_Z_mass_fx1003,Graph_from_VbbHcc_tags_Z_mass_fy1003,Graph_from_VbbHcc_tags_Z_mass_fex1003,Graph_from_VbbHcc_tags_Z_mass_fey1003);
   gre->SetName("Graph_from_VbbHcc_tags_Z_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Z_mass1003 = new TH1F("Graph_Graph_from_VbbHcc_tags_Z_mass1003","",100,0,440);
   Graph_Graph_from_VbbHcc_tags_Z_mass1003->SetMinimum(47.48731);
   Graph_Graph_from_VbbHcc_tags_Z_mass1003->SetMaximum(47487.31);
   Graph_Graph_from_VbbHcc_tags_Z_mass1003->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_Z_mass1003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Z_mass1003->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Z_mass1003->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_mass1003->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_mass1003->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_mass1003->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_mass1003->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_mass1003->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_mass1003->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_mass1003->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_Z_mass1003->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_mass1003->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_mass1003->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_mass1003->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_mass1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Z_mass1003);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_mass","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_mass_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_mass_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_mass_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_mass_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_mass_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_mass_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_mass_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_mass_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_mass_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_mass_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_mass_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_mass_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_Z_mass","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_mass_tags_17->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-45.96762,-0.2774193,315.7258,1.658065);
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
   
   TH1D *data_mc_ratio__5 = new TH1D("data_mc_ratio__5","",40,0,400);
   data_mc_ratio__5->SetBinContent(3,1.069334);
   data_mc_ratio__5->SetBinContent(4,0.2958189);
   data_mc_ratio__5->SetBinContent(5,0.5910786);
   data_mc_ratio__5->SetBinContent(6,0.3161784);
   data_mc_ratio__5->SetBinContent(7,0.3312403);
   data_mc_ratio__5->SetBinContent(8,0.2927495);
   data_mc_ratio__5->SetBinContent(9,0.3268341);
   data_mc_ratio__5->SetBinContent(10,0.3265831);
   data_mc_ratio__5->SetBinContent(11,0.5359943);
   data_mc_ratio__5->SetBinContent(12,0.6488703);
   data_mc_ratio__5->SetBinContent(13,0.3385372);
   data_mc_ratio__5->SetBinContent(14,0.3674329);
   data_mc_ratio__5->SetBinContent(15,0.3037356);
   data_mc_ratio__5->SetBinContent(16,0.4932416);
   data_mc_ratio__5->SetBinContent(17,0.3835127);
   data_mc_ratio__5->SetBinContent(18,0.3469627);
   data_mc_ratio__5->SetBinContent(19,0.2338992);
   data_mc_ratio__5->SetBinContent(20,0.3846862);
   data_mc_ratio__5->SetBinContent(21,0.2758678);
   data_mc_ratio__5->SetBinContent(22,0.04486984);
   data_mc_ratio__5->SetBinContent(23,0.315926);
   data_mc_ratio__5->SetBinContent(24,0.3650854);
   data_mc_ratio__5->SetBinContent(25,0.2864086);
   data_mc_ratio__5->SetBinContent(26,0.4530012);
   data_mc_ratio__5->SetBinContent(27,0.3361659);
   data_mc_ratio__5->SetBinContent(28,0.3921381);
   data_mc_ratio__5->SetBinContent(29,0.3621473);
   data_mc_ratio__5->SetBinContent(30,0.5169495);
   data_mc_ratio__5->SetBinContent(31,0.4956091);
   data_mc_ratio__5->SetBinContent(32,0.3649785);
   data_mc_ratio__5->SetBinContent(33,0.526454);
   data_mc_ratio__5->SetBinContent(34,0.3577338);
   data_mc_ratio__5->SetBinContent(35,0.3155731);
   data_mc_ratio__5->SetBinContent(36,0.2426235);
   data_mc_ratio__5->SetBinContent(37,0.4980973);
   data_mc_ratio__5->SetBinContent(38,0.2377254);
   data_mc_ratio__5->SetBinContent(39,0.2669184);
   data_mc_ratio__5->SetBinContent(40,0.3140785);
   data_mc_ratio__5->SetBinContent(41,0.2785618);
   data_mc_ratio__5->SetBinError(3,0.4041701);
   data_mc_ratio__5->SetBinError(4,0.01848868);
   data_mc_ratio__5->SetBinError(5,0.01920747);
   data_mc_ratio__5->SetBinError(6,0.008246573);
   data_mc_ratio__5->SetBinError(7,0.007862197);
   data_mc_ratio__5->SetBinError(8,0.00675356);
   data_mc_ratio__5->SetBinError(9,0.007819534);
   data_mc_ratio__5->SetBinError(10,0.007804601);
   data_mc_ratio__5->SetBinError(11,0.01293149);
   data_mc_ratio__5->SetBinError(12,0.01596924);
   data_mc_ratio__5->SetBinError(13,0.008543908);
   data_mc_ratio__5->SetBinError(14,0.009645936);
   data_mc_ratio__5->SetBinError(15,0.008063144);
   data_mc_ratio__5->SetBinError(16,0.01340449);
   data_mc_ratio__5->SetBinError(17,0.01069863);
   data_mc_ratio__5->SetBinError(18,0.009941667);
   data_mc_ratio__5->SetBinError(19,0.006861605);
   data_mc_ratio__5->SetBinError(20,0.01133885);
   data_mc_ratio__5->SetBinError(21,0.008351966);
   data_mc_ratio__5->SetBinError(22,0.001409775);
   data_mc_ratio__5->SetBinError(23,0.01048437);
   data_mc_ratio__5->SetBinError(24,0.01195877);
   data_mc_ratio__5->SetBinError(25,0.009665821);
   data_mc_ratio__5->SetBinError(26,0.01564867);
   data_mc_ratio__5->SetBinError(27,0.01210672);
   data_mc_ratio__5->SetBinError(28,0.013736);
   data_mc_ratio__5->SetBinError(29,0.01294209);
   data_mc_ratio__5->SetBinError(30,0.01958086);
   data_mc_ratio__5->SetBinError(31,0.01840646);
   data_mc_ratio__5->SetBinError(32,0.01381464);
   data_mc_ratio__5->SetBinError(33,0.0194583);
   data_mc_ratio__5->SetBinError(34,0.01422989);
   data_mc_ratio__5->SetBinError(35,0.01243532);
   data_mc_ratio__5->SetBinError(36,0.01000562);
   data_mc_ratio__5->SetBinError(37,0.01946227);
   data_mc_ratio__5->SetBinError(38,0.009729453);
   data_mc_ratio__5->SetBinError(39,0.01097956);
   data_mc_ratio__5->SetBinError(40,0.0130414);
   data_mc_ratio__5->SetBinError(41,0.05389721);
   data_mc_ratio__5->SetMinimum(0.4);
   data_mc_ratio__5->SetMaximum(1.6);
   data_mc_ratio__5->SetEntries(165.924);
   data_mc_ratio__5->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__5->SetLineColor(ci);
   data_mc_ratio__5->SetLineWidth(2);
   data_mc_ratio__5->SetMarkerStyle(20);
   data_mc_ratio__5->SetMarkerSize(1.2);
   data_mc_ratio__5->GetXaxis()->SetTitle("M_{Z} [GeV]");
   data_mc_ratio__5->GetXaxis()->SetRange(1,30);
   data_mc_ratio__5->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__5->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__5->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__5->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__5->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__5->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__5->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__5->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__5->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__5->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__5->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__5->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__5->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__5->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__5->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__5->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__5->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1004[40] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255,
   265,
   275,
   285,
   295,
   305,
   315,
   325,
   335,
   345,
   355,
   365,
   375,
   385,
   395};
   Double_t Graph_from_mc_statistical_error_fy1004[40] = {
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
   Double_t Graph_from_mc_statistical_error_fex1004[40] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t Graph_from_mc_statistical_error_fey1004[40] = {
   0,
   0,
   0.8461265,
   0.4229515,
   0.2210414,
   0.1772611,
   0.1534737,
   0.1546512,
   0.1732775,
   0.1689831,
   0.1676502,
   0.1619861,
   0.1838729,
   0.1873797,
   0.1791026,
   0.1911226,
   0.1921829,
   0.3742266,
   0.1844959,
   0.1998857,
   0.2627885,
   0.9121851,
   0.2274376,
   0.2173293,
   0.22377,
   0.23735,
   0.2512263,
   0.272419,
   0.2414186,
   0.2410813,
   0.2294232,
   0.2824702,
   0.2528835,
   0.2532114,
   0.1945276,
   0.2575313,
   0.3040306,
   0.2625606,
   0.2413449,
   0.2945198};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1004,Graph_from_mc_statistical_error_fy1004,Graph_from_mc_statistical_error_fex1004,Graph_from_mc_statistical_error_fey1004);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1004 = new TH1F("Graph_Graph_from_mc_statistical_error1004","",100,0,440);
   Graph_Graph_from_mc_statistical_error1004->SetMinimum(0.0790334);
   Graph_Graph_from_mc_statistical_error1004->SetMaximum(2.094622);
   Graph_Graph_from_mc_statistical_error1004->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1004->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1004->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1004->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1004->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1004->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1004->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1004->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1004->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1004->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1004->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1004->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1004->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1004->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1004->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1004);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   Z_mass_tags_17->cd();
   Z_mass_tags_17->Modified();
   Z_mass_tags_17->cd();
   Z_mass_tags_17->SetSelected(Z_mass_tags_17);
}

void Z_mass_both_17()
{
//=========Macro generated from canvas: Z_mass_both_17/Z_mass_both_17
//=========  (Tue Aug 22 09:22:24 2023) by ROOT version 6.14/09
   TCanvas *Z_mass_both_17 = new TCanvas("Z_mass_both_17", "Z_mass_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_mass_both_17->SetHighLightColor(2);
   Z_mass_both_17->Range(0,0,1,1);
   Z_mass_both_17->SetFillColor(0);
   Z_mass_both_17->SetFillStyle(4000);
   Z_mass_both_17->SetBorderMode(0);
   Z_mass_both_17->SetBorderSize(2);
   Z_mass_both_17->SetFrameFillStyle(1000);
   Z_mass_both_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-68.15085,315.7258,68092.69);
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
   st->SetMaximum(58358.68);
   
   TH1F *st_stack_194 = new TH1F("st_stack_194","",40,0,400);
   st_stack_194->SetMinimum(0.01);
   st_stack_194->SetMaximum(61276.61);
   st_stack_194->SetDirectory(0);
   st_stack_194->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_194->SetLineColor(ci);
   st_stack_194->GetXaxis()->SetRange(1,30);
   st_stack_194->GetXaxis()->SetLabelFont(42);
   st_stack_194->GetXaxis()->SetLabelSize(0.035);
   st_stack_194->GetXaxis()->SetTitleSize(0.035);
   st_stack_194->GetXaxis()->SetTitleFont(42);
   st_stack_194->GetYaxis()->SetTitle("Events/10.0");
   st_stack_194->GetYaxis()->SetLabelFont(42);
   st_stack_194->GetYaxis()->SetLabelSize(0.05);
   st_stack_194->GetYaxis()->SetTitleSize(0.057);
   st_stack_194->GetYaxis()->SetTitleOffset(1.2);
   st_stack_194->GetYaxis()->SetTitleFont(42);
   st_stack_194->GetZaxis()->SetLabelFont(42);
   st_stack_194->GetZaxis()->SetLabelSize(0.035);
   st_stack_194->GetZaxis()->SetTitleSize(0.035);
   st_stack_194->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_194);
   
   
   TH1D *VbbHcc_both_Z_mass_stack_1 = new TH1D("VbbHcc_both_Z_mass_stack_1","",40,0,400);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(3,5.903459);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(4,441.9466);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(5,2051.199);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(6,25909.38);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(7,7702.462);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(8,7190.468);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(9,6163.624);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(10,5666.482);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(11,4344.61);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(12,3867.446);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(13,4846.502);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(14,3556.234);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(15,5183.514);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(16,2726.557);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(17,3243.015);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(18,3643.509);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(19,3880.085);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(20,3308.804);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(21,4360.99);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(22,2033.228);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(23,3338.542);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(24,2325.296);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(25,2141.066);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(26,1400.339);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(27,3153.8);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(28,1958.351);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(29,2303.718);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(30,1531.565);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(31,1662.447);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(32,1495.434);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(33,1084.652);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(34,1423.703);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(35,1648.702);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(36,2075.449);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(37,1203.47);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(38,1737.148);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(39,2136.479);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(40,953.4863);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(41,64313.18);
   VbbHcc_both_Z_mass_stack_1->SetBinError(3,5.903459);
   VbbHcc_both_Z_mass_stack_1->SetBinError(4,92.90257);
   VbbHcc_both_Z_mass_stack_1->SetBinError(5,507.6432);
   VbbHcc_both_Z_mass_stack_1->SetBinError(6,20610.08);
   VbbHcc_both_Z_mass_stack_1->SetBinError(7,1085.858);
   VbbHcc_both_Z_mass_stack_1->SetBinError(8,1069.339);
   VbbHcc_both_Z_mass_stack_1->SetBinError(9,982.853);
   VbbHcc_both_Z_mass_stack_1->SetBinError(10,924.8543);
   VbbHcc_both_Z_mass_stack_1->SetBinError(11,791.9131);
   VbbHcc_both_Z_mass_stack_1->SetBinError(12,736.2061);
   VbbHcc_both_Z_mass_stack_1->SetBinError(13,869.2846);
   VbbHcc_both_Z_mass_stack_1->SetBinError(14,703.2365);
   VbbHcc_both_Z_mass_stack_1->SetBinError(15,936.1129);
   VbbHcc_both_Z_mass_stack_1->SetBinError(16,587.2099);
   VbbHcc_both_Z_mass_stack_1->SetBinError(17,657.6546);
   VbbHcc_both_Z_mass_stack_1->SetBinError(18,1339.944);
   VbbHcc_both_Z_mass_stack_1->SetBinError(19,785.6806);
   VbbHcc_both_Z_mass_stack_1->SetBinError(20,725.1855);
   VbbHcc_both_Z_mass_stack_1->SetBinError(21,1117.874);
   VbbHcc_both_Z_mass_stack_1->SetBinError(22,439.705);
   VbbHcc_both_Z_mass_stack_1->SetBinError(23,765.9306);
   VbbHcc_both_Z_mass_stack_1->SetBinError(24,586.9637);
   VbbHcc_both_Z_mass_stack_1->SetBinError(25,553.2672);
   VbbHcc_both_Z_mass_stack_1->SetBinError(26,439.4721);
   VbbHcc_both_Z_mass_stack_1->SetBinError(27,770.1695);
   VbbHcc_both_Z_mass_stack_1->SetBinError(28,575.7954);
   VbbHcc_both_Z_mass_stack_1->SetBinError(29,642.7737);
   VbbHcc_both_Z_mass_stack_1->SetBinError(30,500.3369);
   VbbHcc_both_Z_mass_stack_1->SetBinError(31,511.7886);
   VbbHcc_both_Z_mass_stack_1->SetBinError(32,480.3935);
   VbbHcc_both_Z_mass_stack_1->SetBinError(33,309.4153);
   VbbHcc_both_Z_mass_stack_1->SetBinError(34,427.5018);
   VbbHcc_both_Z_mass_stack_1->SetBinError(35,424.4477);
   VbbHcc_both_Z_mass_stack_1->SetBinError(36,568.4503);
   VbbHcc_both_Z_mass_stack_1->SetBinError(37,408.7795);
   VbbHcc_both_Z_mass_stack_1->SetBinError(38,488.3226);
   VbbHcc_both_Z_mass_stack_1->SetBinError(39,573.1335);
   VbbHcc_both_Z_mass_stack_1->SetBinError(40,321.0131);
   VbbHcc_both_Z_mass_stack_1->SetBinError(41,16695.13);
   VbbHcc_both_Z_mass_stack_1->SetEntries(9795);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Z_mass_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_mass_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_mass_stack_1->GetXaxis()->SetRange(1,400);
   VbbHcc_both_Z_mass_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_mass_stack_1,"");
   
   TH1D *VbbHcc_both_Z_mass_stack_2 = new TH1D("VbbHcc_both_Z_mass_stack_2","",40,0,400);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(4,2.276284);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(5,7.885426);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(6,13.90503);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(7,20.37066);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(8,26.0062);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(9,22.60229);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(10,27.60072);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(11,26.6609);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(12,28.92584);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(13,30.80188);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(14,27.80463);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(15,21.35359);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(16,23.92865);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(17,21.45574);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(18,22.27242);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(19,17.74854);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(20,20.48063);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(21,15.5124);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(22,15.81186);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(23,13.54248);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(24,14.18638);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(25,12.43123);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(26,11.85409);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(27,13.25178);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(28,13.33672);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(29,15.0586);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(30,12.98508);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(31,10.58173);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(32,10.95907);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(33,8.682894);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(34,8.202751);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(35,10.78472);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(36,7.698658);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(37,10.91697);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(38,8.977941);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(39,7.456681);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(40,9.278291);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(41,326.5196);
   VbbHcc_both_Z_mass_stack_2->SetBinError(4,0.6306849);
   VbbHcc_both_Z_mass_stack_2->SetBinError(5,1.039049);
   VbbHcc_both_Z_mass_stack_2->SetBinError(6,1.439439);
   VbbHcc_both_Z_mass_stack_2->SetBinError(7,1.834209);
   VbbHcc_both_Z_mass_stack_2->SetBinError(8,2.014955);
   VbbHcc_both_Z_mass_stack_2->SetBinError(9,1.974963);
   VbbHcc_both_Z_mass_stack_2->SetBinError(10,2.241574);
   VbbHcc_both_Z_mass_stack_2->SetBinError(11,2.089064);
   VbbHcc_both_Z_mass_stack_2->SetBinError(12,2.29449);
   VbbHcc_both_Z_mass_stack_2->SetBinError(13,2.41281);
   VbbHcc_both_Z_mass_stack_2->SetBinError(14,2.200563);
   VbbHcc_both_Z_mass_stack_2->SetBinError(15,1.852123);
   VbbHcc_both_Z_mass_stack_2->SetBinError(16,1.962597);
   VbbHcc_both_Z_mass_stack_2->SetBinError(17,1.888389);
   VbbHcc_both_Z_mass_stack_2->SetBinError(18,2.0125);
   VbbHcc_both_Z_mass_stack_2->SetBinError(19,1.779679);
   VbbHcc_both_Z_mass_stack_2->SetBinError(20,1.843676);
   VbbHcc_both_Z_mass_stack_2->SetBinError(21,1.53628);
   VbbHcc_both_Z_mass_stack_2->SetBinError(22,1.65831);
   VbbHcc_both_Z_mass_stack_2->SetBinError(23,1.533643);
   VbbHcc_both_Z_mass_stack_2->SetBinError(24,1.562452);
   VbbHcc_both_Z_mass_stack_2->SetBinError(25,1.406703);
   VbbHcc_both_Z_mass_stack_2->SetBinError(26,1.388992);
   VbbHcc_both_Z_mass_stack_2->SetBinError(27,1.544653);
   VbbHcc_both_Z_mass_stack_2->SetBinError(28,1.564953);
   VbbHcc_both_Z_mass_stack_2->SetBinError(29,1.674189);
   VbbHcc_both_Z_mass_stack_2->SetBinError(30,1.443524);
   VbbHcc_both_Z_mass_stack_2->SetBinError(31,1.322779);
   VbbHcc_both_Z_mass_stack_2->SetBinError(32,1.362677);
   VbbHcc_both_Z_mass_stack_2->SetBinError(33,1.149321);
   VbbHcc_both_Z_mass_stack_2->SetBinError(34,1.129873);
   VbbHcc_both_Z_mass_stack_2->SetBinError(35,1.442057);
   VbbHcc_both_Z_mass_stack_2->SetBinError(36,1.126114);
   VbbHcc_both_Z_mass_stack_2->SetBinError(37,1.525628);
   VbbHcc_both_Z_mass_stack_2->SetBinError(38,1.222625);
   VbbHcc_both_Z_mass_stack_2->SetBinError(39,1.143657);
   VbbHcc_both_Z_mass_stack_2->SetBinError(40,1.38479);
   VbbHcc_both_Z_mass_stack_2->SetBinError(41,7.678018);
   VbbHcc_both_Z_mass_stack_2->SetEntries(12402);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_Z_mass_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_mass_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_mass_stack_2->GetXaxis()->SetRange(1,400);
   VbbHcc_both_Z_mass_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_mass_stack_2,"");
   
   TH1D *VbbHcc_both_Z_mass_stack_3 = new TH1D("VbbHcc_both_Z_mass_stack_3","",40,0,400);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(2,0.02909884);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(3,1.98055);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(4,45.70951);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(5,162.9189);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(6,297.3503);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(7,395.5992);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(8,501.8065);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(9,591.8573);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(10,657.2119);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(11,691.5062);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(12,701.3642);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(13,691.8066);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(14,658.9629);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(15,617.0866);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(16,566.4694);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(17,519.3785);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(18,482.4728);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(19,449.7799);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(20,398.9584);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(21,364.4587);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(22,342.8137);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(23,313.0486);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(24,304.6049);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(25,292.7749);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(26,266.6886);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(27,265.2495);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(28,248.3111);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(29,246.3844);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(30,239.4265);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(31,221.8228);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(32,223.451);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(33,216.634);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(34,204.0071);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(35,198.7411);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(36,196.1769);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(37,181.2394);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(38,180.4283);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(39,172.1615);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(40,165.091);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(41,6429.628);
   VbbHcc_both_Z_mass_stack_3->SetBinError(2,0.02909884);
   VbbHcc_both_Z_mass_stack_3->SetBinError(3,0.3416594);
   VbbHcc_both_Z_mass_stack_3->SetBinError(4,1.710014);
   VbbHcc_both_Z_mass_stack_3->SetBinError(5,3.207215);
   VbbHcc_both_Z_mass_stack_3->SetBinError(6,4.359503);
   VbbHcc_both_Z_mass_stack_3->SetBinError(7,5.038455);
   VbbHcc_both_Z_mass_stack_3->SetBinError(8,5.723541);
   VbbHcc_both_Z_mass_stack_3->SetBinError(9,6.24931);
   VbbHcc_both_Z_mass_stack_3->SetBinError(10,6.606199);
   VbbHcc_both_Z_mass_stack_3->SetBinError(11,6.770211);
   VbbHcc_both_Z_mass_stack_3->SetBinError(12,6.837729);
   VbbHcc_both_Z_mass_stack_3->SetBinError(13,6.796679);
   VbbHcc_both_Z_mass_stack_3->SetBinError(14,6.634506);
   VbbHcc_both_Z_mass_stack_3->SetBinError(15,6.406786);
   VbbHcc_both_Z_mass_stack_3->SetBinError(16,6.130439);
   VbbHcc_both_Z_mass_stack_3->SetBinError(17,5.872648);
   VbbHcc_both_Z_mass_stack_3->SetBinError(18,5.676485);
   VbbHcc_both_Z_mass_stack_3->SetBinError(19,5.456635);
   VbbHcc_both_Z_mass_stack_3->SetBinError(20,5.129426);
   VbbHcc_both_Z_mass_stack_3->SetBinError(21,4.899777);
   VbbHcc_both_Z_mass_stack_3->SetBinError(22,4.730171);
   VbbHcc_both_Z_mass_stack_3->SetBinError(23,4.542597);
   VbbHcc_both_Z_mass_stack_3->SetBinError(24,4.466188);
   VbbHcc_both_Z_mass_stack_3->SetBinError(25,4.368386);
   VbbHcc_both_Z_mass_stack_3->SetBinError(26,4.193659);
   VbbHcc_both_Z_mass_stack_3->SetBinError(27,4.186685);
   VbbHcc_both_Z_mass_stack_3->SetBinError(28,4.015876);
   VbbHcc_both_Z_mass_stack_3->SetBinError(29,4.037895);
   VbbHcc_both_Z_mass_stack_3->SetBinError(30,3.954778);
   VbbHcc_both_Z_mass_stack_3->SetBinError(31,3.810225);
   VbbHcc_both_Z_mass_stack_3->SetBinError(32,3.849521);
   VbbHcc_both_Z_mass_stack_3->SetBinError(33,3.779973);
   VbbHcc_both_Z_mass_stack_3->SetBinError(34,3.664223);
   VbbHcc_both_Z_mass_stack_3->SetBinError(35,3.635332);
   VbbHcc_both_Z_mass_stack_3->SetBinError(36,3.61609);
   VbbHcc_both_Z_mass_stack_3->SetBinError(37,3.46743);
   VbbHcc_both_Z_mass_stack_3->SetBinError(38,3.4435);
   VbbHcc_both_Z_mass_stack_3->SetBinError(39,3.373496);
   VbbHcc_both_Z_mass_stack_3->SetBinError(40,3.309627);
   VbbHcc_both_Z_mass_stack_3->SetBinError(41,20.78496);
   VbbHcc_both_Z_mass_stack_3->SetEntries(333238);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Z_mass_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_mass_stack_3->SetLineColor(ci);
   VbbHcc_both_Z_mass_stack_3->GetXaxis()->SetRange(1,400);
   VbbHcc_both_Z_mass_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_mass_stack_3,"");
   
   TH1D *VbbHcc_both_Z_mass_stack_4 = new TH1D("VbbHcc_both_Z_mass_stack_4","",40,0,400);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(3,0.07865276);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(4,3.986997);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(5,14.5973);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(6,30.75597);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(7,56.24795);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(8,74.75576);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(9,138.4847);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(10,173.9773);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(11,136.5963);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(12,80.83245);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(13,60.57567);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(14,60.48996);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(15,48.95123);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(16,47.05662);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(17,43.72694);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(18,36.45988);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(19,34.15031);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(20,35.0356);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(21,29.29389);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(22,38.05591);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(23,39.91355);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(24,26.45027);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(25,29.41612);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(26,34.35014);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(27,27.44033);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(28,28.58245);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(29,24.21013);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(30,26.81268);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(31,23.80501);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(32,24.57542);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(33,18.2468);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(34,20.92625);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(35,22.41869);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(36,21.92726);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(37,22.41351);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(38,22.94561);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(39,18.50111);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(40,15.17825);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(41,734.6034);
   VbbHcc_both_Z_mass_stack_4->SetBinError(3,0.07865276);
   VbbHcc_both_Z_mass_stack_4->SetBinError(4,0.9040892);
   VbbHcc_both_Z_mass_stack_4->SetBinError(5,1.808358);
   VbbHcc_both_Z_mass_stack_4->SetBinError(6,2.579185);
   VbbHcc_both_Z_mass_stack_4->SetBinError(7,4.826341);
   VbbHcc_both_Z_mass_stack_4->SetBinError(8,4.936935);
   VbbHcc_both_Z_mass_stack_4->SetBinError(9,6.988624);
   VbbHcc_both_Z_mass_stack_4->SetBinError(10,7.514114);
   VbbHcc_both_Z_mass_stack_4->SetBinError(11,8.046543);
   VbbHcc_both_Z_mass_stack_4->SetBinError(12,5.843193);
   VbbHcc_both_Z_mass_stack_4->SetBinError(13,4.01855);
   VbbHcc_both_Z_mass_stack_4->SetBinError(14,6.682513);
   VbbHcc_both_Z_mass_stack_4->SetBinError(15,4.995954);
   VbbHcc_both_Z_mass_stack_4->SetBinError(16,4.16849);
   VbbHcc_both_Z_mass_stack_4->SetBinError(17,3.896855);
   VbbHcc_both_Z_mass_stack_4->SetBinError(18,2.573882);
   VbbHcc_both_Z_mass_stack_4->SetBinError(19,3.651592);
   VbbHcc_both_Z_mass_stack_4->SetBinError(20,3.808676);
   VbbHcc_both_Z_mass_stack_4->SetBinError(21,2.239555);
   VbbHcc_both_Z_mass_stack_4->SetBinError(22,5.805491);
   VbbHcc_both_Z_mass_stack_4->SetBinError(23,5.210562);
   VbbHcc_both_Z_mass_stack_4->SetBinError(24,2.670301);
   VbbHcc_both_Z_mass_stack_4->SetBinError(25,3.726312);
   VbbHcc_both_Z_mass_stack_4->SetBinError(26,5.294003);
   VbbHcc_both_Z_mass_stack_4->SetBinError(27,2.249554);
   VbbHcc_both_Z_mass_stack_4->SetBinError(28,3.522397);
   VbbHcc_both_Z_mass_stack_4->SetBinError(29,4.268505);
   VbbHcc_both_Z_mass_stack_4->SetBinError(30,3.684167);
   VbbHcc_both_Z_mass_stack_4->SetBinError(31,2.794639);
   VbbHcc_both_Z_mass_stack_4->SetBinError(32,2.110658);
   VbbHcc_both_Z_mass_stack_4->SetBinError(33,1.729676);
   VbbHcc_both_Z_mass_stack_4->SetBinError(34,2.054571);
   VbbHcc_both_Z_mass_stack_4->SetBinError(35,2.115531);
   VbbHcc_both_Z_mass_stack_4->SetBinError(36,2.162064);
   VbbHcc_both_Z_mass_stack_4->SetBinError(37,3.689031);
   VbbHcc_both_Z_mass_stack_4->SetBinError(38,3.241301);
   VbbHcc_both_Z_mass_stack_4->SetBinError(39,3.185486);
   VbbHcc_both_Z_mass_stack_4->SetBinError(40,1.656882);
   VbbHcc_both_Z_mass_stack_4->SetBinError(41,13.83634);
   VbbHcc_both_Z_mass_stack_4->SetEntries(18334);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Z_mass_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_mass_stack_4->SetLineColor(ci);
   VbbHcc_both_Z_mass_stack_4->GetXaxis()->SetRange(1,400);
   VbbHcc_both_Z_mass_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_mass_stack_4,"");
   
   TH1D *VbbHcc_both_Z_mass_stack_5 = new TH1D("VbbHcc_both_Z_mass_stack_5","",40,0,400);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(4,0.8602748);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(5,3.82796);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(6,8.502868);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(7,9.35091);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(8,12.00089);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(9,10.86667);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(10,10.45294);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(11,9.965047);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(12,10.51205);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(13,7.462163);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(14,5.192458);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(15,4.510446);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(16,8.590098);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(17,5.24848);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(18,3.908032);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(19,3.355516);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(20,3.760143);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(21,3.290455);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(22,2.920226);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(23,2.447471);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(24,3.047852);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(25,6.660517);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(26,2.6839);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(27,2.795218);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(28,1.592179);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(29,2.695349);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(30,1.480054);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(31,0.9037959);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(32,1.601416);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(33,2.016748);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(34,0.8043372);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(35,0.8453547);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(36,2.01434);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(37,2.109098);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(38,1.099914);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(39,3.358915);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(40,1.771715);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(41,89.51841);
   VbbHcc_both_Z_mass_stack_5->SetBinError(4,0.2859873);
   VbbHcc_both_Z_mass_stack_5->SetBinError(5,1.454726);
   VbbHcc_both_Z_mass_stack_5->SetBinError(6,2.23541);
   VbbHcc_both_Z_mass_stack_5->SetBinError(7,2.023094);
   VbbHcc_both_Z_mass_stack_5->SetBinError(8,2.646697);
   VbbHcc_both_Z_mass_stack_5->SetBinError(9,2.007415);
   VbbHcc_both_Z_mass_stack_5->SetBinError(10,2.291355);
   VbbHcc_both_Z_mass_stack_5->SetBinError(11,2.231418);
   VbbHcc_both_Z_mass_stack_5->SetBinError(12,5.178261);
   VbbHcc_both_Z_mass_stack_5->SetBinError(13,1.388429);
   VbbHcc_both_Z_mass_stack_5->SetBinError(14,0.8658292);
   VbbHcc_both_Z_mass_stack_5->SetBinError(15,1.209827);
   VbbHcc_both_Z_mass_stack_5->SetBinError(16,2.013822);
   VbbHcc_both_Z_mass_stack_5->SetBinError(17,1.823625);
   VbbHcc_both_Z_mass_stack_5->SetBinError(18,0.7478586);
   VbbHcc_both_Z_mass_stack_5->SetBinError(19,0.6821637);
   VbbHcc_both_Z_mass_stack_5->SetBinError(20,0.8913633);
   VbbHcc_both_Z_mass_stack_5->SetBinError(21,1.327512);
   VbbHcc_both_Z_mass_stack_5->SetBinError(22,0.612041);
   VbbHcc_both_Z_mass_stack_5->SetBinError(23,0.6023913);
   VbbHcc_both_Z_mass_stack_5->SetBinError(24,0.7797831);
   VbbHcc_both_Z_mass_stack_5->SetBinError(25,2.407853);
   VbbHcc_both_Z_mass_stack_5->SetBinError(26,0.623723);
   VbbHcc_both_Z_mass_stack_5->SetBinError(27,1.444607);
   VbbHcc_both_Z_mass_stack_5->SetBinError(28,0.5471482);
   VbbHcc_both_Z_mass_stack_5->SetBinError(29,1.069134);
   VbbHcc_both_Z_mass_stack_5->SetBinError(30,0.3703261);
   VbbHcc_both_Z_mass_stack_5->SetBinError(31,0.3451659);
   VbbHcc_both_Z_mass_stack_5->SetBinError(32,0.4445577);
   VbbHcc_both_Z_mass_stack_5->SetBinError(33,0.6065323);
   VbbHcc_both_Z_mass_stack_5->SetBinError(34,0.2954597);
   VbbHcc_both_Z_mass_stack_5->SetBinError(35,0.2925553);
   VbbHcc_both_Z_mass_stack_5->SetBinError(36,0.518581);
   VbbHcc_both_Z_mass_stack_5->SetBinError(37,0.6647651);
   VbbHcc_both_Z_mass_stack_5->SetBinError(38,0.3452609);
   VbbHcc_both_Z_mass_stack_5->SetBinError(39,1.454537);
   VbbHcc_both_Z_mass_stack_5->SetBinError(40,0.4681297);
   VbbHcc_both_Z_mass_stack_5->SetBinError(41,9.294056);
   VbbHcc_both_Z_mass_stack_5->SetEntries(2217);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Z_mass_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_mass_stack_5->SetLineColor(ci);
   VbbHcc_both_Z_mass_stack_5->GetXaxis()->SetRange(1,400);
   VbbHcc_both_Z_mass_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_mass_stack_5,"");
   
   TH1D *VbbHcc_both_Z_mass_stack_6 = new TH1D("VbbHcc_both_Z_mass_stack_6","",40,0,400);
   VbbHcc_both_Z_mass_stack_6->SetBinContent(10,0.2950387);
   VbbHcc_both_Z_mass_stack_6->SetBinContent(11,0.3049337);
   VbbHcc_both_Z_mass_stack_6->SetBinContent(35,0.2355824);
   VbbHcc_both_Z_mass_stack_6->SetBinContent(41,0.6081699);
   VbbHcc_both_Z_mass_stack_6->SetBinError(10,0.2950387);
   VbbHcc_both_Z_mass_stack_6->SetBinError(11,0.3049337);
   VbbHcc_both_Z_mass_stack_6->SetBinError(35,0.2355824);
   VbbHcc_both_Z_mass_stack_6->SetBinError(41,0.4416659);
   VbbHcc_both_Z_mass_stack_6->SetEntries(5);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Z_mass_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_mass_stack_6->SetLineColor(ci);
   VbbHcc_both_Z_mass_stack_6->GetXaxis()->SetRange(1,400);
   VbbHcc_both_Z_mass_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_mass_stack_6,"");
   
   TH1D *VbbHcc_both_Z_mass_stack_7 = new TH1D("VbbHcc_both_Z_mass_stack_7","",40,0,400);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(5,0.6061748);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(6,0.1753319);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(8,0.269206);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(9,0.6979812);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(10,1.305925);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(15,0.2734067);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(16,0.2167551);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(19,0.2711943);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(25,0.2333619);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(30,0.2849003);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(32,0.2529144);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(41,1.925816);
   VbbHcc_both_Z_mass_stack_7->SetBinError(5,0.4315985);
   VbbHcc_both_Z_mass_stack_7->SetBinError(6,0.1753319);
   VbbHcc_both_Z_mass_stack_7->SetBinError(8,0.269206);
   VbbHcc_both_Z_mass_stack_7->SetBinError(9,0.4134709);
   VbbHcc_both_Z_mass_stack_7->SetBinError(10,0.552133);
   VbbHcc_both_Z_mass_stack_7->SetBinError(15,0.2734067);
   VbbHcc_both_Z_mass_stack_7->SetBinError(16,0.2167551);
   VbbHcc_both_Z_mass_stack_7->SetBinError(19,0.2711943);
   VbbHcc_both_Z_mass_stack_7->SetBinError(25,0.2333619);
   VbbHcc_both_Z_mass_stack_7->SetBinError(30,0.2849003);
   VbbHcc_both_Z_mass_stack_7->SetBinError(32,0.2529144);
   VbbHcc_both_Z_mass_stack_7->SetBinError(41,0.7324379);
   VbbHcc_both_Z_mass_stack_7->SetEntries(26);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Z_mass_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_mass_stack_7->SetLineColor(ci);
   VbbHcc_both_Z_mass_stack_7->GetXaxis()->SetRange(1,400);
   VbbHcc_both_Z_mass_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_mass_stack_7,"");
   
   TH1D *VbbHcc_both_Z_mass_stack_8 = new TH1D("VbbHcc_both_Z_mass_stack_8","",40,0,400);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(6,0.9458319);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(7,0.4626413);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(8,2.54721);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(9,2.546935);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(10,7.546795);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(11,3.13091);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(12,2.15012);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(13,0.8203901);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(14,1.020985);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(15,0.2721982);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(16,0.8572545);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(17,0.4804571);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(18,0.1832793);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(19,0.2306696);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(20,0.2255815);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(21,0.3183534);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(22,0.1807044);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(23,0.1646707);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(24,0.3074656);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(26,0.5101541);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(27,0.4704053);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(28,0.1480999);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(29,0.07004041);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(31,0.1282263);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(33,0.420828);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(35,0.6637715);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(36,0.8836615);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(37,1.27857);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(38,0.215303);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(39,0.5223881);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(40,0.5431469);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(41,12.48386);
   VbbHcc_both_Z_mass_stack_8->SetBinError(6,0.4380918);
   VbbHcc_both_Z_mass_stack_8->SetBinError(7,0.3284292);
   VbbHcc_both_Z_mass_stack_8->SetBinError(8,0.7815785);
   VbbHcc_both_Z_mass_stack_8->SetBinError(9,0.7224324);
   VbbHcc_both_Z_mass_stack_8->SetBinError(10,1.349848);
   VbbHcc_both_Z_mass_stack_8->SetBinError(11,0.9163466);
   VbbHcc_both_Z_mass_stack_8->SetBinError(12,0.7709521);
   VbbHcc_both_Z_mass_stack_8->SetBinError(13,0.4156114);
   VbbHcc_both_Z_mass_stack_8->SetBinError(14,0.5143624);
   VbbHcc_both_Z_mass_stack_8->SetBinError(15,0.2721982);
   VbbHcc_both_Z_mass_stack_8->SetBinError(16,0.4394192);
   VbbHcc_both_Z_mass_stack_8->SetBinError(17,0.3442987);
   VbbHcc_both_Z_mass_stack_8->SetBinError(18,0.1832793);
   VbbHcc_both_Z_mass_stack_8->SetBinError(19,0.2306696);
   VbbHcc_both_Z_mass_stack_8->SetBinError(20,0.2255815);
   VbbHcc_both_Z_mass_stack_8->SetBinError(21,0.3183534);
   VbbHcc_both_Z_mass_stack_8->SetBinError(22,0.1807044);
   VbbHcc_both_Z_mass_stack_8->SetBinError(23,0.1646707);
   VbbHcc_both_Z_mass_stack_8->SetBinError(24,0.3074656);
   VbbHcc_both_Z_mass_stack_8->SetBinError(26,0.3607336);
   VbbHcc_both_Z_mass_stack_8->SetBinError(27,0.3211146);
   VbbHcc_both_Z_mass_stack_8->SetBinError(28,0.1480999);
   VbbHcc_both_Z_mass_stack_8->SetBinError(29,0.07004041);
   VbbHcc_both_Z_mass_stack_8->SetBinError(31,0.1282263);
   VbbHcc_both_Z_mass_stack_8->SetBinError(33,0.3080851);
   VbbHcc_both_Z_mass_stack_8->SetBinError(35,0.3862604);
   VbbHcc_both_Z_mass_stack_8->SetBinError(36,0.4465361);
   VbbHcc_both_Z_mass_stack_8->SetBinError(37,0.574001);
   VbbHcc_both_Z_mass_stack_8->SetBinError(38,0.215303);
   VbbHcc_both_Z_mass_stack_8->SetBinError(39,0.3694277);
   VbbHcc_both_Z_mass_stack_8->SetBinError(40,0.3842114);
   VbbHcc_both_Z_mass_stack_8->SetBinError(41,1.796566);
   VbbHcc_both_Z_mass_stack_8->SetEntries(184);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Z_mass_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_mass_stack_8->SetLineColor(ci);
   VbbHcc_both_Z_mass_stack_8->GetXaxis()->SetRange(1,400);
   VbbHcc_both_Z_mass_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_mass_stack_8,"");
   
   TH1D *VbbHcc_both_Z_mass_stack_9 = new TH1D("VbbHcc_both_Z_mass_stack_9","",40,0,400);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(3,0.001470289);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(4,0.02353142);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(5,0.1162263);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(6,0.2771867);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(7,0.4736446);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(8,1.214689);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(9,2.712547);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(10,3.693945);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(11,2.963994);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(12,2.269645);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(13,2.277815);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(14,1.897511);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(15,1.203003);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(16,0.7318714);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(17,0.5372696);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(18,0.4539567);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(19,0.3453917);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(20,0.3620376);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(21,0.3542088);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(22,0.3754689);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(23,0.3790753);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(24,0.3461328);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(25,0.3402136);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(26,0.389553);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(27,0.3507514);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(28,0.369796);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(29,0.3526235);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(30,0.3620229);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(31,0.3500562);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(32,0.330098);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(33,0.3619944);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(34,0.3662695);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(35,0.3514508);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(36,0.3878223);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(37,0.3260482);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(38,0.3592295);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(39,0.3518674);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(40,0.3331281);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(41,14.09754);
   VbbHcc_both_Z_mass_stack_9->SetBinError(3,0.001470289);
   VbbHcc_both_Z_mass_stack_9->SetBinError(4,0.00601545);
   VbbHcc_both_Z_mass_stack_9->SetBinError(5,0.01357945);
   VbbHcc_both_Z_mass_stack_9->SetBinError(6,0.02060286);
   VbbHcc_both_Z_mass_stack_9->SetBinError(7,0.02710088);
   VbbHcc_both_Z_mass_stack_9->SetBinError(8,0.0435383);
   VbbHcc_both_Z_mass_stack_9->SetBinError(9,0.06614198);
   VbbHcc_both_Z_mass_stack_9->SetBinError(10,0.07739159);
   VbbHcc_both_Z_mass_stack_9->SetBinError(11,0.06923193);
   VbbHcc_both_Z_mass_stack_9->SetBinError(12,0.06079493);
   VbbHcc_both_Z_mass_stack_9->SetBinError(13,0.06109556);
   VbbHcc_both_Z_mass_stack_9->SetBinError(14,0.05584791);
   VbbHcc_both_Z_mass_stack_9->SetBinError(15,0.04371066);
   VbbHcc_both_Z_mass_stack_9->SetBinError(16,0.03438295);
   VbbHcc_both_Z_mass_stack_9->SetBinError(17,0.02891532);
   VbbHcc_both_Z_mass_stack_9->SetBinError(18,0.02687574);
   VbbHcc_both_Z_mass_stack_9->SetBinError(19,0.02344312);
   VbbHcc_both_Z_mass_stack_9->SetBinError(20,0.02385933);
   VbbHcc_both_Z_mass_stack_9->SetBinError(21,0.02340506);
   VbbHcc_both_Z_mass_stack_9->SetBinError(22,0.02433704);
   VbbHcc_both_Z_mass_stack_9->SetBinError(23,0.02397168);
   VbbHcc_both_Z_mass_stack_9->SetBinError(24,0.02309221);
   VbbHcc_both_Z_mass_stack_9->SetBinError(25,0.023006);
   VbbHcc_both_Z_mass_stack_9->SetBinError(26,0.02454315);
   VbbHcc_both_Z_mass_stack_9->SetBinError(27,0.02330625);
   VbbHcc_both_Z_mass_stack_9->SetBinError(28,0.02408298);
   VbbHcc_both_Z_mass_stack_9->SetBinError(29,0.02358339);
   VbbHcc_both_Z_mass_stack_9->SetBinError(30,0.02404738);
   VbbHcc_both_Z_mass_stack_9->SetBinError(31,0.02357665);
   VbbHcc_both_Z_mass_stack_9->SetBinError(32,0.02290941);
   VbbHcc_both_Z_mass_stack_9->SetBinError(33,0.0235049);
   VbbHcc_both_Z_mass_stack_9->SetBinError(34,0.02421937);
   VbbHcc_both_Z_mass_stack_9->SetBinError(35,0.02375238);
   VbbHcc_both_Z_mass_stack_9->SetBinError(36,0.02459691);
   VbbHcc_both_Z_mass_stack_9->SetBinError(37,0.02269064);
   VbbHcc_both_Z_mass_stack_9->SetBinError(38,0.02372259);
   VbbHcc_both_Z_mass_stack_9->SetBinError(39,0.023853);
   VbbHcc_both_Z_mass_stack_9->SetBinError(40,0.02335468);
   VbbHcc_both_Z_mass_stack_9->SetBinError(41,0.1519487);
   VbbHcc_both_Z_mass_stack_9->SetEntries(29329);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_Z_mass_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_mass_stack_9->SetLineColor(ci);
   VbbHcc_both_Z_mass_stack_9->GetXaxis()->SetRange(1,400);
   VbbHcc_both_Z_mass_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_mass_stack_9,"");
   
   TH1D *VbbHcc_both_Z_mass_stack_10 = new TH1D("VbbHcc_both_Z_mass_stack_10","",40,0,400);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(3,0.0004077437);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(4,0.0111467);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(5,0.04175909);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(6,0.1021846);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(7,0.2244125);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(8,0.5391418);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(9,1.113366);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(10,1.331645);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(11,1.004269);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(12,0.9006892);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(13,0.8319346);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(14,0.6475371);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(15,0.4435195);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(16,0.2959882);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(17,0.2622373);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(18,0.2124025);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(19,0.230966);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(20,0.1956009);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(21,0.1812984);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(22,0.1906599);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(23,0.1807721);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(24,0.169299);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(25,0.1795231);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(26,0.1751196);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(27,0.1618193);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(28,0.1581139);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(29,0.1634495);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(30,0.1552095);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(31,0.1469303);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(32,0.1377914);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(33,0.1441221);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(34,0.131919);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(35,0.1367262);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(36,0.1308895);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(37,0.131419);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(38,0.1232073);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(39,0.1230016);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(40,0.1239139);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(41,4.540873);
   VbbHcc_both_Z_mass_stack_10->SetBinError(3,0.0004077437);
   VbbHcc_both_Z_mass_stack_10->SetBinError(4,0.002117219);
   VbbHcc_both_Z_mass_stack_10->SetBinError(5,0.003988099);
   VbbHcc_both_Z_mass_stack_10->SetBinError(6,0.006285855);
   VbbHcc_both_Z_mass_stack_10->SetBinError(7,0.009302807);
   VbbHcc_both_Z_mass_stack_10->SetBinError(8,0.01437989);
   VbbHcc_both_Z_mass_stack_10->SetBinError(9,0.02074048);
   VbbHcc_both_Z_mass_stack_10->SetBinError(10,0.02272319);
   VbbHcc_both_Z_mass_stack_10->SetBinError(11,0.01972079);
   VbbHcc_both_Z_mass_stack_10->SetBinError(12,0.01871255);
   VbbHcc_both_Z_mass_stack_10->SetBinError(13,0.01807419);
   VbbHcc_both_Z_mass_stack_10->SetBinError(14,0.0159231);
   VbbHcc_both_Z_mass_stack_10->SetBinError(15,0.01313786);
   VbbHcc_both_Z_mass_stack_10->SetBinError(16,0.01069926);
   VbbHcc_both_Z_mass_stack_10->SetBinError(17,0.01011817);
   VbbHcc_both_Z_mass_stack_10->SetBinError(18,0.009074973);
   VbbHcc_both_Z_mass_stack_10->SetBinError(19,0.009469052);
   VbbHcc_both_Z_mass_stack_10->SetBinError(20,0.008714899);
   VbbHcc_both_Z_mass_stack_10->SetBinError(21,0.008401924);
   VbbHcc_both_Z_mass_stack_10->SetBinError(22,0.008570724);
   VbbHcc_both_Z_mass_stack_10->SetBinError(23,0.008385683);
   VbbHcc_both_Z_mass_stack_10->SetBinError(24,0.008058125);
   VbbHcc_both_Z_mass_stack_10->SetBinError(25,0.00835065);
   VbbHcc_both_Z_mass_stack_10->SetBinError(26,0.008227035);
   VbbHcc_both_Z_mass_stack_10->SetBinError(27,0.00790854);
   VbbHcc_both_Z_mass_stack_10->SetBinError(28,0.007771816);
   VbbHcc_both_Z_mass_stack_10->SetBinError(29,0.007946571);
   VbbHcc_both_Z_mass_stack_10->SetBinError(30,0.007755893);
   VbbHcc_both_Z_mass_stack_10->SetBinError(31,0.007521124);
   VbbHcc_both_Z_mass_stack_10->SetBinError(32,0.007306224);
   VbbHcc_both_Z_mass_stack_10->SetBinError(33,0.007425582);
   VbbHcc_both_Z_mass_stack_10->SetBinError(34,0.0071147);
   VbbHcc_both_Z_mass_stack_10->SetBinError(35,0.007271669);
   VbbHcc_both_Z_mass_stack_10->SetBinError(36,0.007126403);
   VbbHcc_both_Z_mass_stack_10->SetBinError(37,0.007116461);
   VbbHcc_both_Z_mass_stack_10->SetBinError(38,0.00687755);
   VbbHcc_both_Z_mass_stack_10->SetBinError(39,0.006868338);
   VbbHcc_both_Z_mass_stack_10->SetBinError(40,0.006924854);
   VbbHcc_both_Z_mass_stack_10->SetBinError(41,0.04218702);
   VbbHcc_both_Z_mass_stack_10->SetEntries(41891);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Z_mass_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_mass_stack_10->SetLineColor(ci);
   VbbHcc_both_Z_mass_stack_10->GetXaxis()->SetRange(1,400);
   VbbHcc_both_Z_mass_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_mass_stack_10,"");
   
   TH1D *VbbHcc_both_Z_mass_stack_11 = new TH1D("VbbHcc_both_Z_mass_stack_11","",40,0,400);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(5,0.00138712);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(6,0.00439266);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(8,0.007213751);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(9,0.01471684);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(10,0.02518013);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(11,0.02243623);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(12,0.0043532);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(13,0.001430948);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(14,0.002948567);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(15,0.003649727);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(16,0.001741739);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(17,0.001441711);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(18,0.003811375);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(20,0.00345065);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(21,0.001587341);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(22,0.00573574);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(24,0.00111652);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(26,0.001052596);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(28,0.00157443);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(30,0.002442404);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(32,0.001087114);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(40,0.001435202);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(41,0.03245202);
   VbbHcc_both_Z_mass_stack_11->SetBinError(5,0.00138712);
   VbbHcc_both_Z_mass_stack_11->SetBinError(6,0.00253862);
   VbbHcc_both_Z_mass_stack_11->SetBinError(8,0.00328299);
   VbbHcc_both_Z_mass_stack_11->SetBinError(9,0.00496222);
   VbbHcc_both_Z_mass_stack_11->SetBinError(10,0.006356217);
   VbbHcc_both_Z_mass_stack_11->SetBinError(11,0.005729068);
   VbbHcc_both_Z_mass_stack_11->SetBinError(12,0.002559542);
   VbbHcc_both_Z_mass_stack_11->SetBinError(13,0.001430948);
   VbbHcc_both_Z_mass_stack_11->SetBinError(14,0.002092856);
   VbbHcc_both_Z_mass_stack_11->SetBinError(15,0.002584094);
   VbbHcc_both_Z_mass_stack_11->SetBinError(16,0.001741739);
   VbbHcc_both_Z_mass_stack_11->SetBinError(17,0.001441711);
   VbbHcc_both_Z_mass_stack_11->SetBinError(18,0.002745529);
   VbbHcc_both_Z_mass_stack_11->SetBinError(20,0.002445298);
   VbbHcc_both_Z_mass_stack_11->SetBinError(21,0.001587341);
   VbbHcc_both_Z_mass_stack_11->SetBinError(22,0.003372219);
   VbbHcc_both_Z_mass_stack_11->SetBinError(24,0.00111652);
   VbbHcc_both_Z_mass_stack_11->SetBinError(26,0.001052596);
   VbbHcc_both_Z_mass_stack_11->SetBinError(28,0.00157443);
   VbbHcc_both_Z_mass_stack_11->SetBinError(30,0.001731649);
   VbbHcc_both_Z_mass_stack_11->SetBinError(32,0.001087114);
   VbbHcc_both_Z_mass_stack_11->SetBinError(40,0.001435202);
   VbbHcc_both_Z_mass_stack_11->SetBinError(41,0.007463863);
   VbbHcc_both_Z_mass_stack_11->SetEntries(95);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_mass_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_mass_stack_11->SetLineColor(ci);
   VbbHcc_both_Z_mass_stack_11->GetXaxis()->SetRange(1,400);
   VbbHcc_both_Z_mass_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_mass_stack_11,"");
   
   TH1D *VbbHcc_both_Z_mass_stack_12 = new TH1D("VbbHcc_both_Z_mass_stack_12","",40,0,400);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(4,0.0002594099);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(5,0.0003995418);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(6,0.0003754923);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(7,0.0008831553);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(8,0.00371886);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(9,0.006935238);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(10,0.009134278);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(11,0.007798713);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(12,0.004222621);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(13,0.0009962378);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(14,0.0003914085);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(15,0.001164059);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(16,0.0009903722);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(17,0.0007060087);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(18,0.0009320367);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(19,0.000537966);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(20,0.0005157076);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(21,0.001144446);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(22,0.0003323163);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(23,0.0004743272);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(24,0.0003324193);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(25,0.0001936849);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(26,0.0002061824);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(27,0.0006572932);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(28,0.0004466547);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(29,0.0001283047);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(30,0.0004008361);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(32,0.0004570722);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(33,0.0006363202);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(34,0.0004137406);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(35,0.0002180934);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(36,0.0005854888);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(37,0.0006178415);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(38,0.0004572507);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(39,0.0003779534);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(41,0.01363876);
   VbbHcc_both_Z_mass_stack_12->SetBinError(4,0.0002594099);
   VbbHcc_both_Z_mass_stack_12->SetBinError(5,0.0002910555);
   VbbHcc_both_Z_mass_stack_12->SetBinError(6,0.0002706138);
   VbbHcc_both_Z_mass_stack_12->SetBinError(7,0.0004016741);
   VbbHcc_both_Z_mass_stack_12->SetBinError(8,0.0008906973);
   VbbHcc_both_Z_mass_stack_12->SetBinError(9,0.001224726);
   VbbHcc_both_Z_mass_stack_12->SetBinError(10,0.001389641);
   VbbHcc_both_Z_mass_stack_12->SetBinError(11,0.001294357);
   VbbHcc_both_Z_mass_stack_12->SetBinError(12,0.000911778);
   VbbHcc_both_Z_mass_stack_12->SetBinError(13,0.000451532);
   VbbHcc_both_Z_mass_stack_12->SetBinError(14,0.0002462047);
   VbbHcc_both_Z_mass_stack_12->SetBinError(15,0.0004780584);
   VbbHcc_both_Z_mass_stack_12->SetBinError(16,0.0004453748);
   VbbHcc_both_Z_mass_stack_12->SetBinError(17,0.0004083728);
   VbbHcc_both_Z_mass_stack_12->SetBinError(18,0.00042127);
   VbbHcc_both_Z_mass_stack_12->SetBinError(19,0.0003120987);
   VbbHcc_both_Z_mass_stack_12->SetBinError(20,0.0003679893);
   VbbHcc_both_Z_mass_stack_12->SetBinError(21,0.0004752749);
   VbbHcc_both_Z_mass_stack_12->SetBinError(22,0.0002484263);
   VbbHcc_both_Z_mass_stack_12->SetBinError(23,0.0002991017);
   VbbHcc_both_Z_mass_stack_12->SetBinError(24,0.0002401069);
   VbbHcc_both_Z_mass_stack_12->SetBinError(25,0.0001936849);
   VbbHcc_both_Z_mass_stack_12->SetBinError(26,0.0002061824);
   VbbHcc_both_Z_mass_stack_12->SetBinError(27,0.0003802304);
   VbbHcc_both_Z_mass_stack_12->SetBinError(28,0.0003184166);
   VbbHcc_both_Z_mass_stack_12->SetBinError(29,0.0001283047);
   VbbHcc_both_Z_mass_stack_12->SetBinError(30,0.0002919165);
   VbbHcc_both_Z_mass_stack_12->SetBinError(32,0.0003263842);
   VbbHcc_both_Z_mass_stack_12->SetBinError(33,0.000367778);
   VbbHcc_both_Z_mass_stack_12->SetBinError(34,0.0002400684);
   VbbHcc_both_Z_mass_stack_12->SetBinError(35,0.0002180934);
   VbbHcc_both_Z_mass_stack_12->SetBinError(36,0.0003394557);
   VbbHcc_both_Z_mass_stack_12->SetBinError(37,0.0003664835);
   VbbHcc_both_Z_mass_stack_12->SetBinError(38,0.0003244667);
   VbbHcc_both_Z_mass_stack_12->SetBinError(39,0.0002723656);
   VbbHcc_both_Z_mass_stack_12->SetBinError(41,0.001701813);
   VbbHcc_both_Z_mass_stack_12->SetEntries(308);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_mass_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_mass_stack_12->SetLineColor(ci);
   VbbHcc_both_Z_mass_stack_12->GetXaxis()->SetRange(1,400);
   VbbHcc_both_Z_mass_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_mass_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_Z_mass__532 = new TH1D("VbbHcc_both_Z_mass__532","",40,0,400);
   VbbHcc_both_Z_mass__532->SetBinContent(3,8);
   VbbHcc_both_Z_mass__532->SetBinContent(4,288);
   VbbHcc_both_Z_mass__532->SetBinContent(5,1121);
   VbbHcc_both_Z_mass__532->SetBinContent(6,1860);
   VbbHcc_both_Z_mass__532->SetBinContent(7,2320);
   VbbHcc_both_Z_mass__532->SetBinContent(15,1842);
   VbbHcc_both_Z_mass__532->SetBinContent(16,1683);
   VbbHcc_both_Z_mass__532->SetBinContent(17,1598);
   VbbHcc_both_Z_mass__532->SetBinContent(18,1448);
   VbbHcc_both_Z_mass__532->SetBinContent(19,1326);
   VbbHcc_both_Z_mass__532->SetBinContent(20,1303);
   VbbHcc_both_Z_mass__532->SetBinContent(21,1212);
   VbbHcc_both_Z_mass__532->SetBinContent(22,1116);
   VbbHcc_both_Z_mass__532->SetBinContent(23,1007);
   VbbHcc_both_Z_mass__532->SetBinContent(24,1027);
   VbbHcc_both_Z_mass__532->SetBinContent(25,925);
   VbbHcc_both_Z_mass__532->SetBinContent(26,915);
   VbbHcc_both_Z_mass__532->SetBinContent(27,855);
   VbbHcc_both_Z_mass__532->SetBinContent(28,830);
   VbbHcc_both_Z_mass__532->SetBinContent(29,824);
   VbbHcc_both_Z_mass__532->SetBinContent(30,736);
   VbbHcc_both_Z_mass__532->SetBinContent(31,717);
   VbbHcc_both_Z_mass__532->SetBinContent(32,696);
   VbbHcc_both_Z_mass__532->SetBinContent(33,698);
   VbbHcc_both_Z_mass__532->SetBinContent(34,631);
   VbbHcc_both_Z_mass__532->SetBinContent(35,628);
   VbbHcc_both_Z_mass__532->SetBinContent(36,575);
   VbbHcc_both_Z_mass__532->SetBinContent(37,628);
   VbbHcc_both_Z_mass__532->SetBinContent(38,560);
   VbbHcc_both_Z_mass__532->SetBinContent(39,533);
   VbbHcc_both_Z_mass__532->SetBinContent(40,536);
   VbbHcc_both_Z_mass__532->SetBinContent(41,20857);
   VbbHcc_both_Z_mass__532->SetEntries(67075);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_mass__532->SetLineColor(ci);
   VbbHcc_both_Z_mass__532->SetLineWidth(2);
   VbbHcc_both_Z_mass__532->SetMarkerStyle(20);
   VbbHcc_both_Z_mass__532->SetMarkerSize(1.2);
   VbbHcc_both_Z_mass__532->GetXaxis()->SetRange(1,400);
   VbbHcc_both_Z_mass__532->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass__532->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass__532->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass__532->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass__532->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass__532->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass__532->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass__532->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass__532->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass__532->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass__532->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass__532->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass__532->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass__532->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Z_mass_fx1387[40] = {
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
   Double_t Graph_from_VbbHcc_both_Z_mass_fy1387[40] = {
   0,
   0.02909884,
   7.96454,
   494.8146,
   2241.195,
   26261.4,
   8185.193,
   7809.619,
   6934.527,
   6549.933,
   5216.773,
   4694.41,
   5641.081,
   4312.253,
   5877.613,
   3374.706,
   3834.107,
   4189.477,
   4386.198,
   3767.826,
   4774.402,
   2433.582,
   3708.219,
   2674.41,
   2483.102,
   1716.992,
   3463.521,
   2250.852,
   2592.653,
   1813.074,
   1920.185,
   1756.743,
   1331.16,
   1658.142,
   1882.88,
   2304.67,
   1421.886,
   1951.298,
   2338.954,
   1145.807};
   Double_t Graph_from_VbbHcc_both_Z_mass_fex1387[40] = {
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
   Double_t Graph_from_VbbHcc_both_Z_mass_fey1387[40] = {
   0,
   0.02909884,
   5.913861,
   92.92528,
   507.6598,
   20610.09,
   1085.884,
   1069.371,
   982.9021,
   924.9152,
   791.9894,
   736.2833,
   869.325,
   703.3037,
   936.1508,
   587.2636,
   657.6977,
   1339.961,
   785.7104,
   725.2166,
   1117.889,
   439.7723,
   765.9636,
   586.9894,
   553.3041,
   439.5267,
   770.1871,
   575.8226,
   642.8036,
   500.3683,
   511.8123,
   480.4158,
   309.4461,
   427.5241,
   424.4713,
   568.4675,
   408.8147,
   488.3472,
   573.1554,
   321.038};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_VbbHcc_both_Z_mass_fx1387,Graph_from_VbbHcc_both_Z_mass_fy1387,Graph_from_VbbHcc_both_Z_mass_fex1387,Graph_from_VbbHcc_both_Z_mass_fey1387);
   gre->SetName("Graph_from_VbbHcc_both_Z_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Z_mass1387 = new TH1F("Graph_Graph_from_VbbHcc_both_Z_mass1387","",100,0,440);
   Graph_Graph_from_VbbHcc_both_Z_mass1387->SetMinimum(0);
   Graph_Graph_from_VbbHcc_both_Z_mass1387->SetMaximum(51558.64);
   Graph_Graph_from_VbbHcc_both_Z_mass1387->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_Z_mass1387->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Z_mass1387->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Z_mass1387->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_mass1387->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_mass1387->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_mass1387->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_mass1387->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_mass1387->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_mass1387->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_mass1387->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_Z_mass1387->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_mass1387->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_mass1387->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_mass1387->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_mass1387->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Z_mass1387);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_mass","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Z_mass_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_mass_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_mass_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_mass_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_mass_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_mass_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_mass_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_mass_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_mass_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_mass_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_mass_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_mass_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_Z_mass","MC unc. (stat.)","fl");

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
   Z_mass_both_17->cd();
  
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
   
   TH1D *data_mc_ratio__533 = new TH1D("data_mc_ratio__533","",40,0,400);
   data_mc_ratio__533->SetBinContent(3,1.004452);
   data_mc_ratio__533->SetBinContent(4,0.5820362);
   data_mc_ratio__533->SetBinContent(5,0.5001797);
   data_mc_ratio__533->SetBinContent(6,0.07082637);
   data_mc_ratio__533->SetBinContent(7,0.2834387);
   data_mc_ratio__533->SetBinContent(8,0.3221668);
   data_mc_ratio__533->SetBinContent(9,0.3426333);
   data_mc_ratio__533->SetBinContent(10,0.3627518);
   data_mc_ratio__533->SetBinContent(11,0.4364767);
   data_mc_ratio__533->SetBinContent(12,0.4748201);
   data_mc_ratio__533->SetBinContent(13,0.3559602);
   data_mc_ratio__533->SetBinContent(14,0.4524317);
   data_mc_ratio__533->SetBinContent(15,0.3133926);
   data_mc_ratio__533->SetBinContent(16,0.4987101);
   data_mc_ratio__533->SetBinContent(17,0.4167855);
   data_mc_ratio__533->SetBinContent(18,0.3456279);
   data_mc_ratio__533->SetBinContent(19,0.3023119);
   data_mc_ratio__533->SetBinContent(20,0.3458227);
   data_mc_ratio__533->SetBinContent(21,0.2538538);
   data_mc_ratio__533->SetBinContent(22,0.4585832);
   data_mc_ratio__533->SetBinContent(23,0.2715589);
   data_mc_ratio__533->SetBinContent(24,0.3840099);
   data_mc_ratio__533->SetBinContent(25,0.3725179);
   data_mc_ratio__533->SetBinContent(26,0.5329087);
   data_mc_ratio__533->SetBinContent(27,0.2468586);
   data_mc_ratio__533->SetBinContent(28,0.3687493);
   data_mc_ratio__533->SetBinContent(29,0.3178211);
   data_mc_ratio__533->SetBinContent(30,0.4059403);
   data_mc_ratio__533->SetBinContent(31,0.3734015);
   data_mc_ratio__533->SetBinContent(32,0.3961878);
   data_mc_ratio__533->SetBinContent(33,0.5243549);
   data_mc_ratio__533->SetBinContent(34,0.3805464);
   data_mc_ratio__533->SetBinContent(35,0.3335317);
   data_mc_ratio__533->SetBinContent(36,0.2494935);
   data_mc_ratio__533->SetBinContent(37,0.441667);
   data_mc_ratio__533->SetBinContent(38,0.2869884);
   data_mc_ratio__533->SetBinContent(39,0.2278796);
   data_mc_ratio__533->SetBinContent(40,0.4677925);
   data_mc_ratio__533->SetBinContent(41,0.2899739);
   data_mc_ratio__533->SetBinError(3,0.3551275);
   data_mc_ratio__533->SetBinError(4,0.03429681);
   data_mc_ratio__533->SetBinError(5,0.01493906);
   data_mc_ratio__533->SetBinError(6,0.001642247);
   data_mc_ratio__533->SetBinError(7,0.005884575);
   data_mc_ratio__533->SetBinError(8,0.006422816);
   data_mc_ratio__533->SetBinError(9,0.007029208);
   data_mc_ratio__533->SetBinError(10,0.007441944);
   data_mc_ratio__533->SetBinError(11,0.009147019);
   data_mc_ratio__533->SetBinError(12,0.01005713);
   data_mc_ratio__533->SetBinError(13,0.00794364);
   data_mc_ratio__533->SetBinError(14,0.01024293);
   data_mc_ratio__533->SetBinError(15,0.007302034);
   data_mc_ratio__533->SetBinError(16,0.01215643);
   data_mc_ratio__533->SetBinError(17,0.01042616);
   data_mc_ratio__533->SetBinError(18,0.009082899);
   data_mc_ratio__533->SetBinError(19,0.008302015);
   data_mc_ratio__533->SetBinError(20,0.009580349);
   data_mc_ratio__533->SetBinError(21,0.00729176);
   data_mc_ratio__533->SetBinError(22,0.01372733);
   data_mc_ratio__533->SetBinError(23,0.008557549);
   data_mc_ratio__533->SetBinError(24,0.01198277);
   data_mc_ratio__533->SetBinError(25,0.01224831);
   data_mc_ratio__533->SetBinError(26,0.01761742);
   data_mc_ratio__533->SetBinError(27,0.008442387);
   data_mc_ratio__533->SetBinError(28,0.01279947);
   data_mc_ratio__533->SetBinError(29,0.01107182);
   data_mc_ratio__533->SetBinError(30,0.01496316);
   data_mc_ratio__533->SetBinError(31,0.01394493);
   data_mc_ratio__533->SetBinError(32,0.01501746);
   data_mc_ratio__533->SetBinError(33,0.01984712);
   data_mc_ratio__533->SetBinError(34,0.01514931);
   data_mc_ratio__533->SetBinError(35,0.01330936);
   data_mc_ratio__533->SetBinError(36,0.0104046);
   data_mc_ratio__533->SetBinError(37,0.01762443);
   data_mc_ratio__533->SetBinError(38,0.01212748);
   data_mc_ratio__533->SetBinError(39,0.009870561);
   data_mc_ratio__533->SetBinError(40,0.02020556);
   data_mc_ratio__533->SetBinError(41,0.06733636);
   data_mc_ratio__533->SetMinimum(0.4);
   data_mc_ratio__533->SetMaximum(1.6);
   data_mc_ratio__533->SetEntries(227.1641);
   data_mc_ratio__533->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__533->SetLineColor(ci);
   data_mc_ratio__533->SetLineWidth(2);
   data_mc_ratio__533->SetMarkerStyle(20);
   data_mc_ratio__533->SetMarkerSize(1.2);
   data_mc_ratio__533->GetXaxis()->SetTitle("M_{Z} [GeV]");
   data_mc_ratio__533->GetXaxis()->SetRange(1,30);
   data_mc_ratio__533->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__533->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__533->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__533->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__533->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__533->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__533->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__533->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__533->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__533->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__533->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__533->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__533->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__533->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__533->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__533->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__533->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1388[40] = {
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
   Double_t Graph_from_mc_statistical_error_fy1388[40] = {
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
   Double_t Graph_from_mc_statistical_error_fex1388[40] = {
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
   Double_t Graph_from_mc_statistical_error_fey1388[40] = {
   0,
   1,
   0.7425238,
   0.1877982,
   0.226513,
   0.7848052,
   0.1326644,
   0.13693,
   0.1417403,
   0.1412099,
   0.151816,
   0.1568426,
   0.1541061,
   0.1630943,
   0.159274,
   0.1740192,
   0.1715387,
   0.3198396,
   0.1791325,
   0.1924761,
   0.2341422,
   0.1807099,
   0.2065584,
   0.2194837,
   0.2228278,
   0.2559865,
   0.2223712,
   0.2558243,
   0.2479327,
   0.2759778,
   0.2665432,
   0.2734696,
   0.2324635,
   0.2578332,
   0.2254373,
   0.246659,
   0.2875158,
   0.2502678,
   0.2450477,
   0.280185};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1388,Graph_from_mc_statistical_error_fy1388,Graph_from_mc_statistical_error_fex1388,Graph_from_mc_statistical_error_fey1388);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1388 = new TH1F("Graph_Graph_from_mc_statistical_error1388","",100,0,440);
   Graph_Graph_from_mc_statistical_error1388->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1388->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1388->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1388->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1388->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1388->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1388->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1388->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1388->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1388->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1388->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1388->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1388->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1388->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1388->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1388->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1388->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1388->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1388);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   Z_mass_both_17->cd();
   Z_mass_both_17->Modified();
   Z_mass_both_17->cd();
   Z_mass_both_17->SetSelected(Z_mass_both_17);
}

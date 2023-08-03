void H_mass_tags_16()
{
//=========Macro generated from canvas: H_mass_tags_16/H_mass_tags_16
//=========  (Thu Aug  3 10:20:52 2023) by ROOT version 6.14/09
   TCanvas *H_mass_tags_16 = new TCanvas("H_mass_tags_16", "H_mass_tags_16",0,0,600,600);
   H_mass_tags_16->SetHighLightColor(2);
   H_mass_tags_16->Range(0,0,1,1);
   H_mass_tags_16->SetFillColor(0);
   H_mass_tags_16->SetFillStyle(4000);
   H_mass_tags_16->SetBorderMode(0);
   H_mass_tags_16->SetBorderSize(2);
   H_mass_tags_16->SetFrameFillStyle(1000);
   H_mass_tags_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-15.76299,315.7258,15757.22);
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
   st->SetMaximum(13504.69);
   
   TH1F *st_stack_5 = new TH1F("st_stack_5","",40,0,400);
   st_stack_5->SetMinimum(0.01);
   st_stack_5->SetMaximum(14179.92);
   st_stack_5->SetDirectory(0);
   st_stack_5->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_5->SetLineColor(ci);
   st_stack_5->GetXaxis()->SetRange(1,30);
   st_stack_5->GetXaxis()->SetLabelFont(42);
   st_stack_5->GetXaxis()->SetLabelSize(0.035);
   st_stack_5->GetXaxis()->SetTitleSize(0.035);
   st_stack_5->GetXaxis()->SetTitleFont(42);
   st_stack_5->GetYaxis()->SetTitle("Events/10.0");
   st_stack_5->GetYaxis()->SetLabelFont(42);
   st_stack_5->GetYaxis()->SetLabelSize(0.05);
   st_stack_5->GetYaxis()->SetTitleSize(0.057);
   st_stack_5->GetYaxis()->SetTitleOffset(1.2);
   st_stack_5->GetYaxis()->SetTitleFont(42);
   st_stack_5->GetZaxis()->SetLabelFont(42);
   st_stack_5->GetZaxis()->SetLabelSize(0.035);
   st_stack_5->GetZaxis()->SetTitleSize(0.035);
   st_stack_5->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_5);
   
   
   TH1D *VbbHcc_tags_H_mass_stack_1 = new TH1D("VbbHcc_tags_H_mass_stack_1","",40,0,400);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(3,302.7584);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(4,4085.244);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(5,3208.602);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(6,5829.44);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(7,4455.032);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(8,4609.417);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(9,4178.416);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(10,4286.073);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(11,1874.467);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(12,2588.539);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(13,2478.652);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(14,4632.804);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(15,4884.389);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(16,4905.156);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(17,3373.538);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(18,4513.659);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(19,2445.118);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(20,2688.263);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(21,1999.683);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(22,2571.531);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(23,2512.3);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(24,2722.129);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(25,3448.936);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(26,3010.336);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(27,2568.751);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(28,3355.996);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(29,2207.677);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(30,2143.096);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(31,1391.965);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(32,2594.1);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(33,1220.548);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(34,1788.526);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(35,2733.004);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(36,1509.682);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(37,3316.463);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(38,3247.663);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(39,1332.729);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(40,2460.884);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(41,59400.3);
   VbbHcc_tags_H_mass_stack_1->SetBinError(3,269.8393);
   VbbHcc_tags_H_mass_stack_1->SetBinError(4,2061.565);
   VbbHcc_tags_H_mass_stack_1->SetBinError(5,815.2332);
   VbbHcc_tags_H_mass_stack_1->SetBinError(6,1118.857);
   VbbHcc_tags_H_mass_stack_1->SetBinError(7,868.7904);
   VbbHcc_tags_H_mass_stack_1->SetBinError(8,907.0848);
   VbbHcc_tags_H_mass_stack_1->SetBinError(9,864.4993);
   VbbHcc_tags_H_mass_stack_1->SetBinError(10,865.8864);
   VbbHcc_tags_H_mass_stack_1->SetBinError(11,406.7953);
   VbbHcc_tags_H_mass_stack_1->SetBinError(12,559.6207);
   VbbHcc_tags_H_mass_stack_1->SetBinError(13,557.8069);
   VbbHcc_tags_H_mass_stack_1->SetBinError(14,1614.674);
   VbbHcc_tags_H_mass_stack_1->SetBinError(15,1636.502);
   VbbHcc_tags_H_mass_stack_1->SetBinError(16,1637.128);
   VbbHcc_tags_H_mass_stack_1->SetBinError(17,1521.466);
   VbbHcc_tags_H_mass_stack_1->SetBinError(18,1614.233);
   VbbHcc_tags_H_mass_stack_1->SetBinError(19,667.9136);
   VbbHcc_tags_H_mass_stack_1->SetBinError(20,671.9759);
   VbbHcc_tags_H_mass_stack_1->SetBinError(21,552.0328);
   VbbHcc_tags_H_mass_stack_1->SetBinError(22,1449.314);
   VbbHcc_tags_H_mass_stack_1->SetBinError(23,669.621);
   VbbHcc_tags_H_mass_stack_1->SetBinError(24,1473.028);
   VbbHcc_tags_H_mass_stack_1->SetBinError(25,857.6083);
   VbbHcc_tags_H_mass_stack_1->SetBinError(26,769.643);
   VbbHcc_tags_H_mass_stack_1->SetBinError(27,718.9359);
   VbbHcc_tags_H_mass_stack_1->SetBinError(28,1521.72);
   VbbHcc_tags_H_mass_stack_1->SetBinError(29,666.1471);
   VbbHcc_tags_H_mass_stack_1->SetBinError(30,612.5177);
   VbbHcc_tags_H_mass_stack_1->SetBinError(31,398.9023);
   VbbHcc_tags_H_mass_stack_1->SetBinError(32,719.8465);
   VbbHcc_tags_H_mass_stack_1->SetBinError(33,472.307);
   VbbHcc_tags_H_mass_stack_1->SetBinError(34,549.0137);
   VbbHcc_tags_H_mass_stack_1->SetBinError(35,1495.408);
   VbbHcc_tags_H_mass_stack_1->SetBinError(36,477.8423);
   VbbHcc_tags_H_mass_stack_1->SetBinError(37,1543.771);
   VbbHcc_tags_H_mass_stack_1->SetBinError(38,1543.268);
   VbbHcc_tags_H_mass_stack_1->SetBinError(39,474.1502);
   VbbHcc_tags_H_mass_stack_1->SetBinError(40,669.7017);
   VbbHcc_tags_H_mass_stack_1->SetBinError(41,3670.466);
   VbbHcc_tags_H_mass_stack_1->SetEntries(9717);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_H_mass_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_mass_stack_1->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_mass_stack_1,"");
   
   TH1D *VbbHcc_tags_H_mass_stack_2 = new TH1D("VbbHcc_tags_H_mass_stack_2","",40,0,400);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(3,0.3341053);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(4,3.218165);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(5,7.619838);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(6,8.641797);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(7,13.69729);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(8,19.59202);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(9,21.25958);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(10,19.38488);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(11,19.56575);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(12,20.79523);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(13,20.95171);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(14,14.92346);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(15,18.56382);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(16,15.69508);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(17,16.10506);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(18,13.30685);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(19,11.65883);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(20,14.16222);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(21,13.82228);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(22,11.65126);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(23,13.67114);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(24,10.33184);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(25,10.83394);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(26,9.664544);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(27,10.18416);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(28,11.13269);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(29,8.555891);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(30,8.294781);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(31,9.630349);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(32,8.547116);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(33,9.135919);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(34,8.099619);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(35,6.522827);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(36,7.297267);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(37,5.560827);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(38,6.187233);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(39,6.581343);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(40,5.30097);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(41,297.8793);
   VbbHcc_tags_H_mass_stack_2->SetBinError(3,0.1266113);
   VbbHcc_tags_H_mass_stack_2->SetBinError(4,0.6161098);
   VbbHcc_tags_H_mass_stack_2->SetBinError(5,1.030984);
   VbbHcc_tags_H_mass_stack_2->SetBinError(6,0.9926837);
   VbbHcc_tags_H_mass_stack_2->SetBinError(7,1.385569);
   VbbHcc_tags_H_mass_stack_2->SetBinError(8,1.738337);
   VbbHcc_tags_H_mass_stack_2->SetBinError(9,1.808189);
   VbbHcc_tags_H_mass_stack_2->SetBinError(10,1.718091);
   VbbHcc_tags_H_mass_stack_2->SetBinError(11,1.738702);
   VbbHcc_tags_H_mass_stack_2->SetBinError(12,1.788033);
   VbbHcc_tags_H_mass_stack_2->SetBinError(13,1.804247);
   VbbHcc_tags_H_mass_stack_2->SetBinError(14,1.408269);
   VbbHcc_tags_H_mass_stack_2->SetBinError(15,1.776653);
   VbbHcc_tags_H_mass_stack_2->SetBinError(16,1.520407);
   VbbHcc_tags_H_mass_stack_2->SetBinError(17,1.547519);
   VbbHcc_tags_H_mass_stack_2->SetBinError(18,1.4231);
   VbbHcc_tags_H_mass_stack_2->SetBinError(19,1.288759);
   VbbHcc_tags_H_mass_stack_2->SetBinError(20,1.437095);
   VbbHcc_tags_H_mass_stack_2->SetBinError(21,1.511565);
   VbbHcc_tags_H_mass_stack_2->SetBinError(22,1.375667);
   VbbHcc_tags_H_mass_stack_2->SetBinError(23,1.489036);
   VbbHcc_tags_H_mass_stack_2->SetBinError(24,1.286845);
   VbbHcc_tags_H_mass_stack_2->SetBinError(25,1.293399);
   VbbHcc_tags_H_mass_stack_2->SetBinError(26,1.125995);
   VbbHcc_tags_H_mass_stack_2->SetBinError(27,1.262252);
   VbbHcc_tags_H_mass_stack_2->SetBinError(28,1.34623);
   VbbHcc_tags_H_mass_stack_2->SetBinError(29,1.181661);
   VbbHcc_tags_H_mass_stack_2->SetBinError(30,1.10014);
   VbbHcc_tags_H_mass_stack_2->SetBinError(31,1.275762);
   VbbHcc_tags_H_mass_stack_2->SetBinError(32,1.182249);
   VbbHcc_tags_H_mass_stack_2->SetBinError(33,1.169136);
   VbbHcc_tags_H_mass_stack_2->SetBinError(34,1.121832);
   VbbHcc_tags_H_mass_stack_2->SetBinError(35,1.059223);
   VbbHcc_tags_H_mass_stack_2->SetBinError(36,0.9932161);
   VbbHcc_tags_H_mass_stack_2->SetBinError(37,0.8199159);
   VbbHcc_tags_H_mass_stack_2->SetBinError(38,0.9967281);
   VbbHcc_tags_H_mass_stack_2->SetBinError(39,1.084855);
   VbbHcc_tags_H_mass_stack_2->SetBinError(40,0.8427965);
   VbbHcc_tags_H_mass_stack_2->SetBinError(41,6.894419);
   VbbHcc_tags_H_mass_stack_2->SetEntries(9491);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_H_mass_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_mass_stack_2->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_mass_stack_2,"");
   
   TH1D *VbbHcc_tags_H_mass_stack_3 = new TH1D("VbbHcc_tags_H_mass_stack_3","",40,0,400);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(3,6.56498);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(4,64.69687);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(5,148.4363);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(6,206.7042);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(7,274.5237);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(8,365.411);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(9,425.0501);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(10,407.4008);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(11,402.5629);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(12,407.0628);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(13,385.228);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(14,368.488);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(15,350.5538);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(16,324.3);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(17,298.3881);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(18,280.3201);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(19,260.2379);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(20,248.8116);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(21,237.1555);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(22,227.1164);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(23,219.3982);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(24,209.3159);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(25,205.6697);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(26,199.6864);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(27,186.4445);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(28,189.1091);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(29,181.5572);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(30,172.1653);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(31,164.014);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(32,164.6978);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(33,161.0132);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(34,153.6747);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(35,147.5769);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(36,150.8948);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(37,149.0456);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(38,142.0948);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(39,133.7682);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(40,132.8424);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(41,5002.989);
   VbbHcc_tags_H_mass_stack_3->SetBinError(3,0.6318686);
   VbbHcc_tags_H_mass_stack_3->SetBinError(4,1.996582);
   VbbHcc_tags_H_mass_stack_3->SetBinError(5,3.031475);
   VbbHcc_tags_H_mass_stack_3->SetBinError(6,3.587156);
   VbbHcc_tags_H_mass_stack_3->SetBinError(7,4.133884);
   VbbHcc_tags_H_mass_stack_3->SetBinError(8,4.79493);
   VbbHcc_tags_H_mass_stack_3->SetBinError(9,5.175057);
   VbbHcc_tags_H_mass_stack_3->SetBinError(10,5.073457);
   VbbHcc_tags_H_mass_stack_3->SetBinError(11,5.039601);
   VbbHcc_tags_H_mass_stack_3->SetBinError(12,5.077864);
   VbbHcc_tags_H_mass_stack_3->SetBinError(13,4.937143);
   VbbHcc_tags_H_mass_stack_3->SetBinError(14,4.82557);
   VbbHcc_tags_H_mass_stack_3->SetBinError(15,4.702828);
   VbbHcc_tags_H_mass_stack_3->SetBinError(16,4.523095);
   VbbHcc_tags_H_mass_stack_3->SetBinError(17,4.321383);
   VbbHcc_tags_H_mass_stack_3->SetBinError(18,4.196007);
   VbbHcc_tags_H_mass_stack_3->SetBinError(19,4.037261);
   VbbHcc_tags_H_mass_stack_3->SetBinError(20,3.946637);
   VbbHcc_tags_H_mass_stack_3->SetBinError(21,3.860569);
   VbbHcc_tags_H_mass_stack_3->SetBinError(22,3.778497);
   VbbHcc_tags_H_mass_stack_3->SetBinError(23,3.707146);
   VbbHcc_tags_H_mass_stack_3->SetBinError(24,3.624973);
   VbbHcc_tags_H_mass_stack_3->SetBinError(25,3.595407);
   VbbHcc_tags_H_mass_stack_3->SetBinError(26,3.542538);
   VbbHcc_tags_H_mass_stack_3->SetBinError(27,3.416602);
   VbbHcc_tags_H_mass_stack_3->SetBinError(28,3.441014);
   VbbHcc_tags_H_mass_stack_3->SetBinError(29,3.383766);
   VbbHcc_tags_H_mass_stack_3->SetBinError(30,3.292137);
   VbbHcc_tags_H_mass_stack_3->SetBinError(31,3.219214);
   VbbHcc_tags_H_mass_stack_3->SetBinError(32,3.221206);
   VbbHcc_tags_H_mass_stack_3->SetBinError(33,3.181339);
   VbbHcc_tags_H_mass_stack_3->SetBinError(34,3.113296);
   VbbHcc_tags_H_mass_stack_3->SetBinError(35,3.047356);
   VbbHcc_tags_H_mass_stack_3->SetBinError(36,3.075291);
   VbbHcc_tags_H_mass_stack_3->SetBinError(37,3.070173);
   VbbHcc_tags_H_mass_stack_3->SetBinError(38,2.99633);
   VbbHcc_tags_H_mass_stack_3->SetBinError(39,2.904887);
   VbbHcc_tags_H_mass_stack_3->SetBinError(40,2.89515);
   VbbHcc_tags_H_mass_stack_3->SetBinError(41,17.74798);
   VbbHcc_tags_H_mass_stack_3->SetEntries(225965);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_H_mass_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass_stack_3->SetLineColor(ci);
   VbbHcc_tags_H_mass_stack_3->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_mass_stack_3,"");
   
   TH1D *VbbHcc_tags_H_mass_stack_4 = new TH1D("VbbHcc_tags_H_mass_stack_4","",40,0,400);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(3,3.105908);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(4,11.80874);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(5,17.78457);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(6,29.00821);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(7,41.43752);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(8,59.80769);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(9,80.4089);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(10,92.08735);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(11,57.14636);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(12,46.54431);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(13,39.17383);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(14,39.35885);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(15,34.96935);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(16,48.37859);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(17,37.29651);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(18,26.8067);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(19,32.67955);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(20,28.5258);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(21,26.49234);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(22,28.86396);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(23,30.89441);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(24,26.82623);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(25,27.78553);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(26,24.87772);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(27,29.99971);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(28,20.80043);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(29,30.83268);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(30,27.80737);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(31,26.31661);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(32,23.92174);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(33,22.39131);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(34,22.66902);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(35,25.27932);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(36,17.16261);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(37,23.49206);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(38,15.44288);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(39,23.32554);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(40,19.56493);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(41,790.7739);
   VbbHcc_tags_H_mass_stack_4->SetBinError(3,2.698001);
   VbbHcc_tags_H_mass_stack_4->SetBinError(4,3.971935);
   VbbHcc_tags_H_mass_stack_4->SetBinError(5,1.886665);
   VbbHcc_tags_H_mass_stack_4->SetBinError(6,5.092296);
   VbbHcc_tags_H_mass_stack_4->SetBinError(7,4.639648);
   VbbHcc_tags_H_mass_stack_4->SetBinError(8,5.569368);
   VbbHcc_tags_H_mass_stack_4->SetBinError(9,6.890197);
   VbbHcc_tags_H_mass_stack_4->SetBinError(10,8.744536);
   VbbHcc_tags_H_mass_stack_4->SetBinError(11,6.575795);
   VbbHcc_tags_H_mass_stack_4->SetBinError(12,6.941904);
   VbbHcc_tags_H_mass_stack_4->SetBinError(13,5.253053);
   VbbHcc_tags_H_mass_stack_4->SetBinError(14,5.242973);
   VbbHcc_tags_H_mass_stack_4->SetBinError(15,5.140129);
   VbbHcc_tags_H_mass_stack_4->SetBinError(16,8.29681);
   VbbHcc_tags_H_mass_stack_4->SetBinError(17,5.774687);
   VbbHcc_tags_H_mass_stack_4->SetBinError(18,4.239204);
   VbbHcc_tags_H_mass_stack_4->SetBinError(19,5.705636);
   VbbHcc_tags_H_mass_stack_4->SetBinError(20,5.025409);
   VbbHcc_tags_H_mass_stack_4->SetBinError(21,2.246493);
   VbbHcc_tags_H_mass_stack_4->SetBinError(22,5.03402);
   VbbHcc_tags_H_mass_stack_4->SetBinError(23,5.071321);
   VbbHcc_tags_H_mass_stack_4->SetBinError(24,4.272057);
   VbbHcc_tags_H_mass_stack_4->SetBinError(25,4.280383);
   VbbHcc_tags_H_mass_stack_4->SetBinError(26,3.35843);
   VbbHcc_tags_H_mass_stack_4->SetBinError(27,5.08826);
   VbbHcc_tags_H_mass_stack_4->SetBinError(28,1.985578);
   VbbHcc_tags_H_mass_stack_4->SetBinError(29,5.723875);
   VbbHcc_tags_H_mass_stack_4->SetBinError(30,5.043483);
   VbbHcc_tags_H_mass_stack_4->SetBinError(31,5.598329);
   VbbHcc_tags_H_mass_stack_4->SetBinError(32,4.933202);
   VbbHcc_tags_H_mass_stack_4->SetBinError(33,4.15145);
   VbbHcc_tags_H_mass_stack_4->SetBinError(34,3.336329);
   VbbHcc_tags_H_mass_stack_4->SetBinError(35,4.955958);
   VbbHcc_tags_H_mass_stack_4->SetBinError(36,3.102177);
   VbbHcc_tags_H_mass_stack_4->SetBinError(37,4.917654);
   VbbHcc_tags_H_mass_stack_4->SetBinError(38,1.708559);
   VbbHcc_tags_H_mass_stack_4->SetBinError(39,4.941052);
   VbbHcc_tags_H_mass_stack_4->SetBinError(40,4.113614);
   VbbHcc_tags_H_mass_stack_4->SetBinError(41,18.05995);
   VbbHcc_tags_H_mass_stack_4->SetEntries(14953);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_H_mass_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass_stack_4->SetLineColor(ci);
   VbbHcc_tags_H_mass_stack_4->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_mass_stack_4,"");
   
   TH1D *VbbHcc_tags_H_mass_stack_5 = new TH1D("VbbHcc_tags_H_mass_stack_5","",40,0,400);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(4,6.587976);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(5,1.824514);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(6,1.811877);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(7,3.011975);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(8,2.172035);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(9,3.589189);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(10,4.584033);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(11,3.116064);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(12,5.224824);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(13,4.616333);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(14,2.097273);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(15,1.503985);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(16,4.475829);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(17,1.666616);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(18,2.008992);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(19,4.587736);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(20,1.932559);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(21,2.745256);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(22,3.53404);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(23,3.10132);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(24,4.520418);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(25,4.866226);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(26,2.194366);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(27,2.56812);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(28,1.466438);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(29,1.278465);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(30,1.042889);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(31,1.820912);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(32,2.054551);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(33,1.587261);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(34,0.9986541);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(35,0.3623822);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(36,1.302569);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(37,2.188324);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(38,1.729857);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(39,2.221888);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(40,0.9428655);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(41,92.37738);
   VbbHcc_tags_H_mass_stack_5->SetBinError(4,6.07128);
   VbbHcc_tags_H_mass_stack_5->SetBinError(5,0.6603215);
   VbbHcc_tags_H_mass_stack_5->SetBinError(6,0.5551504);
   VbbHcc_tags_H_mass_stack_5->SetBinError(7,0.7071788);
   VbbHcc_tags_H_mass_stack_5->SetBinError(8,0.4748792);
   VbbHcc_tags_H_mass_stack_5->SetBinError(9,0.6168883);
   VbbHcc_tags_H_mass_stack_5->SetBinError(10,1.56619);
   VbbHcc_tags_H_mass_stack_5->SetBinError(11,1.151815);
   VbbHcc_tags_H_mass_stack_5->SetBinError(12,1.859935);
   VbbHcc_tags_H_mass_stack_5->SetBinError(13,1.570596);
   VbbHcc_tags_H_mass_stack_5->SetBinError(14,0.5210447);
   VbbHcc_tags_H_mass_stack_5->SetBinError(15,0.3945967);
   VbbHcc_tags_H_mass_stack_5->SetBinError(16,1.56396);
   VbbHcc_tags_H_mass_stack_5->SetBinError(17,0.3975201);
   VbbHcc_tags_H_mass_stack_5->SetBinError(18,0.4642651);
   VbbHcc_tags_H_mass_stack_5->SetBinError(19,1.817419);
   VbbHcc_tags_H_mass_stack_5->SetBinError(20,0.4341541);
   VbbHcc_tags_H_mass_stack_5->SetBinError(21,1.101987);
   VbbHcc_tags_H_mass_stack_5->SetBinError(22,1.503955);
   VbbHcc_tags_H_mass_stack_5->SetBinError(23,1.157101);
   VbbHcc_tags_H_mass_stack_5->SetBinError(24,1.548952);
   VbbHcc_tags_H_mass_stack_5->SetBinError(25,1.838624);
   VbbHcc_tags_H_mass_stack_5->SetBinError(26,1.073877);
   VbbHcc_tags_H_mass_stack_5->SetBinError(27,1.101189);
   VbbHcc_tags_H_mass_stack_5->SetBinError(28,0.4572612);
   VbbHcc_tags_H_mass_stack_5->SetBinError(29,0.4424424);
   VbbHcc_tags_H_mass_stack_5->SetBinError(30,0.3057214);
   VbbHcc_tags_H_mass_stack_5->SetBinError(31,0.4414109);
   VbbHcc_tags_H_mass_stack_5->SetBinError(32,0.5663003);
   VbbHcc_tags_H_mass_stack_5->SetBinError(33,0.5188737);
   VbbHcc_tags_H_mass_stack_5->SetBinError(34,0.3178712);
   VbbHcc_tags_H_mass_stack_5->SetBinError(35,0.1889082);
   VbbHcc_tags_H_mass_stack_5->SetBinError(36,0.3509902);
   VbbHcc_tags_H_mass_stack_5->SetBinError(37,1.084892);
   VbbHcc_tags_H_mass_stack_5->SetBinError(38,0.5009609);
   VbbHcc_tags_H_mass_stack_5->SetBinError(39,1.115135);
   VbbHcc_tags_H_mass_stack_5->SetBinError(40,0.3897691);
   VbbHcc_tags_H_mass_stack_5->SetBinError(41,7.826775);
   VbbHcc_tags_H_mass_stack_5->SetEntries(3420);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_H_mass_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass_stack_5->SetLineColor(ci);
   VbbHcc_tags_H_mass_stack_5->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_mass_stack_5,"");
   
   TH1D *VbbHcc_tags_H_mass_stack_6 = new TH1D("VbbHcc_tags_H_mass_stack_6","",40,0,400);
   VbbHcc_tags_H_mass_stack_6->SetBinContent(15,0.1343693);
   VbbHcc_tags_H_mass_stack_6->SetBinContent(16,0.1343693);
   VbbHcc_tags_H_mass_stack_6->SetBinContent(17,0.1343693);
   VbbHcc_tags_H_mass_stack_6->SetBinContent(23,0.1343693);
   VbbHcc_tags_H_mass_stack_6->SetBinContent(32,0.1343693);
   VbbHcc_tags_H_mass_stack_6->SetBinContent(33,0.1343693);
   VbbHcc_tags_H_mass_stack_6->SetBinContent(38,0.1343693);
   VbbHcc_tags_H_mass_stack_6->SetBinContent(41,0.5374772);
   VbbHcc_tags_H_mass_stack_6->SetBinError(15,0.1343693);
   VbbHcc_tags_H_mass_stack_6->SetBinError(16,0.1343693);
   VbbHcc_tags_H_mass_stack_6->SetBinError(17,0.1343693);
   VbbHcc_tags_H_mass_stack_6->SetBinError(23,0.1343693);
   VbbHcc_tags_H_mass_stack_6->SetBinError(32,0.1343693);
   VbbHcc_tags_H_mass_stack_6->SetBinError(33,0.1343693);
   VbbHcc_tags_H_mass_stack_6->SetBinError(38,0.1343693);
   VbbHcc_tags_H_mass_stack_6->SetBinError(41,0.2687386);
   VbbHcc_tags_H_mass_stack_6->SetEntries(11);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_H_mass_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass_stack_6->SetLineColor(ci);
   VbbHcc_tags_H_mass_stack_6->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_mass_stack_6,"");
   
   TH1D *VbbHcc_tags_H_mass_stack_7 = new TH1D("VbbHcc_tags_H_mass_stack_7","",40,0,400);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(5,0.1090586);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(6,0.1090586);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(7,0.2181173);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(8,0.3271759);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(9,0.5452932);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(11,0.1090586);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(12,0.1090586);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(13,0.3271759);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(14,0.1090586);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(18,0.1090586);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(19,0.1090586);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(20,0.1090586);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(22,0.1090586);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(27,0.1090586);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(29,0.1090586);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(30,0.2181173);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(41,2.39929);
   VbbHcc_tags_H_mass_stack_7->SetBinError(5,0.1090586);
   VbbHcc_tags_H_mass_stack_7->SetBinError(6,0.1090586);
   VbbHcc_tags_H_mass_stack_7->SetBinError(7,0.1542322);
   VbbHcc_tags_H_mass_stack_7->SetBinError(8,0.1888951);
   VbbHcc_tags_H_mass_stack_7->SetBinError(9,0.2438625);
   VbbHcc_tags_H_mass_stack_7->SetBinError(11,0.1090586);
   VbbHcc_tags_H_mass_stack_7->SetBinError(12,0.1090586);
   VbbHcc_tags_H_mass_stack_7->SetBinError(13,0.1888951);
   VbbHcc_tags_H_mass_stack_7->SetBinError(14,0.1090586);
   VbbHcc_tags_H_mass_stack_7->SetBinError(18,0.1090586);
   VbbHcc_tags_H_mass_stack_7->SetBinError(19,0.1090586);
   VbbHcc_tags_H_mass_stack_7->SetBinError(20,0.1090586);
   VbbHcc_tags_H_mass_stack_7->SetBinError(22,0.1090586);
   VbbHcc_tags_H_mass_stack_7->SetBinError(27,0.1090586);
   VbbHcc_tags_H_mass_stack_7->SetBinError(29,0.1090586);
   VbbHcc_tags_H_mass_stack_7->SetBinError(30,0.1542322);
   VbbHcc_tags_H_mass_stack_7->SetBinError(41,0.5115304);
   VbbHcc_tags_H_mass_stack_7->SetEntries(48);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_mass_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass_stack_7->SetLineColor(ci);
   VbbHcc_tags_H_mass_stack_7->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_mass_stack_7,"");
   
   TH1D *VbbHcc_tags_H_mass_stack_8 = new TH1D("VbbHcc_tags_H_mass_stack_8","",40,0,400);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(5,0.4864143);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(6,0.9728286);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(7,1.70245);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(8,1.945657);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(9,0.9728286);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(10,2.188864);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(11,0.9728286);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(12,1.70245);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(13,0.4864143);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(14,0.4864143);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(15,0.4864143);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(17,0.4864143);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(19,0.4864143);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(20,0.4864143);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(22,0.2432072);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(23,0.7296215);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(24,0.4864143);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(25,0.7296215);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(26,0.9728286);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(27,0.4864143);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(28,0.7296215);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(29,0.7296215);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(30,0.4864143);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(32,0.2432072);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(34,0.7296215);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(35,0.7296215);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(36,0.7296215);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(37,0.4864143);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(38,0.7296215);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(39,1.70245);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(40,0.4864143);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(41,16.78129);
   VbbHcc_tags_H_mass_stack_8->SetBinError(5,0.3439469);
   VbbHcc_tags_H_mass_stack_8->SetBinError(6,0.4864143);
   VbbHcc_tags_H_mass_stack_8->SetBinError(7,0.6434656);
   VbbHcc_tags_H_mass_stack_8->SetBinError(8,0.6878937);
   VbbHcc_tags_H_mass_stack_8->SetBinError(9,0.4864143);
   VbbHcc_tags_H_mass_stack_8->SetBinError(10,0.7296215);
   VbbHcc_tags_H_mass_stack_8->SetBinError(11,0.4864143);
   VbbHcc_tags_H_mass_stack_8->SetBinError(12,0.6434656);
   VbbHcc_tags_H_mass_stack_8->SetBinError(13,0.3439469);
   VbbHcc_tags_H_mass_stack_8->SetBinError(14,0.3439469);
   VbbHcc_tags_H_mass_stack_8->SetBinError(15,0.3439469);
   VbbHcc_tags_H_mass_stack_8->SetBinError(17,0.3439469);
   VbbHcc_tags_H_mass_stack_8->SetBinError(19,0.3439469);
   VbbHcc_tags_H_mass_stack_8->SetBinError(20,0.3439469);
   VbbHcc_tags_H_mass_stack_8->SetBinError(22,0.2432072);
   VbbHcc_tags_H_mass_stack_8->SetBinError(23,0.4212471);
   VbbHcc_tags_H_mass_stack_8->SetBinError(24,0.3439469);
   VbbHcc_tags_H_mass_stack_8->SetBinError(25,0.4212471);
   VbbHcc_tags_H_mass_stack_8->SetBinError(26,0.4864143);
   VbbHcc_tags_H_mass_stack_8->SetBinError(27,0.3439469);
   VbbHcc_tags_H_mass_stack_8->SetBinError(28,0.4212471);
   VbbHcc_tags_H_mass_stack_8->SetBinError(29,0.4212471);
   VbbHcc_tags_H_mass_stack_8->SetBinError(30,0.3439469);
   VbbHcc_tags_H_mass_stack_8->SetBinError(32,0.2432072);
   VbbHcc_tags_H_mass_stack_8->SetBinError(34,0.4212471);
   VbbHcc_tags_H_mass_stack_8->SetBinError(35,0.4212471);
   VbbHcc_tags_H_mass_stack_8->SetBinError(36,0.4212471);
   VbbHcc_tags_H_mass_stack_8->SetBinError(37,0.3439469);
   VbbHcc_tags_H_mass_stack_8->SetBinError(38,0.4212471);
   VbbHcc_tags_H_mass_stack_8->SetBinError(39,0.6434656);
   VbbHcc_tags_H_mass_stack_8->SetBinError(40,0.3439469);
   VbbHcc_tags_H_mass_stack_8->SetBinError(41,2.02023);
   VbbHcc_tags_H_mass_stack_8->SetEntries(173);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_H_mass_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass_stack_8->SetLineColor(ci);
   VbbHcc_tags_H_mass_stack_8->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_mass_stack_8,"");
   
   TH1D *VbbHcc_tags_H_mass_stack_9 = new TH1D("VbbHcc_tags_H_mass_stack_9","",40,0,400);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(3,0.006869754);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(4,0.05221013);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(5,0.1566304);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(6,0.3036431);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(7,0.7034628);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(8,1.470127);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(9,2.141989);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(10,2.022456);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(11,1.537451);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(12,1.435779);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(13,1.253043);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(14,0.8834504);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(15,0.5907988);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(16,0.4630214);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(17,0.4410382);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(18,0.4355424);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(19,0.419055);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(20,0.4163071);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(21,0.4066894);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(22,0.3984457);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(23,0.3998197);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(24,0.4781349);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(25,0.4698912);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(26,0.419055);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(27,0.4108113);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(28,0.4272987);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(29,0.4836307);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(30,0.4451601);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(31,0.4863786);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(32,0.4685172);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(33,0.4657693);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(34,0.4808828);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(35,0.4259247);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(36,0.4369163);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(37,0.4355424);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(38,0.4066894);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(39,0.4108113);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(40,0.4520298);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(41,15.63281);
   VbbHcc_tags_H_mass_stack_9->SetBinError(3,0.003072247);
   VbbHcc_tags_H_mass_stack_9->SetBinError(4,0.008469601);
   VbbHcc_tags_H_mass_stack_9->SetBinError(5,0.01466978);
   VbbHcc_tags_H_mass_stack_9->SetBinError(6,0.02042525);
   VbbHcc_tags_H_mass_stack_9->SetBinError(7,0.03108896);
   VbbHcc_tags_H_mass_stack_9->SetBinError(8,0.0449431);
   VbbHcc_tags_H_mass_stack_9->SetBinError(9,0.05424931);
   VbbHcc_tags_H_mass_stack_9->SetBinError(10,0.05271389);
   VbbHcc_tags_H_mass_stack_9->SetBinError(11,0.04596066);
   VbbHcc_tags_H_mass_stack_9->SetBinError(12,0.04441496);
   VbbHcc_tags_H_mass_stack_9->SetBinError(13,0.0414924);
   VbbHcc_tags_H_mass_stack_9->SetBinError(14,0.03483988);
   VbbHcc_tags_H_mass_stack_9->SetBinError(15,0.02849085);
   VbbHcc_tags_H_mass_stack_9->SetBinError(16,0.02522238);
   VbbHcc_tags_H_mass_stack_9->SetBinError(17,0.02461635);
   VbbHcc_tags_H_mass_stack_9->SetBinError(18,0.0244625);
   VbbHcc_tags_H_mass_stack_9->SetBinError(19,0.02399502);
   VbbHcc_tags_H_mass_stack_9->SetBinError(20,0.02391622);
   VbbHcc_tags_H_mass_stack_9->SetBinError(21,0.02363834);
   VbbHcc_tags_H_mass_stack_9->SetBinError(22,0.02339754);
   VbbHcc_tags_H_mass_stack_9->SetBinError(23,0.02343784);
   VbbHcc_tags_H_mass_stack_9->SetBinError(24,0.02563072);
   VbbHcc_tags_H_mass_stack_9->SetBinError(25,0.0254088);
   VbbHcc_tags_H_mass_stack_9->SetBinError(26,0.02399502);
   VbbHcc_tags_H_mass_stack_9->SetBinError(27,0.02375783);
   VbbHcc_tags_H_mass_stack_9->SetBinError(28,0.02422989);
   VbbHcc_tags_H_mass_stack_9->SetBinError(29,0.0257776);
   VbbHcc_tags_H_mass_stack_9->SetBinError(30,0.02473111);
   VbbHcc_tags_H_mass_stack_9->SetBinError(31,0.02585073);
   VbbHcc_tags_H_mass_stack_9->SetBinError(32,0.02537163);
   VbbHcc_tags_H_mass_stack_9->SetBinError(33,0.02529712);
   VbbHcc_tags_H_mass_stack_9->SetBinError(34,0.02570427);
   VbbHcc_tags_H_mass_stack_9->SetBinError(35,0.0241909);
   VbbHcc_tags_H_mass_stack_9->SetBinError(36,0.02450105);
   VbbHcc_tags_H_mass_stack_9->SetBinError(37,0.0244625);
   VbbHcc_tags_H_mass_stack_9->SetBinError(38,0.02363834);
   VbbHcc_tags_H_mass_stack_9->SetBinError(39,0.02375783);
   VbbHcc_tags_H_mass_stack_9->SetBinError(40,0.02492121);
   VbbHcc_tags_H_mass_stack_9->SetBinError(41,0.1465562);
   VbbHcc_tags_H_mass_stack_9->SetEntries(28512);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_H_mass_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass_stack_9->SetLineColor(ci);
   VbbHcc_tags_H_mass_stack_9->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_mass_stack_9,"");
   
   TH1D *VbbHcc_tags_H_mass_stack_10 = new TH1D("VbbHcc_tags_H_mass_stack_10","",40,0,400);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(3,0.002148277);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(4,0.0193345);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(5,0.06409027);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(6,0.1185133);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(7,0.30971);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(8,0.6298033);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(9,0.9577736);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(10,0.906573);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(11,0.7254016);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(12,0.6444832);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(13,0.581467);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(14,0.4403968);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(15,0.317945);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(16,0.2409651);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(17,0.2309398);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(18,0.2201984);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(19,0.2194823);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(20,0.2277174);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(21,0.2137536);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(22,0.2305818);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(23,0.2348783);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(24,0.2273593);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(25,0.2234208);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(26,0.2180501);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(27,0.2176921);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(28,0.2216306);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(29,0.2119634);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(30,0.2123214);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(31,0.2137536);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(32,0.2005059);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(33,0.2144697);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(34,0.2087409);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(35,0.1947771);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(36,0.2005059);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(37,0.194061);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(38,0.1990737);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(39,0.1944191);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(40,0.1976415);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(41,6.489946);
   VbbHcc_tags_H_mass_stack_10->SetBinError(3,0.0008770305);
   VbbHcc_tags_H_mass_stack_10->SetBinError(4,0.002631092);
   VbbHcc_tags_H_mass_stack_10->SetBinError(5,0.004790332);
   VbbHcc_tags_H_mass_stack_10->SetBinError(6,0.00651408);
   VbbHcc_tags_H_mass_stack_10->SetBinError(7,0.01053045);
   VbbHcc_tags_H_mass_stack_10->SetBinError(8,0.01501661);
   VbbHcc_tags_H_mass_stack_10->SetBinError(9,0.01851829);
   VbbHcc_tags_H_mass_stack_10->SetBinError(10,0.01801652);
   VbbHcc_tags_H_mass_stack_10->SetBinError(11,0.01611606);
   VbbHcc_tags_H_mass_stack_10->SetBinError(12,0.01519061);
   VbbHcc_tags_H_mass_stack_10->SetBinError(13,0.01442886);
   VbbHcc_tags_H_mass_stack_10->SetBinError(14,0.01255717);
   VbbHcc_tags_H_mass_stack_10->SetBinError(15,0.01066954);
   VbbHcc_tags_H_mass_stack_10->SetBinError(16,0.009288522);
   VbbHcc_tags_H_mass_stack_10->SetBinError(17,0.009093246);
   VbbHcc_tags_H_mass_stack_10->SetBinError(18,0.008879257);
   VbbHcc_tags_H_mass_stack_10->SetBinError(19,0.008864808);
   VbbHcc_tags_H_mass_stack_10->SetBinError(20,0.009029582);
   VbbHcc_tags_H_mass_stack_10->SetBinError(21,0.008748352);
   VbbHcc_tags_H_mass_stack_10->SetBinError(22,0.009086194);
   VbbHcc_tags_H_mass_stack_10->SetBinError(23,0.009170457);
   VbbHcc_tags_H_mass_stack_10->SetBinError(24,0.00902248);
   VbbHcc_tags_H_mass_stack_10->SetBinError(25,0.008943991);
   VbbHcc_tags_H_mass_stack_10->SetBinError(26,0.008835838);
   VbbHcc_tags_H_mass_stack_10->SetBinError(27,0.00882858);
   VbbHcc_tags_H_mass_stack_10->SetBinError(28,0.008908086);
   VbbHcc_tags_H_mass_stack_10->SetBinError(29,0.00871164);
   VbbHcc_tags_H_mass_stack_10->SetBinError(30,0.008718995);
   VbbHcc_tags_H_mass_stack_10->SetBinError(31,0.008748352);
   VbbHcc_tags_H_mass_stack_10->SetBinError(32,0.00847292);
   VbbHcc_tags_H_mass_stack_10->SetBinError(33,0.008762994);
   VbbHcc_tags_H_mass_stack_10->SetBinError(34,0.008645166);
   VbbHcc_tags_H_mass_stack_10->SetBinError(35,0.008351001);
   VbbHcc_tags_H_mass_stack_10->SetBinError(36,0.00847292);
   VbbHcc_tags_H_mass_stack_10->SetBinError(37,0.008335636);
   VbbHcc_tags_H_mass_stack_10->SetBinError(38,0.008442605);
   VbbHcc_tags_H_mass_stack_10->SetBinError(39,0.008343322);
   VbbHcc_tags_H_mass_stack_10->SetBinError(40,0.008412181);
   VbbHcc_tags_H_mass_stack_10->SetBinError(41,0.04820478);
   VbbHcc_tags_H_mass_stack_10->SetEntries(49090);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_H_mass_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass_stack_10->SetLineColor(ci);
   VbbHcc_tags_H_mass_stack_10->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_mass_stack_10,"");
   
   TH1D *VbbHcc_tags_H_mass_stack_11 = new TH1D("VbbHcc_tags_H_mass_stack_11","",40,0,400);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(8,0.002735007);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(11,0.005470015);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(12,0.008205022);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(13,0.002735007);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(14,0.005470015);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(15,0.002735007);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(16,0.002735007);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(17,0.008205022);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(18,0.002735007);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(23,0.002735007);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(26,0.002735007);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(27,0.002735007);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(32,0.002735007);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(33,0.008205022);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(38,0.002735007);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(41,0.0355551);
   VbbHcc_tags_H_mass_stack_11->SetBinError(8,0.002735007);
   VbbHcc_tags_H_mass_stack_11->SetBinError(11,0.003867885);
   VbbHcc_tags_H_mass_stack_11->SetBinError(12,0.004737172);
   VbbHcc_tags_H_mass_stack_11->SetBinError(13,0.002735007);
   VbbHcc_tags_H_mass_stack_11->SetBinError(14,0.003867885);
   VbbHcc_tags_H_mass_stack_11->SetBinError(15,0.002735007);
   VbbHcc_tags_H_mass_stack_11->SetBinError(16,0.002735007);
   VbbHcc_tags_H_mass_stack_11->SetBinError(17,0.004737172);
   VbbHcc_tags_H_mass_stack_11->SetBinError(18,0.002735007);
   VbbHcc_tags_H_mass_stack_11->SetBinError(23,0.002735007);
   VbbHcc_tags_H_mass_stack_11->SetBinError(26,0.002735007);
   VbbHcc_tags_H_mass_stack_11->SetBinError(27,0.002735007);
   VbbHcc_tags_H_mass_stack_11->SetBinError(32,0.002735007);
   VbbHcc_tags_H_mass_stack_11->SetBinError(33,0.004737172);
   VbbHcc_tags_H_mass_stack_11->SetBinError(38,0.002735007);
   VbbHcc_tags_H_mass_stack_11->SetBinError(41,0.00986121);
   VbbHcc_tags_H_mass_stack_11->SetEntries(36);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_mass_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass_stack_11->SetLineColor(ci);
   VbbHcc_tags_H_mass_stack_11->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_mass_stack_11,"");
   
   TH1D *VbbHcc_tags_H_mass_stack_12 = new TH1D("VbbHcc_tags_H_mass_stack_12","",40,0,400);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(4,0.0003572658);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(6,0.0003572658);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(7,0.0003572658);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(8,0.0007145317);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(9,0.0003572658);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(10,0.002143595);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(11,0.002143595);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(12,0.003215393);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(13,0.003572658);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(14,0.004644456);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(15,0.002500861);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(16,0.0003572658);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(17,0.001071798);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(18,0.0007145317);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(19,0.0003572658);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(22,0.0003572658);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(23,0.0007145317);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(24,0.0003572658);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(25,0.0007145317);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(27,0.0003572658);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(30,0.0003572658);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(31,0.001071798);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(32,0.0003572658);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(33,0.0007145317);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(34,0.001071798);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(36,0.0007145317);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(37,0.0003572658);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(38,0.0003572658);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(39,0.0003572658);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(40,0.0003572658);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(41,0.01429063);
   VbbHcc_tags_H_mass_stack_12->SetBinError(4,0.0003572658);
   VbbHcc_tags_H_mass_stack_12->SetBinError(6,0.0003572658);
   VbbHcc_tags_H_mass_stack_12->SetBinError(7,0.0003572658);
   VbbHcc_tags_H_mass_stack_12->SetBinError(8,0.0005052502);
   VbbHcc_tags_H_mass_stack_12->SetBinError(9,0.0003572658);
   VbbHcc_tags_H_mass_stack_12->SetBinError(10,0.000875119);
   VbbHcc_tags_H_mass_stack_12->SetBinError(11,0.000875119);
   VbbHcc_tags_H_mass_stack_12->SetBinError(12,0.001071798);
   VbbHcc_tags_H_mass_stack_12->SetBinError(13,0.001129774);
   VbbHcc_tags_H_mass_stack_12->SetBinError(14,0.00128814);
   VbbHcc_tags_H_mass_stack_12->SetBinError(15,0.0009452366);
   VbbHcc_tags_H_mass_stack_12->SetBinError(16,0.0003572658);
   VbbHcc_tags_H_mass_stack_12->SetBinError(17,0.0006188026);
   VbbHcc_tags_H_mass_stack_12->SetBinError(18,0.0005052502);
   VbbHcc_tags_H_mass_stack_12->SetBinError(19,0.0003572658);
   VbbHcc_tags_H_mass_stack_12->SetBinError(22,0.0003572658);
   VbbHcc_tags_H_mass_stack_12->SetBinError(23,0.0005052502);
   VbbHcc_tags_H_mass_stack_12->SetBinError(24,0.0003572658);
   VbbHcc_tags_H_mass_stack_12->SetBinError(25,0.0005052502);
   VbbHcc_tags_H_mass_stack_12->SetBinError(27,0.0003572658);
   VbbHcc_tags_H_mass_stack_12->SetBinError(30,0.0003572658);
   VbbHcc_tags_H_mass_stack_12->SetBinError(31,0.0006188026);
   VbbHcc_tags_H_mass_stack_12->SetBinError(32,0.0003572658);
   VbbHcc_tags_H_mass_stack_12->SetBinError(33,0.0005052502);
   VbbHcc_tags_H_mass_stack_12->SetBinError(34,0.0006188026);
   VbbHcc_tags_H_mass_stack_12->SetBinError(36,0.0005052502);
   VbbHcc_tags_H_mass_stack_12->SetBinError(37,0.0003572658);
   VbbHcc_tags_H_mass_stack_12->SetBinError(38,0.0003572658);
   VbbHcc_tags_H_mass_stack_12->SetBinError(39,0.0003572658);
   VbbHcc_tags_H_mass_stack_12->SetBinError(40,0.0003572658);
   VbbHcc_tags_H_mass_stack_12->SetBinError(41,0.002259548);
   VbbHcc_tags_H_mass_stack_12->SetEntries(127);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_mass_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass_stack_12->SetLineColor(ci);
   VbbHcc_tags_H_mass_stack_12->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_mass_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_H_mass__9 = new TH1D("VbbHcc_tags_H_mass__9","",40,0,400);
   VbbHcc_tags_H_mass__9->SetBinContent(3,38);
   VbbHcc_tags_H_mass__9->SetBinContent(4,635);
   VbbHcc_tags_H_mass__9->SetBinContent(5,1541);
   VbbHcc_tags_H_mass__9->SetBinContent(6,2073);
   VbbHcc_tags_H_mass__9->SetBinContent(7,2342);
   VbbHcc_tags_H_mass__9->SetBinContent(15,2009);
   VbbHcc_tags_H_mass__9->SetBinContent(16,1961);
   VbbHcc_tags_H_mass__9->SetBinContent(17,1777);
   VbbHcc_tags_H_mass__9->SetBinContent(18,1751);
   VbbHcc_tags_H_mass__9->SetBinContent(19,1719);
   VbbHcc_tags_H_mass__9->SetBinContent(20,1570);
   VbbHcc_tags_H_mass__9->SetBinContent(21,1550);
   VbbHcc_tags_H_mass__9->SetBinContent(22,1489);
   VbbHcc_tags_H_mass__9->SetBinContent(23,1402);
   VbbHcc_tags_H_mass__9->SetBinContent(24,1417);
   VbbHcc_tags_H_mass__9->SetBinContent(25,1350);
   VbbHcc_tags_H_mass__9->SetBinContent(26,1270);
   VbbHcc_tags_H_mass__9->SetBinContent(27,1294);
   VbbHcc_tags_H_mass__9->SetBinContent(28,1135);
   VbbHcc_tags_H_mass__9->SetBinContent(29,1206);
   VbbHcc_tags_H_mass__9->SetBinContent(30,1153);
   VbbHcc_tags_H_mass__9->SetBinContent(31,1120);
   VbbHcc_tags_H_mass__9->SetBinContent(32,1145);
   VbbHcc_tags_H_mass__9->SetBinContent(33,1071);
   VbbHcc_tags_H_mass__9->SetBinContent(34,1032);
   VbbHcc_tags_H_mass__9->SetBinContent(35,1040);
   VbbHcc_tags_H_mass__9->SetBinContent(36,1074);
   VbbHcc_tags_H_mass__9->SetBinContent(37,936);
   VbbHcc_tags_H_mass__9->SetBinContent(38,894);
   VbbHcc_tags_H_mass__9->SetBinContent(39,885);
   VbbHcc_tags_H_mass__9->SetBinContent(40,895);
   VbbHcc_tags_H_mass__9->SetBinContent(41,39513);
   VbbHcc_tags_H_mass__9->SetEntries(96584);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass__9->SetLineColor(ci);
   VbbHcc_tags_H_mass__9->SetLineWidth(2);
   VbbHcc_tags_H_mass__9->SetMarkerStyle(20);
   VbbHcc_tags_H_mass__9->SetMarkerSize(1.2);
   VbbHcc_tags_H_mass__9->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass__9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass__9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass__9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass__9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass__9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass__9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass__9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass__9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass__9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass__9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass__9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass__9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass__9->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass__9->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_H_mass_fx1009[40] = {
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
   Double_t Graph_from_VbbHcc_tags_H_mass_fy1009[40] = {
   0,
   0,
   312.7725,
   4171.628,
   3385.084,
   6077.111,
   4790.636,
   5060.776,
   4713.342,
   4814.65,
   2360.21,
   3072.069,
   2931.277,
   5059.601,
   5291.514,
   5298.847,
   3728.297,
   4836.87,
   2755.516,
   2982.935,
   2280.519,
   2843.678,
   2780.867,
   2974.316,
   3699.515,
   3248.372,
   2799.174,
   3579.883,
   2431.436,
   2353.769,
   1594.448,
   2794.371,
   1415.499,
   1975.389,
   2914.096,
   1687.707,
   3497.866,
   3414.591,
   1500.934,
   2620.672};
   Double_t Graph_from_VbbHcc_tags_H_mass_fex1009[40] = {
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
   Double_t Graph_from_VbbHcc_tags_H_mass_fey1009[40] = {
   0,
   0,
   269.8535,
   2061.579,
   815.2421,
   1118.875,
   868.8142,
   907.1167,
   864.5446,
   865.9488,
   406.8853,
   559.6932,
   557.8588,
   1614.69,
   1636.518,
   1637.156,
   1521.484,
   1614.245,
   667.954,
   672.008,
   552.054,
   1449.329,
   669.6532,
   1473.04,
   857.6295,
   769.6602,
   718.964,
   1521.726,
   666.1817,
   612.5485,
   398.9568,
   719.8718,
   472.3377,
   549.034,
   1495.42,
   477.8636,
   1543.783,
   1543.272,
   474.1879,
   669.7213};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_VbbHcc_tags_H_mass_fx1009,Graph_from_VbbHcc_tags_H_mass_fy1009,Graph_from_VbbHcc_tags_H_mass_fex1009,Graph_from_VbbHcc_tags_H_mass_fey1009);
   gre->SetName("Graph_from_VbbHcc_tags_H_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_H_mass1009 = new TH1F("Graph_Graph_from_VbbHcc_tags_H_mass1009","",100,0,440);
   Graph_Graph_from_VbbHcc_tags_H_mass1009->SetMinimum(0);
   Graph_Graph_from_VbbHcc_tags_H_mass1009->SetMaximum(7915.584);
   Graph_Graph_from_VbbHcc_tags_H_mass1009->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_H_mass1009->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_H_mass1009->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_H_mass1009->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_mass1009->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_mass1009->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_mass1009->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_mass1009->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_mass1009->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_mass1009->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_mass1009->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_H_mass1009->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_mass1009->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_mass1009->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_mass1009->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_mass1009->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_H_mass1009);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_mass","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_H_mass_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_mass_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_mass_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_mass_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_mass_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_mass_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_mass_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_mass_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_mass_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_mass_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_mass_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_mass_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_H_mass","MC unc. (stat.)","fl");

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
   H_mass_tags_16->cd();
  
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
   
   TH1D *data_mc_ratio__10 = new TH1D("data_mc_ratio__10","",40,0,400);
   data_mc_ratio__10->SetBinContent(3,0.1214941);
   data_mc_ratio__10->SetBinContent(4,0.1522187);
   data_mc_ratio__10->SetBinContent(5,0.4552325);
   data_mc_ratio__10->SetBinContent(6,0.3411161);
   data_mc_ratio__10->SetBinContent(7,0.4888704);
   data_mc_ratio__10->SetBinContent(8,0.4969593);
   data_mc_ratio__10->SetBinContent(9,0.5350768);
   data_mc_ratio__10->SetBinContent(10,0.4874706);
   data_mc_ratio__10->SetBinContent(11,0.9562707);
   data_mc_ratio__10->SetBinContent(12,0.7617016);
   data_mc_ratio__10->SetBinContent(13,0.7368803);
   data_mc_ratio__10->SetBinContent(14,0.4184125);
   data_mc_ratio__10->SetBinContent(15,0.3796645);
   data_mc_ratio__10->SetBinContent(16,0.3700805);
   data_mc_ratio__10->SetBinContent(17,0.4766251);
   data_mc_ratio__10->SetBinContent(18,0.3620109);
   data_mc_ratio__10->SetBinContent(19,0.6238396);
   data_mc_ratio__10->SetBinContent(20,0.5263273);
   data_mc_ratio__10->SetBinContent(21,0.6796699);
   data_mc_ratio__10->SetBinContent(22,0.5236176);
   data_mc_ratio__10->SetBinContent(23,0.5041592);
   data_mc_ratio__10->SetBinContent(24,0.4764121);
   data_mc_ratio__10->SetBinContent(25,0.3649127);
   data_mc_ratio__10->SetBinContent(26,0.3909651);
   data_mc_ratio__10->SetBinContent(27,0.4622791);
   data_mc_ratio__10->SetBinContent(28,0.3170495);
   data_mc_ratio__10->SetBinContent(29,0.4960033);
   data_mc_ratio__10->SetBinContent(30,0.4898527);
   data_mc_ratio__10->SetBinContent(31,0.7024375);
   data_mc_ratio__10->SetBinContent(32,0.4097523);
   data_mc_ratio__10->SetBinContent(33,0.7566234);
   data_mc_ratio__10->SetBinContent(34,0.5224289);
   data_mc_ratio__10->SetBinContent(35,0.356886);
   data_mc_ratio__10->SetBinContent(36,0.6363663);
   data_mc_ratio__10->SetBinContent(37,0.2675917);
   data_mc_ratio__10->SetBinContent(38,0.2618176);
   data_mc_ratio__10->SetBinContent(39,0.5896329);
   data_mc_ratio__10->SetBinContent(40,0.3415154);
   data_mc_ratio__10->SetBinContent(41,0.6020917);
   data_mc_ratio__10->SetBinError(3,0.01970894);
   data_mc_ratio__10->SetBinError(4,0.006040617);
   data_mc_ratio__10->SetBinError(5,0.01159663);
   data_mc_ratio__10->SetBinError(6,0.007492082);
   data_mc_ratio__10->SetBinError(7,0.01010183);
   data_mc_ratio__10->SetBinError(8,0.009909503);
   data_mc_ratio__10->SetBinError(9,0.01065476);
   data_mc_ratio__10->SetBinError(10,0.01006217);
   data_mc_ratio__10->SetBinError(11,0.02012867);
   data_mc_ratio__10->SetBinError(12,0.01574624);
   data_mc_ratio__10->SetBinError(13,0.01585514);
   data_mc_ratio__10->SetBinError(14,0.009093775);
   data_mc_ratio__10->SetBinError(15,0.008470518);
   data_mc_ratio__10->SetBinError(16,0.008357134);
   data_mc_ratio__10->SetBinError(17,0.01130663);
   data_mc_ratio__10->SetBinError(18,0.008651245);
   data_mc_ratio__10->SetBinError(19,0.01504648);
   data_mc_ratio__10->SetBinError(20,0.0132833);
   data_mc_ratio__10->SetBinError(21,0.01726363);
   data_mc_ratio__10->SetBinError(22,0.01356959);
   data_mc_ratio__10->SetBinError(23,0.01346461);
   data_mc_ratio__10->SetBinError(24,0.01265604);
   data_mc_ratio__10->SetBinError(25,0.009931665);
   data_mc_ratio__10->SetBinError(26,0.01097074);
   data_mc_ratio__10->SetBinError(27,0.01285101);
   data_mc_ratio__10->SetBinError(28,0.009410856);
   data_mc_ratio__10->SetBinError(29,0.01428272);
   data_mc_ratio__10->SetBinError(30,0.01442616);
   data_mc_ratio__10->SetBinError(31,0.02098934);
   data_mc_ratio__10->SetBinError(32,0.01210929);
   data_mc_ratio__10->SetBinError(33,0.02311985);
   data_mc_ratio__10->SetBinError(34,0.0162625);
   data_mc_ratio__10->SetBinError(35,0.01106657);
   data_mc_ratio__10->SetBinError(36,0.01941803);
   data_mc_ratio__10->SetBinError(37,0.00874651);
   data_mc_ratio__10->SetBinError(38,0.008756491);
   data_mc_ratio__10->SetBinError(39,0.01982029);
   data_mc_ratio__10->SetBinError(40,0.0114156);
   data_mc_ratio__10->SetBinError(41,0.0338118);
   data_mc_ratio__10->SetMinimum(0.4);
   data_mc_ratio__10->SetMaximum(1.6);
   data_mc_ratio__10->SetEntries(422.5009);
   data_mc_ratio__10->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__10->SetLineColor(ci);
   data_mc_ratio__10->SetLineWidth(2);
   data_mc_ratio__10->SetMarkerStyle(20);
   data_mc_ratio__10->SetMarkerSize(1.2);
   data_mc_ratio__10->GetXaxis()->SetTitle("M_{H} [GeV]");
   data_mc_ratio__10->GetXaxis()->SetRange(1,30);
   data_mc_ratio__10->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__10->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__10->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__10->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__10->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__10->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__10->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__10->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__10->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__10->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__10->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__10->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__10->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__10->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__10->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__10->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__10->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1010[40] = {
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
   Double_t Graph_from_mc_statistical_error_fy1010[40] = {
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
   Double_t Graph_from_mc_statistical_error_fex1010[40] = {
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
   Double_t Graph_from_mc_statistical_error_fey1010[40] = {
   0,
   0,
   0.862779,
   0.4941906,
   0.2408336,
   0.1841129,
   0.1813568,
   0.1792446,
   0.183425,
   0.1798571,
   0.1723937,
   0.1821877,
   0.1903126,
   0.319134,
   0.3092721,
   0.3089646,
   0.4080908,
   0.3337374,
   0.2424062,
   0.2252842,
   0.2420739,
   0.509667,
   0.2408073,
   0.4952535,
   0.2318221,
   0.2369372,
   0.2568486,
   0.425077,
   0.273987,
   0.2602415,
   0.2502163,
   0.257615,
   0.3336898,
   0.2779372,
   0.5131677,
   0.2831437,
   0.4413499,
   0.4519641,
   0.3159285,
   0.2555533};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1010,Graph_from_mc_statistical_error_fy1010,Graph_from_mc_statistical_error_fex1010,Graph_from_mc_statistical_error_fey1010);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1010 = new TH1F("Graph_Graph_from_mc_statistical_error1010","",100,0,440);
   Graph_Graph_from_mc_statistical_error1010->SetMinimum(0.1234989);
   Graph_Graph_from_mc_statistical_error1010->SetMaximum(2.035335);
   Graph_Graph_from_mc_statistical_error1010->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1010->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1010->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1010->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1010->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1010->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1010->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1010->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1010->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1010->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1010->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1010->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1010->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1010->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1010->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1010->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1010);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   H_mass_tags_16->cd();
   H_mass_tags_16->Modified();
   H_mass_tags_16->cd();
   H_mass_tags_16->SetSelected(H_mass_tags_16);
}

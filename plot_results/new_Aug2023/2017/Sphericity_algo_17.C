void Sphericity_algo_17()
{
//=========Macro generated from canvas: Sphericity_algo_17/Sphericity_algo_17
//=========  (Tue Aug 22 09:21:53 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_17 = new TCanvas("Sphericity_algo_17", "Sphericity_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_17->SetHighLightColor(2);
   Sphericity_algo_17->Range(0,0,1,1);
   Sphericity_algo_17->SetFillColor(0);
   Sphericity_algo_17->SetFillStyle(4000);
   Sphericity_algo_17->SetBorderMode(0);
   Sphericity_algo_17->SetBorderSize(2);
   Sphericity_algo_17->SetFrameFillStyle(1000);
   Sphericity_algo_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-1351.391,1.052419,1350050);
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
   st->SetMaximum(1157057);
   
   TH1F *st_stack_154 = new TH1F("st_stack_154","",25,0,1);
   st_stack_154->SetMinimum(0.01);
   st_stack_154->SetMaximum(1214910);
   st_stack_154->SetDirectory(0);
   st_stack_154->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_154->SetLineColor(ci);
   st_stack_154->GetXaxis()->SetRange(1,25);
   st_stack_154->GetXaxis()->SetLabelFont(42);
   st_stack_154->GetXaxis()->SetLabelSize(0.035);
   st_stack_154->GetXaxis()->SetTitleSize(0.035);
   st_stack_154->GetXaxis()->SetTitleFont(42);
   st_stack_154->GetYaxis()->SetTitle("Events/0.04");
   st_stack_154->GetYaxis()->SetLabelFont(42);
   st_stack_154->GetYaxis()->SetLabelSize(0.05);
   st_stack_154->GetYaxis()->SetTitleSize(0.057);
   st_stack_154->GetYaxis()->SetTitleOffset(1.2);
   st_stack_154->GetYaxis()->SetTitleFont(42);
   st_stack_154->GetZaxis()->SetLabelFont(42);
   st_stack_154->GetZaxis()->SetLabelSize(0.035);
   st_stack_154->GetZaxis()->SetTitleSize(0.035);
   st_stack_154->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_154);
   
   
   TH1D *VbbHcc_algo_Sphericity_stack_1 = new TH1D("VbbHcc_algo_Sphericity_stack_1","",25,0,1);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(1,460111.6);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(2,434156.5);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(3,226901.4);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(4,139972.2);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(5,65738.7);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(6,28412.39);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(7,6555.529);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(8,2926.049);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(9,998.897);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(10,446.0577);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(11,546.6481);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(12,143.3792);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(13,46.16807);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(14,92.99128);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(15,33.36761);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(16,273.8525);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(17,27.92295);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(18,11.16858);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(19,20.83592);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(20,8.542049);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(1,22644.15);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(2,22987.35);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(3,5669.17);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(4,16403.55);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(5,2949.583);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(6,2256.584);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(7,837.6083);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(8,667.1456);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(9,333.9516);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(10,169.6398);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(11,314.2081);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(12,50.24392);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(13,17.66612);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(14,40.07892);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(15,18.68285);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(16,237.2582);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(17,11.02426);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(18,5.125554);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(19,17.63862);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(20,6.177334);
   VbbHcc_algo_Sphericity_stack_1->SetEntries(106115);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Sphericity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_1->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_1,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_2 = new TH1D("VbbHcc_algo_Sphericity_stack_2","",25,0,1);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(1,2964.988);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(2,2920.532);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(3,1649.956);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(4,945.9518);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(5,475.4504);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(6,226.3541);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(7,95.70151);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(8,38.57028);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(9,19.63959);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(10,10.54229);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(11,5.974219);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(12,5.456415);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(13,2.04815);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(14,0.9311764);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(15,1.528155);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(16,0.9656334);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(17,0.8215297);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(18,1.139609);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(19,0.1260414);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(20,0.08900674);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(21,0.02187584);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(1,22.26426);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(2,21.85751);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(3,16.43411);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(4,12.59342);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(5,9.12638);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(6,6.157959);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(7,4.026383);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(8,2.422832);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(9,1.82681);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(10,1.257711);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(11,0.967644);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(12,0.9343688);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(13,0.5610895);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(14,0.220692);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(15,0.5176633);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(16,0.3702755);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(17,0.3280381);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(18,0.5682705);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(19,0.06842847);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(20,0.04653028);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(21,0.02187584);
   VbbHcc_algo_Sphericity_stack_2->SetEntries(142925);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Sphericity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_2->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_2,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_3 = new TH1D("VbbHcc_algo_Sphericity_stack_3","",25,0,1);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(1,53943.99);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(2,57372.23);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(3,30777.44);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(4,16787.6);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(5,8870.435);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(6,4246.629);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(7,1849.218);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(8,800.7371);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(9,379.6735);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(10,202.477);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(11,117.2626);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(12,70.24666);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(13,44.93412);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(14,28.96786);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(15,20.62796);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(16,12.7125);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(17,9.970911);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(18,5.376479);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(19,3.354587);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(20,1.302353);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(21,0.4419498);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(22,0.1265952);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(23,0.05976038);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(24,0.04673127);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(1,58.65184);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(2,60.38888);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(3,44.22223);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(4,32.75648);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(5,23.85623);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(6,16.41872);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(7,10.67646);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(8,6.885701);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(9,4.657253);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(10,3.351735);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(11,2.525003);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(12,1.925099);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(13,1.52324);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(14,1.20224);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(15,1.021569);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(16,0.8030321);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(17,0.717984);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(18,0.5375525);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(19,0.4196723);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(20,0.2563284);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(21,0.155417);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(22,0.07807177);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(23,0.04309818);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(24,0.04673127);
   VbbHcc_algo_Sphericity_stack_3->SetEntries(3114170);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Sphericity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_3->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_3,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_4 = new TH1D("VbbHcc_algo_Sphericity_stack_4","",25,0,1);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(1,2594.68);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(2,2453.338);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(3,1442.932);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(4,849.164);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(5,420.9274);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(6,180.2923);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(7,56.27977);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(8,17.96022);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(9,6.776648);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(10,3.671485);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(11,0.957257);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(12,0.9478719);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(13,0.8999733);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(14,0.2879223);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(15,0.593899);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(16,3.307314);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(17,0.622597);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(18,0.04368118);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(19,0.02783533);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(1,33.88199);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(2,35.09573);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(3,27.25856);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(4,21.65667);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(5,12.7569);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(6,7.850035);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(7,4.462413);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(8,2.916287);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(9,1.233);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(10,0.9240125);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(11,0.3360152);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(12,0.322482);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(13,0.3179793);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(14,0.1530746);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(15,0.2040465);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(16,3.114277);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(17,0.3332951);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(18,0.04368118);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(19,0.02783533);
   VbbHcc_algo_Sphericity_stack_4->SetEntries(54777);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Sphericity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_4->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_4,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_5 = new TH1D("VbbHcc_algo_Sphericity_stack_5","",25,0,1);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(1,968.0932);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(2,777.6524);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(3,523.521);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(4,249.8891);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(5,150.553);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(6,51.79981);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(7,15.70288);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(8,4.864877);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(9,2.781927);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(10,1.557034);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(11,1.368893);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(12,0.3996189);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(13,0.486246);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(14,0.4648195);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(15,0.03770008);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(16,0.01238512);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(17,0.1493894);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(19,0.1763277);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(1,33.62308);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(2,30.32684);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(3,28.19986);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(4,16.51006);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(5,14.96036);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(6,4.796936);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(7,2.693476);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(8,1.509236);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(9,0.8638204);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(10,1.266955);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(11,0.9325911);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(12,0.1916401);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(13,0.2261154);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(14,0.4257899);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(15,0.03770008);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(16,0.01238512);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(17,0.1493894);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(19,0.1763277);
   VbbHcc_algo_Sphericity_stack_5->SetEntries(15759);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Sphericity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_5->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_5,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_6 = new TH1D("VbbHcc_algo_Sphericity_stack_6","",25,0,1);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(1,7.286681);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(2,9.785175);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(3,4.024653);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(4,0.7770018);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(5,2.163456);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(6,0.3300816);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(7,0.6517983);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(1,1.532515);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(2,1.731219);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(3,1.132675);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(4,0.4644404);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(5,0.8249957);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(6,0.3300816);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(7,0.4609063);
   VbbHcc_algo_Sphericity_stack_6->SetEntries(83);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Sphericity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_6->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_6,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_7 = new TH1D("VbbHcc_algo_Sphericity_stack_7","",25,0,1);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(1,20.68798);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(2,20.5208);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(3,10.63842);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(4,5.083836);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(5,5.538301);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(6,2.090623);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(7,0.5811095);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(8,0.3179278);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(16,0.1200946);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(1,2.326265);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(2,2.267642);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(3,1.617927);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(4,1.131935);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(5,1.183812);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(6,0.7136508);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(7,0.4198695);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(8,0.3179278);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(16,0.1200946);
   VbbHcc_algo_Sphericity_stack_7->SetEntries(272);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Sphericity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_7->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_7,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_8 = new TH1D("VbbHcc_algo_Sphericity_stack_8","",25,0,1);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(1,31.5732);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(2,31.00736);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(3,16.37364);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(4,11.60965);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(5,8.768016);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(6,3.668928);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(8,0.7202464);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(9,0.2236683);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(1,2.80334);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(2,2.750167);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(3,1.992817);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(4,1.702775);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(5,1.46581);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(6,0.9454316);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(8,0.4173098);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(9,0.2236683);
   VbbHcc_algo_Sphericity_stack_8->SetEntries(443);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Sphericity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_8->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_8,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_9 = new TH1D("VbbHcc_algo_Sphericity_stack_9","",25,0,1);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(1,21.5749);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(2,21.14895);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(3,11.6475);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(4,7.956426);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(5,5.258582);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(6,2.384288);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(7,0.6431115);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(8,0.177976);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(9,0.05675589);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(10,0.02181459);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(11,0.006957166);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(12,0.006682636);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(13,0.002934131);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(14,0.002110476);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(15,0.003903191);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(1,0.1863623);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(2,0.1828235);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(3,0.1354686);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(4,0.1126557);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(5,0.09256214);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(6,0.06241102);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(7,0.03237103);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(8,0.01678748);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(9,0.009047184);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(10,0.005451596);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(11,0.003189778);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(12,0.00334477);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(13,0.001720694);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(14,0.001601478);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(15,0.002259142);
   VbbHcc_algo_Sphericity_stack_9->SetEntries(49206);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Sphericity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_9->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_9,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_10 = new TH1D("VbbHcc_algo_Sphericity_stack_10","",25,0,1);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(1,10.82872);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(2,10.82576);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(3,6.099177);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(4,3.744092);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(5,2.13671);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(6,1.015169);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(7,0.3347831);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(8,0.1168556);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(9,0.04116187);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(10,0.03018965);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(11,0.01399592);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(12,0.007092851);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(13,0.007517725);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(14,0.00279373);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(15,0.002455599);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(16,0.001628482);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(17,0.00252993);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(18,0.0004217808);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(19,0.00112141);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(1,0.06444165);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(2,0.06405249);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(3,0.048186);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(4,0.03786216);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(5,0.02864351);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(6,0.01981122);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(7,0.01132229);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(8,0.006652976);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(9,0.003905824);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(10,0.00336102);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(11,0.002267396);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(12,0.001577967);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(13,0.001661697);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(14,0.0009467166);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(15,0.0008497964);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(16,0.0007058213);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(17,0.0009640998);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(18,0.0004217808);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(19,0.0005629673);
   VbbHcc_algo_Sphericity_stack_10->SetEntries(94157);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Sphericity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_10->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_10,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_11 = new TH1D("VbbHcc_algo_Sphericity_stack_11","",25,0,1);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(1,0.210787);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(2,0.1636163);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(3,0.09592276);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(4,0.06380776);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(5,0.03567707);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(6,0.01328791);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(7,0.004987805);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(9,0.001114742);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(1,0.01819443);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(2,0.01586688);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(3,0.01198673);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(4,0.009918727);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(5,0.007624838);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(6,0.004319605);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(7,0.002459846);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(9,0.001114742);
   VbbHcc_algo_Sphericity_stack_11->SetEntries(413);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Sphericity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_11->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_11,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_12 = new TH1D("VbbHcc_algo_Sphericity_stack_12","",25,0,1);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(1,0.08060388);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(2,0.09105353);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(3,0.04646078);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(4,0.02963243);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(5,0.01847896);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(6,0.007854199);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(7,0.002410439);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(8,0.002729961);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(9,0.0001987499);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(10,0.0001475577);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(11,0.0001704031);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(13,9.202612e-05);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(16,6.042707e-05);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(1,0.004040782);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(2,0.004267644);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(3,0.003044236);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(4,0.002463715);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(5,0.001966763);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(6,0.00126361);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(7,0.000696666);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(8,0.0007627128);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(9,0.0001987499);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(10,0.0001475577);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(11,0.0001704031);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(13,9.202612e-05);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(16,6.042707e-05);
   VbbHcc_algo_Sphericity_stack_12->SetEntries(1460);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Sphericity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_12->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_Sphericity__422 = new TH1D("VbbHcc_algo_Sphericity__422","",25,0,1);
   VbbHcc_algo_Sphericity__422->SetBinContent(1,79410);
   VbbHcc_algo_Sphericity__422->SetBinContent(2,71250);
   VbbHcc_algo_Sphericity__422->SetBinContent(3,40359);
   VbbHcc_algo_Sphericity__422->SetBinContent(4,22685);
   VbbHcc_algo_Sphericity__422->SetBinContent(5,12175);
   VbbHcc_algo_Sphericity__422->SetBinContent(6,5583);
   VbbHcc_algo_Sphericity__422->SetBinContent(7,2235);
   VbbHcc_algo_Sphericity__422->SetBinContent(8,901);
   VbbHcc_algo_Sphericity__422->SetBinContent(9,439);
   VbbHcc_algo_Sphericity__422->SetBinContent(10,216);
   VbbHcc_algo_Sphericity__422->SetBinContent(11,132);
   VbbHcc_algo_Sphericity__422->SetBinContent(12,74);
   VbbHcc_algo_Sphericity__422->SetBinContent(13,47);
   VbbHcc_algo_Sphericity__422->SetBinContent(14,38);
   VbbHcc_algo_Sphericity__422->SetBinContent(15,22);
   VbbHcc_algo_Sphericity__422->SetBinContent(16,13);
   VbbHcc_algo_Sphericity__422->SetBinContent(17,17);
   VbbHcc_algo_Sphericity__422->SetBinContent(18,3);
   VbbHcc_algo_Sphericity__422->SetBinContent(19,5);
   VbbHcc_algo_Sphericity__422->SetBinContent(20,5);
   VbbHcc_algo_Sphericity__422->SetBinContent(21,1);
   VbbHcc_algo_Sphericity__422->SetEntries(235634);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity__422->SetLineColor(ci);
   VbbHcc_algo_Sphericity__422->SetLineWidth(2);
   VbbHcc_algo_Sphericity__422->SetMarkerStyle(20);
   VbbHcc_algo_Sphericity__422->SetMarkerSize(1.2);
   VbbHcc_algo_Sphericity__422->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity__422->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__422->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity__422->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity__422->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__422->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__422->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity__422->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity__422->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity__422->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__422->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__422->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity__422->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity__422->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__422->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Sphericity_fx1307[25] = {
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
   Double_t Graph_from_VbbHcc_algo_Sphericity_fy1307[25] = {
   520675.5,
   497773.8,
   261344.2,
   158834.1,
   75679.99,
   33126.97,
   8574.649,
   3789.518,
   1408.092,
   664.3576,
   672.2323,
   220.4436,
   94.5471,
   123.648,
   56.16168,
   290.9721,
   39.48991,
   17.72878,
   24.52184,
   9.933409,
   0.4638256,
   0.1265952,
   0.05976038,
   0.04673127,
   0};
   Double_t Graph_from_VbbHcc_algo_Sphericity_fex1307[25] = {
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
   Double_t Graph_from_VbbHcc_algo_Sphericity_fey1307[25] = {
   22644.29,
   22987.49,
   5669.503,
   16403.61,
   2949.76,
   2256.671,
   837.7024,
   667.1939,
   333.9925,
   169.6848,
   314.2213,
   50.29087,
   17.74483,
   40.1001,
   18.71907,
   237.2803,
   11.05851,
   5.185085,
   17.64465,
   6.182825,
   0.156949,
   0.07807177,
   0.04309818,
   0.04673127,
   0};
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_VbbHcc_algo_Sphericity_fx1307,Graph_from_VbbHcc_algo_Sphericity_fy1307,Graph_from_VbbHcc_algo_Sphericity_fex1307,Graph_from_VbbHcc_algo_Sphericity_fey1307);
   gre->SetName("Graph_from_VbbHcc_algo_Sphericity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Sphericity1307 = new TH1F("Graph_Graph_from_VbbHcc_algo_Sphericity1307","",100,0,1.1);
   Graph_Graph_from_VbbHcc_algo_Sphericity1307->SetMinimum(0);
   Graph_Graph_from_VbbHcc_algo_Sphericity1307->SetMaximum(597651.8);
   Graph_Graph_from_VbbHcc_algo_Sphericity1307->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_Sphericity1307->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Sphericity1307->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Sphericity1307->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Sphericity1307->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity1307->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity1307->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Sphericity1307->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Sphericity1307->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity1307->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity1307->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_Sphericity1307->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Sphericity1307->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Sphericity1307->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity1307->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity1307->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Sphericity1307);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Sphericity","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_Sphericity","MC unc. (stat.)","fl");

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
   Sphericity_algo_17->cd();
  
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
   
   TH1D *data_mc_ratio__423 = new TH1D("data_mc_ratio__423","",25,0,1);
   data_mc_ratio__423->SetBinContent(1,0.1525134);
   data_mc_ratio__423->SetBinContent(2,0.1431373);
   data_mc_ratio__423->SetBinContent(3,0.1544285);
   data_mc_ratio__423->SetBinContent(4,0.142822);
   data_mc_ratio__423->SetBinContent(5,0.1608748);
   data_mc_ratio__423->SetBinContent(6,0.1685333);
   data_mc_ratio__423->SetBinContent(7,0.2606521);
   data_mc_ratio__423->SetBinContent(8,0.2377611);
   data_mc_ratio__423->SetBinContent(9,0.3117695);
   data_mc_ratio__423->SetBinContent(10,0.3251261);
   data_mc_ratio__423->SetBinContent(11,0.1963607);
   data_mc_ratio__423->SetBinContent(12,0.3356868);
   data_mc_ratio__423->SetBinContent(13,0.4971067);
   data_mc_ratio__423->SetBinContent(14,0.3073241);
   data_mc_ratio__423->SetBinContent(15,0.3917261);
   data_mc_ratio__423->SetBinContent(16,0.04467783);
   data_mc_ratio__423->SetBinContent(17,0.4304897);
   data_mc_ratio__423->SetBinContent(18,0.1692164);
   data_mc_ratio__423->SetBinContent(19,0.2038999);
   data_mc_ratio__423->SetBinContent(20,0.5033519);
   data_mc_ratio__423->SetBinContent(21,2.155983);
   data_mc_ratio__423->SetBinError(1,0.0005412157);
   data_mc_ratio__423->SetBinError(2,0.0005362415);
   data_mc_ratio__423->SetBinError(3,0.0007687008);
   data_mc_ratio__423->SetBinError(4,0.0009482561);
   data_mc_ratio__423->SetBinError(5,0.001457986);
   data_mc_ratio__423->SetBinError(6,0.002255548);
   data_mc_ratio__423->SetBinError(7,0.005513437);
   data_mc_ratio__423->SetBinError(8,0.007920972);
   data_mc_ratio__423->SetBinError(9,0.01487995);
   data_mc_ratio__423->SetBinError(10,0.02212203);
   data_mc_ratio__423->SetBinError(11,0.01709101);
   data_mc_ratio__423->SetBinError(12,0.0390228);
   data_mc_ratio__423->SetBinError(13,0.07251047);
   data_mc_ratio__423->SetBinError(14,0.04985455);
   data_mc_ratio__423->SetBinError(15,0.0835163);
   data_mc_ratio__423->SetBinError(16,0.0123914);
   data_mc_ratio__423->SetBinError(17,0.1044091);
   data_mc_ratio__423->SetBinError(18,0.09769715);
   data_mc_ratio__423->SetBinError(19,0.09118681);
   data_mc_ratio__423->SetBinError(20,0.2251058);
   data_mc_ratio__423->SetBinError(21,2.155983);
   data_mc_ratio__423->SetMinimum(0.4);
   data_mc_ratio__423->SetMaximum(1.6);
   data_mc_ratio__423->SetEntries(9.705847);
   data_mc_ratio__423->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__423->SetLineColor(ci);
   data_mc_ratio__423->SetLineWidth(2);
   data_mc_ratio__423->SetMarkerStyle(20);
   data_mc_ratio__423->SetMarkerSize(1.2);
   data_mc_ratio__423->GetXaxis()->SetTitle("Sphericity");
   data_mc_ratio__423->GetXaxis()->SetRange(1,25);
   data_mc_ratio__423->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__423->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__423->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__423->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__423->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__423->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__423->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__423->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__423->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__423->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__423->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__423->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__423->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__423->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__423->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__423->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__423->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1308[25] = {
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
   Double_t Graph_from_mc_statistical_error_fy1308[25] = {
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
   Double_t Graph_from_mc_statistical_error_fex1308[25] = {
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
   Double_t Graph_from_mc_statistical_error_fey1308[25] = {
   0.04349021,
   0.04618059,
   0.02169363,
   0.1032751,
   0.03897674,
   0.06812185,
   0.09769524,
   0.176063,
   0.2371951,
   0.2554119,
   0.4674296,
   0.2281349,
   0.1876824,
   0.3243087,
   0.3333068,
   0.8154746,
   0.2800339,
   0.2924672,
   0.7195484,
   0.6224273,
   0.3383794,
   0.6167038,
   0.7211831,
   1,
   0};
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1308,Graph_from_mc_statistical_error_fy1308,Graph_from_mc_statistical_error_fex1308,Graph_from_mc_statistical_error_fey1308);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1308 = new TH1F("Graph_Graph_from_mc_statistical_error1308","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1308->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1308->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1308->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1308->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1308->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1308->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1308->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1308->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1308->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1308->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1308->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1308->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1308->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1308->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1308->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1308->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1308->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1308->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1308);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Sphericity_algo_17->cd();
   Sphericity_algo_17->Modified();
   Sphericity_algo_17->cd();
   Sphericity_algo_17->SetSelected(Sphericity_algo_17);
}

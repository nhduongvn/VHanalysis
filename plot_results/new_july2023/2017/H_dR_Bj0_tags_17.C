void H_dR_Bj0_tags_17()
{
//=========Macro generated from canvas: H_dR_Bj0_tags_17/H_dR_Bj0_tags_17
//=========  (Mon Jul 24 10:11:23 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj0_tags_17 = new TCanvas("H_dR_Bj0_tags_17", "H_dR_Bj0_tags_17",0,0,600,600);
   H_dR_Bj0_tags_17->SetHighLightColor(2);
   H_dR_Bj0_tags_17->Range(0,0,1,1);
   H_dR_Bj0_tags_17->SetFillColor(0);
   H_dR_Bj0_tags_17->SetFillStyle(4000);
   H_dR_Bj0_tags_17->SetBorderMode(0);
   H_dR_Bj0_tags_17->SetBorderSize(2);
   H_dR_Bj0_tags_17->SetFrameFillStyle(1000);
   H_dR_Bj0_tags_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-539.4038,6.314516,538874.3);
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
   st->SetMaximum(461840.9);
   
   TH1F *st_stack_42 = new TH1F("st_stack_42","",30,0,6);
   st_stack_42->SetMinimum(0.01);
   st_stack_42->SetMaximum(484933);
   st_stack_42->SetDirectory(0);
   st_stack_42->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_42->SetLineColor(ci);
   st_stack_42->GetXaxis()->SetRange(1,30);
   st_stack_42->GetXaxis()->SetLabelFont(42);
   st_stack_42->GetXaxis()->SetLabelSize(0.035);
   st_stack_42->GetXaxis()->SetTitleSize(0.035);
   st_stack_42->GetXaxis()->SetTitleFont(42);
   st_stack_42->GetYaxis()->SetTitle("Events/0.2");
   st_stack_42->GetYaxis()->SetLabelFont(42);
   st_stack_42->GetYaxis()->SetLabelSize(0.05);
   st_stack_42->GetYaxis()->SetTitleSize(0.057);
   st_stack_42->GetYaxis()->SetTitleOffset(1.2);
   st_stack_42->GetYaxis()->SetTitleFont(42);
   st_stack_42->GetZaxis()->SetLabelFont(42);
   st_stack_42->GetZaxis()->SetLabelSize(0.035);
   st_stack_42->GetZaxis()->SetTitleSize(0.035);
   st_stack_42->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_42);
   
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_1 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(1,53881.06);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(2,172944.7);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(3,166089.3);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(4,144045.6);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(5,104244.4);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(6,86381.5);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(7,83280.04);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(8,67051.24);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(9,79750.33);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(10,58258.48);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(11,47890.23);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(12,51436.9);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(13,53693.12);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(14,44282.49);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(15,38470.89);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(16,50964.23);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(17,23477.06);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(18,20711.97);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(19,34166.19);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(20,16892.77);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(21,12205.12);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(22,10087.12);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(23,9165.692);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(24,7157.341);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(25,6440.2);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(26,3900.331);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(27,3215.624);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(28,2166.223);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(29,1175.22);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(30,975.5133);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(31,2041.248);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(1,1653.054);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(2,4378.727);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(3,4856.839);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(4,15072.56);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(5,3806.651);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(6,3483.766);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(7,4547.669);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(8,3490.755);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(9,14781.41);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(10,2700.069);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(11,2923.592);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(12,2678.686);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(13,3241.331);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(14,2511.454);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(15,2324.604);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(16,14695.57);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(17,1394.279);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(18,1340.551);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(19,14580.63);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(20,1344.414);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(21,1048.057);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(22,974.9054);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(23,1446.249);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(24,824.4612);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(25,784.2702);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(26,533.5414);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(27,577.2689);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(28,380.1061);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(29,270.9286);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(30,264.3101);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(31,511.6174);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetEntries(158509);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_H_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_2 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(1,493.8619);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(2,1913.675);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(3,2205.374);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(4,1765.056);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(5,1407.687);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(6,1158.432);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(7,1015.494);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(8,879.0457);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(9,762.9206);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(10,696.0782);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(11,639.8055);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(12,611.0122);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(13,558.284);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(14,513.5904);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(15,470.5079);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(16,420.0553);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(17,338.6434);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(18,289.7537);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(19,236.2441);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(20,196.5952);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(21,157.8279);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(22,136.2274);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(23,117.4598);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(24,83.45663);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(25,68.02029);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(26,46.89752);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(27,42.29844);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(28,22.34673);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(29,16.46224);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(30,8.946742);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(31,18.85519);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(1,9.543963);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(2,18.09795);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(3,19.21039);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(4,16.92095);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(5,14.97737);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(6,13.56501);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(7,12.67891);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(8,11.71795);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(9,10.83039);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(10,10.24253);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(11,9.823909);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(12,9.585132);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(13,9.124087);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(14,8.708497);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(15,8.220665);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(16,7.717058);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(17,6.930722);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(18,6.419391);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(19,5.727291);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(20,5.194476);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(21,4.524832);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(22,4.329683);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(23,4.093766);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(24,3.357118);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(25,3.121564);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(26,2.505633);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(27,2.530257);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(28,1.615332);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(29,1.449645);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(30,0.8798297);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(31,1.506451);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetEntries(208682);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_H_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_2,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_3 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_3","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(1,5434.268);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(2,27973.45);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(3,37238.18);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(4,33120.01);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(5,26373.5);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(6,21152.95);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(7,17443.54);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(8,15033.08);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(9,13390.89);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(10,12246.64);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(11,11388.64);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(12,10580.63);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(13,9687.672);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(14,8713.011);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(15,7717.218);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(16,6720.713);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(17,5429.894);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(18,4520.365);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(19,3686.614);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(20,2989.951);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(21,2404.006);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(22,1910.59);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(23,1487.943);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(24,1142.868);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(25,859.8629);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(26,635.8722);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(27,439.1049);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(28,298.3487);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(29,202.7471);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(30,127.4202);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(31,236.8392);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(1,18.79358);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(2,42.77271);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(3,49.55624);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(4,46.85216);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(5,41.84052);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(6,37.48002);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(7,33.99925);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(8,31.56991);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(9,29.80205);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(10,28.5078);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(11,27.49845);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(12,26.51464);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(13,25.36237);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(14,24.03538);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(15,22.59532);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(16,21.05302);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(17,18.90491);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(18,17.24321);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(19,15.54936);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(20,13.98366);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(21,12.51401);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(22,11.15499);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(23,9.821695);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(24,8.602113);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(25,7.451245);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(26,6.403673);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(27,5.311198);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(28,4.37481);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(29,3.608769);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(30,2.844935);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(31,3.882643);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetEntries(4592799);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_H_dR_Bj0_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_3->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_3,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_4 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_4","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(1,403.0374);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(2,1292.758);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(3,1363.824);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(4,1154.329);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(5,909.6833);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(6,751.2623);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(7,641.6974);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(8,549.3807);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(9,466.7251);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(10,430.4599);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(11,437.2988);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(12,406.749);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(13,341.0927);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(14,340.6553);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(15,291.5758);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(16,271.5332);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(17,213.2081);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(18,203.9307);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(19,158.595);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(20,128.3753);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(21,106.1182);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(22,85.36992);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(23,72.27815);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(24,56.12514);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(25,46.88351);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(26,36.84591);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(27,25.57918);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(28,24.38299);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(29,13.98177);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(30,6.208712);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(31,15.38857);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(1,9.193725);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(2,20.8081);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(3,23.75209);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(4,23.09651);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(5,20.69123);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(6,19.10995);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(7,17.3346);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(8,15.73166);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(9,13.0941);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(10,13.0538);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(11,15.40796);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(12,13.70902);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(13,9.600231);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(14,12.16765);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(15,10.43219);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(16,9.66584);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(17,9.319393);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(18,10.74824);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(19,8.745662);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(20,7.084453);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(21,6.364879);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(22,4.847079);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(23,4.466861);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(24,3.255005);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(25,3.985142);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(26,3.690715);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(27,2.129956);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(28,4.277575);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(29,1.662009);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(30,1.079357);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(31,3.115958);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetEntries(91213);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_H_dR_Bj0_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_4->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_4,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_5 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_5","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(1,266.4977);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(2,835.9891);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(3,880.6591);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(4,668.4486);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(5,553.7151);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(6,412.6128);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(7,356.9839);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(8,328.3274);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(9,269.5507);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(10,231.8675);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(11,215.3606);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(12,183.8117);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(13,183.3607);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(14,171.4214);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(15,149.074);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(16,150.5917);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(17,127.0668);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(18,97.3197);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(19,75.41847);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(20,70.02415);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(21,56.88545);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(22,58.72923);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(23,36.53806);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(24,40.56922);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(25,26.78044);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(26,21.21033);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(27,13.30812);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(28,5.576221);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(29,6.087545);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(30,4.184996);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(31,7.441398);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(1,8.64038);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(2,28.09464);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(3,33.64403);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(4,30.16918);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(5,32.5516);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(6,23.22981);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(7,22.5354);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(8,21.57577);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(9,17.30262);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(10,15.323);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(11,16.19446);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(12,11.40164);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(13,13.06497);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(14,10.95175);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(15,8.936396);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(16,13.65999);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(17,13.57529);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(18,9.53017);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(19,5.641862);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(20,8.600479);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(21,4.954044);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(22,8.626178);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(23,4.094012);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(24,7.819014);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(25,3.693345);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(26,2.965748);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(27,2.041592);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(28,0.7967001);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(29,1.36871);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(30,1.308661);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(31,2.123767);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetEntries(43154);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_H_dR_Bj0_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_5->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_5,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_6 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_6","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(1,2.419382);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(2,6.048454);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(3,4.435533);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(4,3.830688);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(5,2.822612);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(6,2.419382);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(7,2.016151);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(8,2.217767);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(9,1.814536);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(10,2.419382);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(11,1.209691);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(12,1.209691);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(13,0.8064606);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(14,0.8064606);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(15,1.008076);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(16,0.8064606);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(17,0.6048454);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(18,1.008076);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(19,0.2016151);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(21,0.6048454);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(22,0.2016151);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(23,0.2016151);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(25,0.6048454);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(26,0.2016151);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(1,0.6984153);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(2,1.104292);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(3,0.9456588);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(4,0.87882);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(5,0.7543748);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(6,0.6984153);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(7,0.6375631);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(8,0.6686818);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(9,0.6048454);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(10,0.6984153);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(11,0.4938542);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(12,0.4938542);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(13,0.4032303);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(14,0.4032303);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(15,0.4508252);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(16,0.4032303);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(17,0.3492077);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(18,0.4508252);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(19,0.2016151);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(21,0.3492077);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(22,0.2016151);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(23,0.2016151);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(25,0.3492077);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(26,0.2016151);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetEntries(198);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_H_dR_Bj0_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_6->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_6,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_7 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_7","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(1,4.208858);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(2,13.93277);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(3,14.0779);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(4,8.12745);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(5,5.079656);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(6,4.78939);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(7,3.918592);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(8,4.353991);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(9,3.628326);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(10,2.757528);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(11,1.45133);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(12,3.628326);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(13,2.467262);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(14,3.192927);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(15,1.45133);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(16,1.886729);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(17,1.45133);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(18,1.306197);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(19,0.8707982);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(20,1.306197);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(21,0.5805321);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(22,0.8707982);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(23,0.2902661);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(25,0.2902661);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(26,0.4353991);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(27,0.145133);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(28,0.145133);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(31,0.145133);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(1,0.7815653);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(2,1.422008);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(3,1.429395);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(4,1.086076);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(5,0.8586186);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(6,0.8337258);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(7,0.7541334);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(8,0.7949264);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(9,0.7256652);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(10,0.6326202);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(11,0.458951);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(12,0.7256652);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(13,0.5983988);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(14,0.6807343);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(15,0.458951);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(16,0.5232846);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(17,0.458951);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(18,0.4353991);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(19,0.3555019);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(20,0.4353991);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(21,0.2902661);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(22,0.3555019);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(23,0.2052491);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(25,0.2052491);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(26,0.2513778);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(27,0.145133);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(28,0.145133);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(31,0.145133);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetEntries(598);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_dR_Bj0_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_7->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_7,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_8 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_8","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(1,4.482554);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(2,11.01961);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(3,14.75507);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(4,8.404788);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(5,6.537057);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(6,4.295781);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(7,3.922234);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(8,3.735461);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(9,2.988369);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(10,3.175142);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(11,2.241277);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(12,1.680958);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(13,2.801596);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(14,2.988369);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(15,2.42805);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(16,1.494185);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(17,0.3735461);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(18,0.9338654);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(19,0.7470923);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(20,0.7470923);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(21,0.1867731);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(22,1.120638);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(23,0.3735461);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(24,0.7470923);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(25,0.1867731);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(26,0.1867731);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(27,0.1867731);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(28,0.1867731);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(31,0.1867731);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(1,0.9149974);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(2,1.434631);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(3,1.660075);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(4,1.252912);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(5,1.104964);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(6,0.8957322);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(7,0.8559017);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(8,0.8352746);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(9,0.7470923);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(10,0.7700851);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(11,0.6470009);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(12,0.5603192);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(13,0.723369);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(14,0.7470923);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(15,0.6734199);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(16,0.528274);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(17,0.264137);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(18,0.4176373);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(19,0.3735461);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(20,0.3735461);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(21,0.1867731);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(22,0.4574987);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(23,0.264137);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(24,0.3735461);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(25,0.1867731);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(26,0.1867731);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(27,0.1867731);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(28,0.1867731);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(31,0.1867731);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetEntries(445);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_H_dR_Bj0_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_8->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_8,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_9 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_9","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(1,2.496971);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(2,9.504963);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(3,9.409671);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(4,6.202049);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(5,4.249373);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(6,3.204392);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(7,2.702091);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(8,2.267624);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(9,2.151336);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(10,1.841233);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(11,1.86869);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(12,1.842848);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(13,1.603811);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(14,1.529516);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(15,1.203262);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(16,0.9690701);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(17,0.7558747);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(18,0.5782118);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(19,0.5152223);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(20,0.4522327);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(21,0.3553257);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(22,0.3117176);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(23,0.2535733);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(24,0.2293466);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(25,0.1873536);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(26,0.1195186);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(27,0.09690701);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(28,0.04037792);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(29,0.04037792);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(30,0.01292094);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(31,0.03553257);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(1,0.06350511);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(2,0.1239017);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(3,0.123279);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(4,0.1000851);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(5,0.08284463);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(6,0.07194072);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(7,0.06606203);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(8,0.06051841);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(9,0.05894623);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(10,0.05453262);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(11,0.05493772);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(12,0.05455653);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(13,0.05089541);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(14,0.04970258);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(15,0.04408411);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(16,0.03956212);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(17,0.03494032);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(18,0.03055945);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(19,0.02884691);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(20,0.02702607);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(21,0.02395605);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(22,0.02243792);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(23,0.02023736);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(24,0.01924634);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(25,0.01739534);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(26,0.01389376);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(27,0.01251064);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(28,0.008075584);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(29,0.008075584);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(30,0.00456824);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(31,0.00757557);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetEntries(35311);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_H_dR_Bj0_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_9->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_9,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_10 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_10","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(1,1.914326);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(2,7.670572);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(3,7.917689);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(4,5.873585);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(5,4.120549);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(6,3.152398);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(7,2.528801);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(8,2.289562);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(9,2.038299);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(10,1.82684);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(11,1.692501);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(12,1.614137);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(13,1.44497);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(14,1.299851);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(15,1.154732);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(16,1.016247);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(17,0.8130807);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(18,0.6824736);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(19,0.5630615);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(20,0.4701854);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(21,0.399699);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(22,0.3200909);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(23,0.275726);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(24,0.1969471);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(25,0.1592162);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(26,0.1297778);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(27,0.0779496);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(28,0.0551452);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(29,0.03192617);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(30,0.01575577);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(31,0.03441392);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(1,0.02817319);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(2,0.05639517);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(3,0.05729639);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(4,0.04934915);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(5,0.04133382);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(6,0.03615335);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(7,0.03238064);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(8,0.03081089);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(9,0.02907113);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(10,0.02752189);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(11,0.02649065);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(12,0.02587011);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(13,0.02447696);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(14,0.02321533);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(15,0.02188107);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(16,0.0205271);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(17,0.01836094);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(18,0.01682174);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(19,0.01527939);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(20,0.01396248);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(21,0.01287344);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(22,0.01152032);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(23,0.01069219);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(24,0.009036554);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(25,0.008124968);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(26,0.007335475);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(27,0.005685059);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(28,0.004781695);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(29,0.003638324);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(30,0.002555923);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(31,0.003777418);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetEntries(124885);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_H_dR_Bj0_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_10->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_10,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_11 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_11","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(1,0.04108653);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(2,0.2812847);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(3,0.3302725);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(4,0.2575809);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(5,0.1785684);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(6,0.1153583);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(7,0.06637055);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(8,0.05846929);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(9,0.05214829);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(10,0.04582728);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(11,0.04424703);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(12,0.02844452);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(13,0.04424703);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(14,0.03476553);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(15,0.02370377);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(16,0.02212352);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(17,0.01106176);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(18,0.007901256);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(19,0.007901256);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(20,0.009481507);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(21,0.01422226);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(22,0.01264201);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(23,0.01106176);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(24,0.009481507);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(25,0.003160502);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(26,0.003160502);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(27,0.003160502);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(29,0.001580251);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(1,0.008057731);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(2,0.02108318);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(3,0.02284543);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(4,0.0201753);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(5,0.0167983);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(6,0.01350167);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(7,0.0102412);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(8,0.009612292);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(9,0.009077852);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(10,0.008509913);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(11,0.008361903);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(12,0.006704438);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(13,0.008361903);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(14,0.007412035);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(15,0.006120286);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(16,0.005912758);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(17,0.004180952);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(18,0.003533549);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(19,0.003533549);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(20,0.003870809);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(21,0.004740753);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(22,0.004469625);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(23,0.004180952);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(24,0.003870809);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(25,0.002234813);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(26,0.002234813);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(27,0.002234813);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(29,0.001580251);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetEntries(1088);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_Bj0_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_11->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_11,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_12 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_12","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(1,0.01868451);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(2,0.1127299);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(3,0.1480228);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(4,0.1272623);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(5,0.0807586);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(6,0.0622817);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(7,0.04131353);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(8,0.03467014);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(9,0.02802676);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(10,0.02491268);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(11,0.0184769);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(12,0.02096817);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(13,0.01785409);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(14,0.01494761);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(15,0.01370197);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(16,0.01328676);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(17,0.007473804);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(18,0.009342254);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(19,0.008927043);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(20,0.004982536);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(21,0.00954986);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(22,0.007058592);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(23,0.003944507);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(24,0.002698874);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(25,0.003114085);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(26,0.002283662);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(27,0.0004152113);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(28,0.001038028);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(29,0.000622817);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(31,0.0002076057);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(1,0.00196952);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(2,0.004837702);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(3,0.005543499);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(4,0.005140075);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(5,0.004094624);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(6,0.003595835);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(7,0.002928638);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(8,0.002682856);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(9,0.00241216);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(10,0.002274206);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(11,0.001958548);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(12,0.002086411);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(13,0.001925256);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(14,0.001761592);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(15,0.001686596);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(16,0.001660845);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(17,0.001245634);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(18,0.001392661);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(19,0.001361361);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(20,0.001017056);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(21,0.00140805);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(22,0.001210539);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(23,0.0009049321);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(24,0.0007485328);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(25,0.0008040532);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(26,0.0006885501);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(27,0.0002935987);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(28,0.0004642204);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(29,0.0003595835);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(31,0.0002076057);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetEntries(4044);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_dR_Bj0_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_12->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_H_dR_Bj0__83 = new TH1D("VbbHcc_tags_H_dR_Bj0__83","",30,0,6);
   VbbHcc_tags_H_dR_Bj0__83->SetBinContent(1,19216);
   VbbHcc_tags_H_dR_Bj0__83->SetBinContent(2,58741);
   VbbHcc_tags_H_dR_Bj0__83->SetBinContent(3,59901);
   VbbHcc_tags_H_dR_Bj0__83->SetBinContent(4,48903);
   VbbHcc_tags_H_dR_Bj0__83->SetBinContent(5,40913);
   VbbHcc_tags_H_dR_Bj0__83->SetBinContent(6,33887);
   VbbHcc_tags_H_dR_Bj0__83->SetBinContent(7,29141);
   VbbHcc_tags_H_dR_Bj0__83->SetBinContent(8,25000);
   VbbHcc_tags_H_dR_Bj0__83->SetBinContent(9,22064);
   VbbHcc_tags_H_dR_Bj0__83->SetBinContent(10,20398);
   VbbHcc_tags_H_dR_Bj0__83->SetBinContent(11,18973);
   VbbHcc_tags_H_dR_Bj0__83->SetBinContent(12,17392);
   VbbHcc_tags_H_dR_Bj0__83->SetBinContent(13,16317);
   VbbHcc_tags_H_dR_Bj0__83->SetBinContent(14,14775);
   VbbHcc_tags_H_dR_Bj0__83->SetBinContent(15,13822);
   VbbHcc_tags_H_dR_Bj0__83->SetBinContent(16,12199);
   VbbHcc_tags_H_dR_Bj0__83->SetBinContent(17,10113);
   VbbHcc_tags_H_dR_Bj0__83->SetBinContent(18,8431);
   VbbHcc_tags_H_dR_Bj0__83->SetBinContent(19,7075);
   VbbHcc_tags_H_dR_Bj0__83->SetBinContent(20,6207);
   VbbHcc_tags_H_dR_Bj0__83->SetBinContent(21,5113);
   VbbHcc_tags_H_dR_Bj0__83->SetBinContent(22,4390);
   VbbHcc_tags_H_dR_Bj0__83->SetBinContent(23,3450);
   VbbHcc_tags_H_dR_Bj0__83->SetBinContent(24,2846);
   VbbHcc_tags_H_dR_Bj0__83->SetBinContent(25,2210);
   VbbHcc_tags_H_dR_Bj0__83->SetBinContent(26,1698);
   VbbHcc_tags_H_dR_Bj0__83->SetBinContent(27,1291);
   VbbHcc_tags_H_dR_Bj0__83->SetBinContent(28,949);
   VbbHcc_tags_H_dR_Bj0__83->SetBinContent(29,605);
   VbbHcc_tags_H_dR_Bj0__83->SetBinContent(30,441);
   VbbHcc_tags_H_dR_Bj0__83->SetBinContent(31,709);
   VbbHcc_tags_H_dR_Bj0__83->SetEntries(507199);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0__83->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0__83->SetLineWidth(2);
   VbbHcc_tags_H_dR_Bj0__83->SetMarkerStyle(20);
   VbbHcc_tags_H_dR_Bj0__83->SetMarkerSize(1.2);
   VbbHcc_tags_H_dR_Bj0__83->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0__83->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0__83->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0__83->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0__83->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0__83->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0__83->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0__83->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0__83->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0__83->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0__83->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0__83->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0__83->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0__83->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0__83->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj0_fx1083[30] = {
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
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj0_fy1083[30] = {
   60494.3,
   205009.1,
   207828.4,
   180786.3,
   133512.1,
   109874.8,
   102752.9,
   83856.03,
   94653.11,
   71875.62,
   60579.87,
   63229.13,
   64472.72,
   54031.04,
   47106.55,
   58533.33,
   29589.89,
   25827.86,
   38325.98,
   20280.71,
   14932.11,
   12280.88,
   10881.32,
   8481.545,
   7443.181,
   4642.235,
   3736.425,
   2517.306,
   1414.573,
   1122.303};
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj0_fex1083[30] = {
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
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj0_fey1083[30] = {
   1653.237,
   4379.114,
   4857.305,
   15072.69,
   3807.106,
   3484.124,
   4547.902,
   3491.02,
   14781.46,
   2700.315,
   2923.823,
   2678.894,
   3241.483,
   2511.638,
   2324.769,
   14695.59,
   1394.522,
   1340.754,
   14580.65,
   1344.543,
   1048.173,
   975.0292,
   1446.301,
   824.5565,
   784.3307,
   533.6069,
   577.3065,
   380.1597,
   270.9651,
   264.3323};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_H_dR_Bj0_fx1083,Graph_from_VbbHcc_tags_H_dR_Bj0_fy1083,Graph_from_VbbHcc_tags_H_dR_Bj0_fex1083,Graph_from_VbbHcc_tags_H_dR_Bj0_fey1083);
   gre->SetName("Graph_from_VbbHcc_tags_H_dR_Bj0");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_H_dR_Bj01083 = new TH1F("Graph_Graph_from_VbbHcc_tags_H_dR_Bj01083","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01083->SetMinimum(772.1732);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01083->SetMaximum(233868.5);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01083->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01083->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01083->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01083->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01083->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01083->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01083->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01083->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01083->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01083->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01083->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01083->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01083->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01083->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01083->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01083->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_H_dR_Bj01083);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_H_dR_Bj0","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_dR_Bj0_tags_17->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.9193524,-0.2774193,6.314516,1.658065);
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
   
   TH1D *data_mc_ratio__84 = new TH1D("data_mc_ratio__84","",30,0,6);
   data_mc_ratio__84->SetBinContent(1,0.3176497);
   data_mc_ratio__84->SetBinContent(2,0.2865287);
   data_mc_ratio__84->SetBinContent(3,0.2882233);
   data_mc_ratio__84->SetBinContent(4,0.2705018);
   data_mc_ratio__84->SetBinContent(5,0.3064367);
   data_mc_ratio__84->SetBinContent(6,0.3084147);
   data_mc_ratio__84->SetBinContent(7,0.2836026);
   data_mc_ratio__84->SetBinContent(8,0.29813);
   data_mc_ratio__84->SetBinContent(9,0.2331038);
   data_mc_ratio__84->SetBinContent(10,0.2837958);
   data_mc_ratio__84->SetBinContent(11,0.3131899);
   data_mc_ratio__84->SetBinContent(12,0.2750631);
   data_mc_ratio__84->SetBinContent(13,0.2530838);
   data_mc_ratio__84->SetBinContent(14,0.2734539);
   data_mc_ratio__84->SetBinContent(15,0.2934199);
   data_mc_ratio__84->SetBinContent(16,0.2084112);
   data_mc_ratio__84->SetBinContent(17,0.3417721);
   data_mc_ratio__84->SetBinContent(18,0.3264304);
   data_mc_ratio__84->SetBinContent(19,0.1846006);
   data_mc_ratio__84->SetBinContent(20,0.3060544);
   data_mc_ratio__84->SetBinContent(21,0.3424165);
   data_mc_ratio__84->SetBinContent(22,0.3574662);
   data_mc_ratio__84->SetBinContent(23,0.3170571);
   data_mc_ratio__84->SetBinContent(24,0.3355521);
   data_mc_ratio__84->SetBinContent(25,0.296916);
   data_mc_ratio__84->SetBinContent(26,0.3657721);
   data_mc_ratio__84->SetBinContent(27,0.3455174);
   data_mc_ratio__84->SetBinContent(28,0.3769903);
   data_mc_ratio__84->SetBinContent(29,0.427691);
   data_mc_ratio__84->SetBinContent(30,0.3929422);
   data_mc_ratio__84->SetBinContent(31,0.3055805);
   data_mc_ratio__84->SetBinError(1,0.002291485);
   data_mc_ratio__84->SetBinError(2,0.001182218);
   data_mc_ratio__84->SetBinError(3,0.001177639);
   data_mc_ratio__84->SetBinError(4,0.001223214);
   data_mc_ratio__84->SetBinError(5,0.001514991);
   data_mc_ratio__84->SetBinError(6,0.0016754);
   data_mc_ratio__84->SetBinError(7,0.001661338);
   data_mc_ratio__84->SetBinError(8,0.00188554);
   data_mc_ratio__84->SetBinError(9,0.001569305);
   data_mc_ratio__84->SetBinError(10,0.001987066);
   data_mc_ratio__84->SetBinError(11,0.002273734);
   data_mc_ratio__84->SetBinError(12,0.002085728);
   data_mc_ratio__84->SetBinError(13,0.001981272);
   data_mc_ratio__84->SetBinError(14,0.002249678);
   data_mc_ratio__84->SetBinError(15,0.002495768);
   data_mc_ratio__84->SetBinError(16,0.001886943);
   data_mc_ratio__84->SetBinError(17,0.003398573);
   data_mc_ratio__84->SetBinError(18,0.003555094);
   data_mc_ratio__84->SetBinError(19,0.002194674);
   data_mc_ratio__84->SetBinError(20,0.003884703);
   data_mc_ratio__84->SetBinError(21,0.00478869);
   data_mc_ratio__84->SetBinError(22,0.005395139);
   data_mc_ratio__84->SetBinError(23,0.005397939);
   data_mc_ratio__84->SetBinError(24,0.006289881);
   data_mc_ratio__84->SetBinError(25,0.006315933);
   data_mc_ratio__84->SetBinError(26,0.008876499);
   data_mc_ratio__84->SetBinError(27,0.009616274);
   data_mc_ratio__84->SetBinError(28,0.01223762);
   data_mc_ratio__84->SetBinError(29,0.01738811);
   data_mc_ratio__84->SetBinError(30,0.01871153);
   data_mc_ratio__84->SetBinError(31,0.06835731);
   data_mc_ratio__84->SetMinimum(0.4);
   data_mc_ratio__84->SetMaximum(1.6);
   data_mc_ratio__84->SetEntries(2034.866);
   data_mc_ratio__84->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__84->SetLineColor(ci);
   data_mc_ratio__84->SetLineWidth(2);
   data_mc_ratio__84->SetMarkerStyle(20);
   data_mc_ratio__84->SetMarkerSize(1.2);
   data_mc_ratio__84->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   data_mc_ratio__84->GetXaxis()->SetRange(1,30);
   data_mc_ratio__84->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__84->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__84->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__84->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__84->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__84->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__84->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__84->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__84->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__84->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__84->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__84->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__84->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__84->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__84->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__84->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__84->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1084[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1084[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1084[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1084[30] = {
   0.02732881,
   0.02136058,
   0.02337171,
   0.08337301,
   0.02851508,
   0.03170995,
   0.04426055,
   0.04163112,
   0.1561645,
   0.03756927,
   0.04826394,
   0.04236804,
   0.05027682,
   0.04648509,
   0.04935129,
   0.2510637,
   0.04712831,
   0.05191115,
   0.3804377,
   0.06629663,
   0.07019589,
   0.07939407,
   0.1329159,
   0.09721772,
   0.1053757,
   0.1149461,
   0.1545077,
   0.1510185,
   0.1915526,
   0.2355268};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1084,Graph_from_mc_statistical_error_fy1084,Graph_from_mc_statistical_error_fex1084,Graph_from_mc_statistical_error_fey1084);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1084 = new TH1F("Graph_Graph_from_mc_statistical_error1084","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1084->SetMinimum(0.5434747);
   Graph_Graph_from_mc_statistical_error1084->SetMaximum(1.456525);
   Graph_Graph_from_mc_statistical_error1084->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1084->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1084->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1084->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1084->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1084->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1084->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1084->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1084->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1084->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1084->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1084->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1084->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1084->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1084->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1084->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1084);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj0_tags_17->cd();
   H_dR_Bj0_tags_17->Modified();
   H_dR_Bj0_tags_17->cd();
   H_dR_Bj0_tags_17->SetSelected(H_dR_Bj0_tags_17);
}

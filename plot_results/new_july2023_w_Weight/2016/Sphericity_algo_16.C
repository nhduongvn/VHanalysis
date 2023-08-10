void Sphericity_algo_16()
{
//=========Macro generated from canvas: Sphericity_algo_16/Sphericity_algo_16
//=========  (Thu Aug 10 10:42:27 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_16 = new TCanvas("Sphericity_algo_16", "Sphericity_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_16->SetHighLightColor(2);
   Sphericity_algo_16->Range(0,0,1,1);
   Sphericity_algo_16->SetFillColor(0);
   Sphericity_algo_16->SetFillStyle(4000);
   Sphericity_algo_16->SetBorderMode(0);
   Sphericity_algo_16->SetBorderSize(2);
   Sphericity_algo_16->SetFrameFillStyle(1000);
   Sphericity_algo_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-2.962995,1.052419,16.09832);
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
   st->SetMaximum(3.782361e+13);
   
   TH1F *st_stack_153 = new TH1F("st_stack_153","",25,0,1);
   st_stack_153->SetMinimum(0.001137801);
   st_stack_153->SetMaximum(1.556651e+14);
   st_stack_153->SetDirectory(0);
   st_stack_153->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_153->SetLineColor(ci);
   st_stack_153->GetXaxis()->SetRange(1,25);
   st_stack_153->GetXaxis()->SetLabelFont(42);
   st_stack_153->GetXaxis()->SetLabelSize(0.035);
   st_stack_153->GetXaxis()->SetTitleSize(0.035);
   st_stack_153->GetXaxis()->SetTitleFont(42);
   st_stack_153->GetYaxis()->SetTitle("Events/0.04");
   st_stack_153->GetYaxis()->SetLabelFont(42);
   st_stack_153->GetYaxis()->SetLabelSize(0.05);
   st_stack_153->GetYaxis()->SetTitleSize(0.057);
   st_stack_153->GetYaxis()->SetTitleOffset(1.2);
   st_stack_153->GetYaxis()->SetTitleFont(42);
   st_stack_153->GetZaxis()->SetLabelFont(42);
   st_stack_153->GetZaxis()->SetLabelSize(0.035);
   st_stack_153->GetZaxis()->SetTitleSize(0.035);
   st_stack_153->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_153);
   
   
   TH1D *VbbHcc_algo_Sphericity_stack_1 = new TH1D("VbbHcc_algo_Sphericity_stack_1","",25,0,1);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(1,1142728);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(2,1104736);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(3,635642.8);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(4,363035.3);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(5,162699);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(6,66063.53);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(7,23732.33);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(8,5240.581);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(9,1174.65);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(10,1101.702);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(11,313.7421);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(12,140.7475);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(13,198.6813);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(14,451.2992);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(15,31.93672);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(16,27.95255);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(17,209.0043);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(18,53.60411);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(19,11.14979);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(20,9.455896);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(1,26913.86);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(2,29990.75);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(3,26830.65);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(4,24996.51);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(5,7574.027);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(6,4442.461);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(7,3407.684);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(8,957.2133);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(9,210.741);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(10,416.9737);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(11,74.5654);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(12,47.69336);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(13,73.28076);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(14,323.3683);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(15,17.23774);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(16,10.83033);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(17,166.3057);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(18,26.55637);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(19,8.21804);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(20,6.835582);
   VbbHcc_algo_Sphericity_stack_1->SetEntries(131372);

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
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(1,7301.436);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(2,7134.581);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(3,3971.896);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(4,2207.142);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(5,1141.286);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(6,534.3497);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(7,216.35);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(8,93.0239);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(9,45.41038);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(10,28.55633);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(11,15.33119);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(12,12.74528);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(13,8.030735);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(14,5.065261);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(15,2.655765);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(16,2.913127);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(17,2.470058);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(18,1.387546);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(19,0.4745445);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(20,0.02096486);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(22,0.02438775);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(1,34.74041);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(2,34.05343);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(3,25.64169);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(4,19.23625);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(5,13.83622);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(6,9.473468);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(7,6.018518);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(8,3.853392);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(9,2.681665);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(10,2.219436);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(11,1.586372);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(12,1.55478);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(13,1.164041);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(14,0.8659304);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(15,0.6245483);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(16,0.7178181);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(17,0.6467351);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(18,0.553061);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(19,0.3266309);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(20,0.05692141);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(22,0.02438775);
   VbbHcc_algo_Sphericity_stack_2->SetEntries(347069);

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
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(1,130203.9);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(2,136199.8);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(3,71214.58);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(4,38206.89);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(5,20134.73);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(6,9677.876);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(7,4223.295);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(8,1863.978);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(9,922.1332);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(10,485.4136);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(11,275.4087);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(12,168.0097);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(13,97.58698);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(14,70.45744);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(15,45.43365);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(16,29.87089);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(17,19.33545);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(18,11.75666);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(19,8.20028);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(20,2.869233);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(21,1.252368);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(22,0.3647943);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(1,95.09094);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(2,97.61912);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(3,70.52458);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(4,51.59907);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(5,37.36435);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(6,25.73714);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(7,16.81276);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(8,10.99775);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(9,7.653677);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(10,5.48051);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(11,4.089535);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(12,3.188758);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(13,2.407111);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(14,2.021008);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(15,1.619293);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(16,1.316249);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(17,1.044665);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(18,0.8052744);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(19,0.6928813);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(20,0.4178918);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(21,0.2635535);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(22,0.1534472);
   VbbHcc_algo_Sphericity_stack_3->SetEntries(6426049);

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
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(1,5065.928);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(2,5042.938);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(3,2795.491);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(4,1634.558);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(5,844.0292);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(6,355.3622);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(7,102.0488);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(8,43.4428);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(9,9.506824);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(10,5.889396);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(11,2.957155);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(12,3.517669);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(13,2.075384);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(14,0.7221222);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(15,4.242717);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(16,0.5806589);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(17,0.2794018);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(18,0.5062305);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(19,0.09168719);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(1,60.21976);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(2,68.22827);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(3,48.522);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(4,35.88387);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(5,24.74921);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(6,14.758);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(7,6.386355);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(8,5.897896);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(9,1.321998);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(10,1.109285);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(11,0.6434283);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(12,0.8664238);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(13,0.5718514);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(14,0.2550302);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(15,2.898579);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(16,0.2394471);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(17,0.1203822);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(18,0.2882263);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(19,0.06683991);
   VbbHcc_algo_Sphericity_stack_4->SetEntries(94081);

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
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(1,2757.342);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(2,2413.455);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(3,1433.164);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(4,822.5455);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(5,353.015);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(6,171.3558);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(7,64.36198);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(8,11.8121);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(9,11.1458);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(10,4.110096);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(11,3.249933);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(12,9.187824);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(13,0.9644613);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(14,1.003292);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(15,0.4710043);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(16,0.1189731);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(17,0.03554996);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(18,5.009395e-06);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(19,0.07941791);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(1,69.41049);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(2,69.29677);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(3,54.19188);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(4,38.5361);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(5,18.39916);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(6,13.07543);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(7,11.23929);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(8,1.738127);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(9,6.881178);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(10,1.107636);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(11,1.571535);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(12,6.703341);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(13,0.5518289);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(14,0.5659369);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(15,0.2231431);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(16,0.07034533);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(17,0.03088846);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(18,5.009395e-06);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(19,0.07941791);
   VbbHcc_algo_Sphericity_stack_5->SetEntries(65948);

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
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(1,28.52394);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(2,22.74259);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(3,12.04782);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(4,8.540997);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(5,4.931285);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(6,2.351284);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(7,0.7981229);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(8,0.1472598);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(9,0.1370544);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(10,0.09641758);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(11,0.1380529);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(1,2.027147);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(2,1.802176);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(3,1.317507);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(4,1.103824);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(5,0.8489591);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(6,0.583242);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(7,0.3300766);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(8,0.1472598);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(9,0.1370544);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(10,0.09641758);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(11,0.1380529);
   VbbHcc_algo_Sphericity_stack_6->SetEntries(573);

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
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(1,44.85286);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(2,41.93575);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(3,22.70821);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(4,12.28758);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(5,7.305431);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(6,2.736304);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(7,1.855066);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(8,0.3944345);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(9,0.1142889);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(13,0.04629735);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(1,2.293464);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(2,2.212447);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(3,1.635162);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(4,1.200451);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(5,0.9322589);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(6,0.5655922);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(7,0.466419);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(8,0.2104141);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(9,0.1142889);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(13,0.04629735);
   VbbHcc_algo_Sphericity_stack_7->SetEntries(1163);

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
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(1,54.88025);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(2,52.61135);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(3,30.83278);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(4,16.53763);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(5,10.88238);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(6,4.235181);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(7,1.036447);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(8,0.2697056);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(10,0.4983592);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(11,0.2581091);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(1,3.7983);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(2,3.71482);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(3,2.847544);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(4,2.079195);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(5,1.678168);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(6,1.06125);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(7,0.5183597);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(8,0.2697056);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(10,0.3526502);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(11,0.2581091);
   VbbHcc_algo_Sphericity_stack_8->SetEntries(665);

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
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(1,31.23823);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(2,32.00733);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(3,17.67655);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(4,11.30247);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(5,6.89567);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(6,3.309142);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(7,0.9246707);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(8,0.220727);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(9,0.0804721);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(10,0.0433605);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(11,0.0217764);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(12,0.01428863);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(13,0.005512587);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(14,0.002161976);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(15,0.001615869);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(17,0.001246104);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(19,0.001622014);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(1,0.219029);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(2,0.2217917);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(3,0.1647561);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(4,0.1319614);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(5,0.1034362);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(6,0.07119978);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(7,0.03743353);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(8,0.01808049);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(9,0.0108316);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(10,0.007865791);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(11,0.005583132);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(12,0.004374936);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(13,0.002554512);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(14,0.001654391);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(15,0.001615869);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(17,0.001246104);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(19,0.001622014);
   VbbHcc_algo_Sphericity_stack_9->SetEntries(72116);

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
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(1,13.02712);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(2,13.21019);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(3,7.431323);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(4,4.534509);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(5,2.56704);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(6,1.208091);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(7,0.4007133);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(8,0.1403584);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(9,0.04861228);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(10,0.0338279);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(11,0.01521119);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(12,0.009011842);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(13,0.0079501);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(14,0.003377737);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(15,0.003201847);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(16,0.001580677);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(17,0.002418743);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(18,0.001114555);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(19,0.001058164);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(1,0.07091679);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(2,0.07149165);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(3,0.0536131);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(4,0.04190961);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(5,0.03150131);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(6,0.0216081);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(7,0.01238212);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(8,0.007268497);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(9,0.004230796);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(10,0.003510226);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(11,0.002350489);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(12,0.001753106);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(13,0.001681839);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(14,0.001011848);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(15,0.0009709692);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(16,0.0006867853);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(17,0.00092183);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(18,0.0006490287);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(19,0.0005317288);
   VbbHcc_algo_Sphericity_stack_10->SetEntries(112076);

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
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(1,0.3125239);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(2,0.3339816);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(3,0.1608698);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(4,0.09493299);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(5,0.09393967);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(6,0.03491053);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(7,0.009609629);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(1,0.03069421);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(2,0.03136246);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(3,0.02173111);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(4,0.01716465);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(5,0.01764487);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(6,0.01008039);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(7,0.005149791);
   VbbHcc_algo_Sphericity_stack_11->SetEntries(376);

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
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(1,0.1359272);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(2,0.1272278);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(3,0.07057416);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(4,0.04679318);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(5,0.02443637);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(6,0.01327866);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(7,0.005049081);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(8,0.001428456);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(9,0.0004284568);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(10,0.0007554533);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(11,0.0002424816);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(13,0.0003021276);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(1,0.007230528);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(2,0.006981378);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(3,0.005222638);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(4,0.004211542);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(5,0.003054049);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(6,0.002262873);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(7,0.001370952);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(8,0.0007180681);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(9,0.0004284568);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(10,0.0005345432);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(11,0.0002424816);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(13,0.0003021276);
   VbbHcc_algo_Sphericity_stack_12->SetEntries(1132);

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
   
   TH1D *VbbHcc_algo_Sphericity__419 = new TH1D("VbbHcc_algo_Sphericity__419","",25,0,1);
   VbbHcc_algo_Sphericity__419->SetBinContent(1,294375);
   VbbHcc_algo_Sphericity__419->SetBinContent(2,256314);
   VbbHcc_algo_Sphericity__419->SetBinContent(3,145698);
   VbbHcc_algo_Sphericity__419->SetBinContent(4,82300);
   VbbHcc_algo_Sphericity__419->SetBinContent(5,43890);
   VbbHcc_algo_Sphericity__419->SetBinContent(6,19964);
   VbbHcc_algo_Sphericity__419->SetBinContent(7,7547);
   VbbHcc_algo_Sphericity__419->SetBinContent(8,2878);
   VbbHcc_algo_Sphericity__419->SetBinContent(9,1233);
   VbbHcc_algo_Sphericity__419->SetBinContent(10,686);
   VbbHcc_algo_Sphericity__419->SetBinContent(11,385);
   VbbHcc_algo_Sphericity__419->SetBinContent(12,267);
   VbbHcc_algo_Sphericity__419->SetBinContent(13,149);
   VbbHcc_algo_Sphericity__419->SetBinContent(14,112);
   VbbHcc_algo_Sphericity__419->SetBinContent(15,90);
   VbbHcc_algo_Sphericity__419->SetBinContent(16,62);
   VbbHcc_algo_Sphericity__419->SetBinContent(17,40);
   VbbHcc_algo_Sphericity__419->SetBinContent(18,24);
   VbbHcc_algo_Sphericity__419->SetBinContent(19,23);
   VbbHcc_algo_Sphericity__419->SetBinContent(20,8);
   VbbHcc_algo_Sphericity__419->SetBinContent(21,3);
   VbbHcc_algo_Sphericity__419->SetEntries(856072);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity__419->SetLineColor(ci);
   VbbHcc_algo_Sphericity__419->SetLineWidth(2);
   VbbHcc_algo_Sphericity__419->SetMarkerStyle(20);
   VbbHcc_algo_Sphericity__419->SetMarkerSize(1.2);
   VbbHcc_algo_Sphericity__419->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity__419->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__419->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity__419->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity__419->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__419->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__419->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity__419->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity__419->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity__419->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__419->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__419->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity__419->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity__419->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__419->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Sphericity_fx1305[25] = {
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
   Double_t Graph_from_VbbHcc_algo_Sphericity_fy1305[25] = {
   1288230,
   1255690,
   715148.8,
   405959.7,
   185204.7,
   76816.36,
   28343.42,
   7254.011,
   2163.227,
   1626.344,
   611.1225,
   334.2313,
   307.3989,
   528.5528,
   84.74468,
   61.43778,
   231.1284,
   67.25566,
   19.9984,
   12.34609,
   1.252368,
   0.389182,
   0,
   0,
   0};
   Double_t Graph_from_VbbHcc_algo_Sphericity_fex1305[25] = {
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
   Double_t Graph_from_VbbHcc_algo_Sphericity_fey1305[25] = {
   26914.21,
   29991.08,
   26830.85,
   24996.62,
   7574.195,
   4442.59,
   3407.756,
   957.304,
   211.0134,
   417.0187,
   74.71418,
   48.30038,
   73.33384,
   323.3763,
   17.56711,
   10.93646,
   166.3103,
   26.5759,
   8.254316,
   6.84858,
   0.2635535,
   0.1553731,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_VbbHcc_algo_Sphericity_fx1305,Graph_from_VbbHcc_algo_Sphericity_fy1305,Graph_from_VbbHcc_algo_Sphericity_fex1305,Graph_from_VbbHcc_algo_Sphericity_fey1305);
   gre->SetName("Graph_from_VbbHcc_algo_Sphericity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Sphericity1305 = new TH1F("Graph_Graph_from_VbbHcc_algo_Sphericity1305","",100,0,1.1);
   Graph_Graph_from_VbbHcc_algo_Sphericity1305->SetMinimum(1446.658);
   Graph_Graph_from_VbbHcc_algo_Sphericity1305->SetMaximum(1446658);
   Graph_Graph_from_VbbHcc_algo_Sphericity1305->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_Sphericity1305->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Sphericity1305->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Sphericity1305->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Sphericity1305->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity1305->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity1305->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Sphericity1305->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Sphericity1305->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity1305->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity1305->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_Sphericity1305->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Sphericity1305->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Sphericity1305->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity1305->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity1305->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Sphericity1305);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Sphericity","Data (JetHT, 2016)","p");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Sphericity_algo_16->cd();
  
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
   
   TH1D *data_mc_ratio__420 = new TH1D("data_mc_ratio__420","",25,0,1);
   data_mc_ratio__420->SetBinContent(1,0.2285112);
   data_mc_ratio__420->SetBinContent(2,0.204122);
   data_mc_ratio__420->SetBinContent(3,0.203731);
   data_mc_ratio__420->SetBinContent(4,0.2027295);
   data_mc_ratio__420->SetBinContent(5,0.236981);
   data_mc_ratio__420->SetBinContent(6,0.2598925);
   data_mc_ratio__420->SetBinContent(7,0.2662699);
   data_mc_ratio__420->SetBinContent(8,0.396746);
   data_mc_ratio__420->SetBinContent(9,0.5699817);
   data_mc_ratio__420->SetBinContent(10,0.421805);
   data_mc_ratio__420->SetBinContent(11,0.6299883);
   data_mc_ratio__420->SetBinContent(12,0.798848);
   data_mc_ratio__420->SetBinContent(13,0.4847122);
   data_mc_ratio__420->SetBinContent(14,0.2118993);
   data_mc_ratio__420->SetBinContent(15,1.062014);
   data_mc_ratio__420->SetBinContent(16,1.009151);
   data_mc_ratio__420->SetBinContent(17,0.173064);
   data_mc_ratio__420->SetBinContent(18,0.3568473);
   data_mc_ratio__420->SetBinContent(19,1.150092);
   data_mc_ratio__420->SetBinContent(20,0.6479783);
   data_mc_ratio__420->SetBinContent(21,2.395462);
   data_mc_ratio__420->SetBinError(1,0.0004211697);
   data_mc_ratio__420->SetBinError(2,0.0004031844);
   data_mc_ratio__420->SetBinError(3,0.0005337408);
   data_mc_ratio__420->SetBinError(4,0.0007066705);
   data_mc_ratio__420->SetBinError(5,0.001131177);
   data_mc_ratio__420->SetBinError(6,0.001839374);
   data_mc_ratio__420->SetBinError(7,0.003065032);
   data_mc_ratio__420->SetBinError(8,0.007395494);
   data_mc_ratio__420->SetBinError(9,0.01623228);
   data_mc_ratio__420->SetBinError(10,0.01610459);
   data_mc_ratio__420->SetBinError(11,0.03210718);
   data_mc_ratio__420->SetBinError(12,0.04888871);
   data_mc_ratio__420->SetBinError(13,0.03970917);
   data_mc_ratio__420->SetBinError(14,0.02002261);
   data_mc_ratio__420->SetBinError(15,0.1119461);
   data_mc_ratio__420->SetBinError(16,0.1281623);
   data_mc_ratio__420->SetBinError(17,0.02736382);
   data_mc_ratio__420->SetBinError(18,0.07284114);
   data_mc_ratio__420->SetBinError(19,0.2398108);
   data_mc_ratio__420->SetBinError(20,0.2290949);
   data_mc_ratio__420->SetBinError(21,1.38302);
   data_mc_ratio__420->SetMinimum(0.4);
   data_mc_ratio__420->SetMaximum(1.6);
   data_mc_ratio__420->SetEntries(49.65429);
   data_mc_ratio__420->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__420->SetLineColor(ci);
   data_mc_ratio__420->SetLineWidth(2);
   data_mc_ratio__420->SetMarkerStyle(20);
   data_mc_ratio__420->SetMarkerSize(1.2);
   data_mc_ratio__420->GetXaxis()->SetTitle("Sphericity");
   data_mc_ratio__420->GetXaxis()->SetRange(1,25);
   data_mc_ratio__420->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__420->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__420->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__420->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__420->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__420->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__420->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__420->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__420->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__420->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__420->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__420->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__420->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__420->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__420->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__420->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__420->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1306[25] = {
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
   Double_t Graph_from_mc_statistical_error_fy1306[25] = {
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
   Double_t Graph_from_mc_statistical_error_fex1306[25] = {
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
   Double_t Graph_from_mc_statistical_error_fey1306[25] = {
   0.0208924,
   0.02388415,
   0.03751785,
   0.06157414,
   0.04089634,
   0.0578339,
   0.1202309,
   0.1319689,
   0.09754565,
   0.2564149,
   0.1222573,
   0.1445119,
   0.2385625,
   0.6118146,
   0.2072945,
   0.1780087,
   0.7195582,
   0.3951473,
   0.4127489,
   0.5547164,
   0.2104441,
   0.39923,
   0,
   0,
   0};
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1306,Graph_from_mc_statistical_error_fy1306,Graph_from_mc_statistical_error_fex1306,Graph_from_mc_statistical_error_fey1306);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1306 = new TH1F("Graph_Graph_from_mc_statistical_error1306","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1306->SetMinimum(0.1365301);
   Graph_Graph_from_mc_statistical_error1306->SetMaximum(1.86347);
   Graph_Graph_from_mc_statistical_error1306->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1306->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1306->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1306->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1306->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1306->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1306->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1306->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1306->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1306->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1306->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1306->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1306->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1306->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1306->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1306->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1306);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Sphericity_algo_16->cd();
   Sphericity_algo_16->Modified();
   Sphericity_algo_16->cd();
   Sphericity_algo_16->SetSelected(Sphericity_algo_16);
}

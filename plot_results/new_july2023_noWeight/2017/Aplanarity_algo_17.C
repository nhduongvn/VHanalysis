void Aplanarity_algo_17()
{
//=========Macro generated from canvas: Aplanarity_algo_17/Aplanarity_algo_17
//=========  (Thu Aug 10 12:28:44 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_algo_17 = new TCanvas("Aplanarity_algo_17", "Aplanarity_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_algo_17->SetHighLightColor(2);
   Aplanarity_algo_17->Range(0,0,1,1);
   Aplanarity_algo_17->SetFillColor(0);
   Aplanarity_algo_17->SetFillStyle(4000);
   Aplanarity_algo_17->SetBorderMode(0);
   Aplanarity_algo_17->SetBorderSize(2);
   Aplanarity_algo_17->SetFrameFillStyle(1000);
   Aplanarity_algo_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-3964.798,1.052419,3960843);
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
   st->SetMaximum(3394630);
   
   TH1F *st_stack_158 = new TH1F("st_stack_158","",50,0,1);
   st_stack_158->SetMinimum(0.01);
   st_stack_158->SetMaximum(3564362);
   st_stack_158->SetDirectory(0);
   st_stack_158->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_158->SetLineColor(ci);
   st_stack_158->GetXaxis()->SetRange(1,50);
   st_stack_158->GetXaxis()->SetLabelFont(42);
   st_stack_158->GetXaxis()->SetLabelSize(0.035);
   st_stack_158->GetXaxis()->SetTitleSize(0.035);
   st_stack_158->GetXaxis()->SetTitleFont(42);
   st_stack_158->GetYaxis()->SetTitle("Events/0.02");
   st_stack_158->GetYaxis()->SetLabelFont(42);
   st_stack_158->GetYaxis()->SetLabelSize(0.05);
   st_stack_158->GetYaxis()->SetTitleSize(0.057);
   st_stack_158->GetYaxis()->SetTitleOffset(1.2);
   st_stack_158->GetYaxis()->SetTitleFont(42);
   st_stack_158->GetZaxis()->SetLabelFont(42);
   st_stack_158->GetZaxis()->SetLabelSize(0.035);
   st_stack_158->GetZaxis()->SetTitleSize(0.035);
   st_stack_158->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_158);
   
   
   TH1D *VbbHcc_algo_Aplanarity_stack_1 = new TH1D("VbbHcc_algo_Aplanarity_stack_1","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(1,1343970);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(2,168426.3);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(3,41589.56);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(4,8844.004);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(5,3562.768);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(6,917.3885);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(7,397.4544);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(8,20.42624);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(9,35.68988);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(11,22.07238);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(12,6.808747);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(13,275.1211);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(15,6.808747);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(1,36142.68);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(2,5372.322);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(3,2898.973);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(4,1223.413);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(5,1358.559);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(6,388.0406);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(7,272.4306);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(8,11.7931);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(9,24.08128);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(11,22.07238);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(12,6.808747);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(13,268.3987);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(15,6.808747);
   VbbHcc_algo_Aplanarity_stack_1->SetEntries(116866);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_2 = new TH1D("VbbHcc_algo_Aplanarity_stack_2","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(1,9580.019);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(2,1356.425);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(3,305.3742);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(4,74.33318);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(5,30.82492);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(6,9.187115);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(7,4.465894);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(8,1.872826);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(9,1.429535);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(10,0.4479025);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(11,0.6017885);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(12,0.4085355);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(15,0.04712387);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(16,0.04712387);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(1,37.25748);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(2,14.05761);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(3,6.724276);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(4,3.198343);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(5,2.210841);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(6,1.136078);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(7,0.7821471);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(8,0.450243);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(9,0.4887499);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(10,0.1494692);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(11,0.2921365);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(12,0.275663);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(15,0.04712387);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(16,0.04712387);
   VbbHcc_algo_Aplanarity_stack_2->SetEntries(147618);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_2,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_3 = new TH1D("VbbHcc_algo_Aplanarity_stack_3","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(0,0.1407128);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(1,163728.6);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(2,21486.68);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(3,4332.984);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(4,1178.216);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(5,391.9708);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(6,151.0311);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(7,68.58769);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(8,32.02488);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(9,16.56183);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(10,9.934625);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(11,5.844615);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(12,3.198908);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(13,2.43449);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(14,1.043655);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(15,0.3893346);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(16,0.4056983);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(17,0.3705582);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(18,0.3259919);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(19,0.2298455);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(21,0.07035638);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(22,0.04456635);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(0,0.09949895);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(1,101.0372);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(2,36.41856);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(3,16.21185);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(4,8.381581);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(5,4.798634);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(6,2.957702);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(7,1.974173);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(8,1.357219);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(9,0.9751997);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(10,0.7560188);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(11,0.5727992);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(12,0.4361536);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(13,0.3728424);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(14,0.2463668);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(15,0.1509791);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(16,0.1581367);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(17,0.154183);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(18,0.1476016);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(19,0.117781);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(21,0.07035638);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(22,0.04456635);
   VbbHcc_algo_Aplanarity_stack_3->SetEntries(3230340);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Aplanarity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_3->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_3,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_4 = new TH1D("VbbHcc_algo_Aplanarity_stack_4","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(1,7468.671);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(2,947.9493);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(3,190.6974);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(4,47.59554);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(5,11.94344);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(6,3.884316);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(7,0.7404363);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(8,0.7026442);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(9,0.1746112);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(10,0.1083014);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(11,0.06630981);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(12,0.528033);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(13,0.1083014);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(18,0.06630981);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(1,62.55199);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(2,26.73714);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(3,10.79874);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(4,6.794113);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(5,3.098875);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(6,0.9596723);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(7,0.2680241);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(8,0.3964332);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(9,0.1269889);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(10,0.1083014);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(11,0.06630981);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(12,0.3755438);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(13,0.1083014);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(18,0.06630981);
   VbbHcc_algo_Aplanarity_stack_4->SetEntries(52708);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Aplanarity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_4->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_4,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_5 = new TH1D("VbbHcc_algo_Aplanarity_stack_5","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(1,2537.582);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(2,319.0655);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(3,56.73771);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(4,21.05022);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(5,2.386925);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(6,2.227885);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(7,0.0116142);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(9,0.2575652);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(10,0.0116142);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(11,0.1763629);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(13,0.09024302);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(1,55.26928);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(2,24.01082);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(3,10.47529);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(4,7.254547);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(5,1.257635);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(6,1.285676);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(7,0.0116142);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(9,0.1941589);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(10,0.0116142);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(11,0.1763629);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(13,0.09024302);
   VbbHcc_algo_Aplanarity_stack_5->SetEntries(17207);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Aplanarity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_5->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_5,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_6 = new TH1D("VbbHcc_algo_Aplanarity_stack_6","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_6->SetBinContent(1,24.27855);
   VbbHcc_algo_Aplanarity_stack_6->SetBinContent(2,1.261224);
   VbbHcc_algo_Aplanarity_stack_6->SetBinContent(3,0.3153059);
   VbbHcc_algo_Aplanarity_stack_6->SetBinContent(4,0.3153059);
   VbbHcc_algo_Aplanarity_stack_6->SetBinError(1,2.766798);
   VbbHcc_algo_Aplanarity_stack_6->SetBinError(2,0.6306118);
   VbbHcc_algo_Aplanarity_stack_6->SetBinError(3,0.3153059);
   VbbHcc_algo_Aplanarity_stack_6->SetBinError(4,0.3153059);
   VbbHcc_algo_Aplanarity_stack_6->SetEntries(83);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Aplanarity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_6->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_6,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_7 = new TH1D("VbbHcc_algo_Aplanarity_stack_7","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_7->SetBinContent(1,61.98555);
   VbbHcc_algo_Aplanarity_stack_7->SetBinContent(2,7.93415);
   VbbHcc_algo_Aplanarity_stack_7->SetBinContent(3,1.239711);
   VbbHcc_algo_Aplanarity_stack_7->SetBinContent(4,0.7438266);
   VbbHcc_algo_Aplanarity_stack_7->SetBinError(1,3.92031);
   VbbHcc_algo_Aplanarity_stack_7->SetBinError(2,1.402573);
   VbbHcc_algo_Aplanarity_stack_7->SetBinError(3,0.5544156);
   VbbHcc_algo_Aplanarity_stack_7->SetBinError(4,0.4294485);
   VbbHcc_algo_Aplanarity_stack_7->SetEntries(290);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Aplanarity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_7->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_7,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_8 = new TH1D("VbbHcc_algo_Aplanarity_stack_8","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_8->SetBinContent(1,98.25154);
   VbbHcc_algo_Aplanarity_stack_8->SetBinContent(2,11.39515);
   VbbHcc_algo_Aplanarity_stack_8->SetBinContent(3,1.772579);
   VbbHcc_algo_Aplanarity_stack_8->SetBinContent(4,0.5064512);
   VbbHcc_algo_Aplanarity_stack_8->SetBinContent(5,0.2532256);
   VbbHcc_algo_Aplanarity_stack_8->SetBinError(1,4.987966);
   VbbHcc_algo_Aplanarity_stack_8->SetBinError(2,1.698689);
   VbbHcc_algo_Aplanarity_stack_8->SetBinError(3,0.669972);
   VbbHcc_algo_Aplanarity_stack_8->SetBinError(4,0.3581151);
   VbbHcc_algo_Aplanarity_stack_8->SetBinError(5,0.2532256);
   VbbHcc_algo_Aplanarity_stack_8->SetEntries(443);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Aplanarity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_8->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_8,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_9 = new TH1D("VbbHcc_algo_Aplanarity_stack_9","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(1,72.52036);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(2,5.809575);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(3,0.8737782);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(4,0.1857384);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(5,0.05329886);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(6,0.0193814);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(7,0.004845351);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(8,0.003230234);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(9,0.001615117);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(10,0.001615117);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(1,0.3422409);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(2,0.09686663);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(3,0.03756666);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(4,0.0173202);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(5,0.00927814);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(6,0.005594929);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(7,0.002797464);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(8,0.00228412);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(9,0.001615117);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(10,0.001615117);
   VbbHcc_algo_Aplanarity_stack_9->SetEntries(49206);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Aplanarity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_9->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_9,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_10 = new TH1D("VbbHcc_algo_Aplanarity_stack_10","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(1,40.75313);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(2,4.635099);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(3,0.8964204);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(4,0.1969471);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(5,0.06716934);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(6,0.02031665);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(7,0.007048634);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(8,0.00373163);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(9,0.002073128);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(10,0.001243877);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(11,0.0004146255);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(12,0.0004146255);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(1,0.1299896);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(2,0.04383869);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(3,0.01927897);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(4,0.009036554);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(5,0.005277322);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(6,0.002902379);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(7,0.001709545);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(8,0.001243877);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(9,0.0009271309);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(10,0.0007181525);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(11,0.0004146255);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(12,0.0004146255);
   VbbHcc_algo_Aplanarity_stack_10->SetEntries(112352);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Aplanarity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_10->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_10,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_11 = new TH1D("VbbHcc_algo_Aplanarity_stack_11","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_11->SetBinContent(1,0.5957547);
   VbbHcc_algo_Aplanarity_stack_11->SetBinContent(2,0.04898779);
   VbbHcc_algo_Aplanarity_stack_11->SetBinContent(3,0.006321005);
   VbbHcc_algo_Aplanarity_stack_11->SetBinContent(4,0.001580251);
   VbbHcc_algo_Aplanarity_stack_11->SetBinError(1,0.03068293);
   VbbHcc_algo_Aplanarity_stack_11->SetBinError(2,0.008798466);
   VbbHcc_algo_Aplanarity_stack_11->SetBinError(3,0.003160502);
   VbbHcc_algo_Aplanarity_stack_11->SetBinError(4,0.001580251);
   VbbHcc_algo_Aplanarity_stack_11->SetEntries(413);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Aplanarity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_11->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_11,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_12 = new TH1D("VbbHcc_algo_Aplanarity_stack_12","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_12->SetBinContent(1,0.2651124);
   VbbHcc_algo_Aplanarity_stack_12->SetBinContent(2,0.03031043);
   VbbHcc_algo_Aplanarity_stack_12->SetBinContent(3,0.00622817);
   VbbHcc_algo_Aplanarity_stack_12->SetBinContent(4,0.0008304226);
   VbbHcc_algo_Aplanarity_stack_12->SetBinContent(5,0.000622817);
   VbbHcc_algo_Aplanarity_stack_12->SetBinError(1,0.007418816);
   VbbHcc_algo_Aplanarity_stack_12->SetBinError(2,0.002508509);
   VbbHcc_algo_Aplanarity_stack_12->SetBinError(3,0.001137103);
   VbbHcc_algo_Aplanarity_stack_12->SetBinError(4,0.0004152113);
   VbbHcc_algo_Aplanarity_stack_12->SetBinError(5,0.0003595835);
   VbbHcc_algo_Aplanarity_stack_12->SetEntries(1460);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Aplanarity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_12->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_Aplanarity__433 = new TH1D("VbbHcc_algo_Aplanarity__433","",50,0,1);
   VbbHcc_algo_Aplanarity__433->SetBinContent(1,217363);
   VbbHcc_algo_Aplanarity__433->SetBinContent(2,28730);
   VbbHcc_algo_Aplanarity__433->SetBinContent(3,6583);
   VbbHcc_algo_Aplanarity__433->SetBinContent(4,1752);
   VbbHcc_algo_Aplanarity__433->SetBinContent(5,569);
   VbbHcc_algo_Aplanarity__433->SetBinContent(6,200);
   VbbHcc_algo_Aplanarity__433->SetBinContent(7,61);
   VbbHcc_algo_Aplanarity__433->SetBinContent(8,41);
   VbbHcc_algo_Aplanarity__433->SetBinContent(9,14);
   VbbHcc_algo_Aplanarity__433->SetBinContent(10,9);
   VbbHcc_algo_Aplanarity__433->SetBinContent(11,5);
   VbbHcc_algo_Aplanarity__433->SetBinContent(12,3);
   VbbHcc_algo_Aplanarity__433->SetBinContent(13,2);
   VbbHcc_algo_Aplanarity__433->SetBinContent(14,2);
   VbbHcc_algo_Aplanarity__433->SetBinContent(15,2);
   VbbHcc_algo_Aplanarity__433->SetBinContent(17,1);
   VbbHcc_algo_Aplanarity__433->SetBinContent(18,2);
   VbbHcc_algo_Aplanarity__433->SetEntries(255388);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity__433->SetLineColor(ci);
   VbbHcc_algo_Aplanarity__433->SetLineWidth(2);
   VbbHcc_algo_Aplanarity__433->SetMarkerStyle(20);
   VbbHcc_algo_Aplanarity__433->SetMarkerSize(1.2);
   VbbHcc_algo_Aplanarity__433->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity__433->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__433->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity__433->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity__433->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__433->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__433->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity__433->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity__433->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity__433->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__433->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__433->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity__433->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity__433->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__433->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Aplanarity_fx1315[50] = {
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
   Double_t Graph_from_VbbHcc_algo_Aplanarity_fy1315[50] = {
   1527584,
   192567.5,
   46480.47,
   10167.15,
   4000.269,
   1083.759,
   471.2719,
   55.03356,
   54.11711,
   10.5053,
   28.76187,
   10.94464,
   277.7541,
   1.043655,
   7.245205,
   0.4528222,
   0.3705582,
   0.3923017,
   0.2298455,
   0,
   0.07035638,
   0.04456635,
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
   0,
   0};
   Double_t Graph_from_VbbHcc_algo_Aplanarity_fex1315[50] = {
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
   Double_t Graph_from_VbbHcc_algo_Aplanarity_fey1315[50] = {
   36142.94,
   5372.585,
   2899.065,
   1223.486,
   1358.573,
   388.0569,
   272.439,
   11.88609,
   24.10709,
   0.778314,
   22.08255,
   6.838588,
   268.399,
   0.2463668,
   6.810584,
   0.1650087,
   0.154183,
   0.1618123,
   0.117781,
   0,
   0.07035638,
   0.04456635,
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
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_algo_Aplanarity_fx1315,Graph_from_VbbHcc_algo_Aplanarity_fy1315,Graph_from_VbbHcc_algo_Aplanarity_fex1315,Graph_from_VbbHcc_algo_Aplanarity_fey1315);
   gre->SetName("Graph_from_VbbHcc_algo_Aplanarity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Aplanarity1315 = new TH1F("Graph_Graph_from_VbbHcc_algo_Aplanarity1315","",100,0,1.1);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1315->SetMinimum(0);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1315->SetMaximum(1720099);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1315->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1315->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Aplanarity1315->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1315->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1315->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1315->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1315->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1315->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1315->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1315->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1315->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1315->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1315->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1315->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1315->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1315->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Aplanarity1315);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Aplanarity","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_Aplanarity","MC unc. (stat.)","fl");

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
   Aplanarity_algo_17->cd();
  
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
   
   TH1D *data_mc_ratio__434 = new TH1D("data_mc_ratio__434","",50,0,1);
   data_mc_ratio__434->SetBinContent(1,0.142292);
   data_mc_ratio__434->SetBinContent(2,0.1491944);
   data_mc_ratio__434->SetBinContent(3,0.1416294);
   data_mc_ratio__434->SetBinContent(4,0.1723197);
   data_mc_ratio__434->SetBinContent(5,0.1422404);
   data_mc_ratio__434->SetBinContent(6,0.1845429);
   data_mc_ratio__434->SetBinContent(7,0.129437);
   data_mc_ratio__434->SetBinContent(8,0.745);
   data_mc_ratio__434->SetBinContent(9,0.2586982);
   data_mc_ratio__434->SetBinContent(10,0.8567102);
   data_mc_ratio__434->SetBinContent(11,0.1738412);
   data_mc_ratio__434->SetBinContent(12,0.2741068);
   data_mc_ratio__434->SetBinContent(13,0.007200613);
   data_mc_ratio__434->SetBinContent(14,1.916343);
   data_mc_ratio__434->SetBinContent(15,0.2760446);
   data_mc_ratio__434->SetBinContent(17,2.698631);
   data_mc_ratio__434->SetBinContent(18,5.098117);
   data_mc_ratio__434->SetBinError(1,0.0003052023);
   data_mc_ratio__434->SetBinError(2,0.0008802069);
   data_mc_ratio__434->SetBinError(3,0.001745587);
   data_mc_ratio__434->SetBinError(4,0.004116877);
   data_mc_ratio__434->SetBinError(5,0.00596303);
   data_mc_ratio__434->SetBinError(6,0.01304916);
   data_mc_ratio__434->SetBinError(7,0.0165727);
   data_mc_ratio__434->SetBinError(8,0.1163495);
   data_mc_ratio__434->SetBinError(9,0.06914001);
   data_mc_ratio__434->SetBinError(10,0.2855701);
   data_mc_ratio__434->SetBinError(11,0.07774417);
   data_mc_ratio__434->SetBinError(12,0.1582557);
   data_mc_ratio__434->SetBinError(13,0.005091603);
   data_mc_ratio__434->SetBinError(14,1.355059);
   data_mc_ratio__434->SetBinError(15,0.195193);
   data_mc_ratio__434->SetBinError(17,2.698631);
   data_mc_ratio__434->SetBinError(18,3.604913);
   data_mc_ratio__434->SetMinimum(0.4);
   data_mc_ratio__434->SetMaximum(1.6);
   data_mc_ratio__434->SetEntries(6.303777);
   data_mc_ratio__434->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__434->SetLineColor(ci);
   data_mc_ratio__434->SetLineWidth(2);
   data_mc_ratio__434->SetMarkerStyle(20);
   data_mc_ratio__434->SetMarkerSize(1.2);
   data_mc_ratio__434->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__434->GetXaxis()->SetRange(1,50);
   data_mc_ratio__434->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__434->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__434->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__434->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__434->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__434->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__434->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__434->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__434->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__434->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__434->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__434->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__434->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__434->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__434->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__434->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__434->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1316[50] = {
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
   Double_t Graph_from_mc_statistical_error_fy1316[50] = {
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
   Double_t Graph_from_mc_statistical_error_fex1316[50] = {
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
   Double_t Graph_from_mc_statistical_error_fey1316[50] = {
   0.0236602,
   0.02789975,
   0.06237168,
   0.1203372,
   0.3396205,
   0.3580658,
   0.578093,
   0.2159789,
   0.4454616,
   0.07408772,
   0.7677716,
   0.6248346,
   0.9663187,
   0.2360616,
   0.9400125,
   0.3644008,
   0.4160831,
   0.4124691,
   0.5124355,
   0,
   1,
   1,
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
   0,
   0};
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1316,Graph_from_mc_statistical_error_fy1316,Graph_from_mc_statistical_error_fex1316,Graph_from_mc_statistical_error_fey1316);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1316 = new TH1F("Graph_Graph_from_mc_statistical_error1316","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1316->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1316->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1316->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1316->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1316->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1316->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1316->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1316->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1316->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1316->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1316->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1316->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1316->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1316->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1316->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1316->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1316->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1316->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1316);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_algo_17->cd();
   Aplanarity_algo_17->Modified();
   Aplanarity_algo_17->cd();
   Aplanarity_algo_17->SetSelected(Aplanarity_algo_17);
}

#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tagOnly_16()
{
//=========Macro generated from canvas: Aplanarity_tagOnly_16/Aplanarity_tagOnly_16
//=========  (Fri Oct 20 15:09:06 2023) by ROOT version 6.28/04
   TCanvas *Aplanarity_tagOnly_16 = new TCanvas("Aplanarity_tagOnly_16", "Aplanarity_tagOnly_16",0,0,600,600);
   Aplanarity_tagOnly_16->SetHighLightColor(2);
   Aplanarity_tagOnly_16->Range(0,0,1,1);
   Aplanarity_tagOnly_16->SetFillColor(0);
   Aplanarity_tagOnly_16->SetFillStyle(4000);
   Aplanarity_tagOnly_16->SetBorderMode(0);
   Aplanarity_tagOnly_16->SetBorderSize(2);
   Aplanarity_tagOnly_16->SetFrameFillStyle(1000);
   Aplanarity_tagOnly_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-6350.019,1.052419,6343678);
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
   st->SetMaximum(5708676);
   
   TH1F *st_stack_46 = new TH1F("st_stack_46","",50,0,1);
   st_stack_46->SetMinimum(0.01);
   st_stack_46->SetMaximum(5708676);
   st_stack_46->SetDirectory(nullptr);
   st_stack_46->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_46->SetLineColor(ci);
   st_stack_46->SetLineWidth(0);
   st_stack_46->GetXaxis()->SetRange(1,50);
   st_stack_46->GetXaxis()->SetLabelFont(42);
   st_stack_46->GetXaxis()->SetTitleOffset(1);
   st_stack_46->GetXaxis()->SetTitleFont(42);
   st_stack_46->GetYaxis()->SetTitle("Events/0.02");
   st_stack_46->GetYaxis()->SetLabelFont(42);
   st_stack_46->GetYaxis()->SetLabelSize(0.05);
   st_stack_46->GetYaxis()->SetTitleSize(0.057);
   st_stack_46->GetYaxis()->SetTitleOffset(1.2);
   st_stack_46->GetYaxis()->SetTitleFont(42);
   st_stack_46->GetZaxis()->SetLabelFont(42);
   st_stack_46->GetZaxis()->SetTitleOffset(1);
   st_stack_46->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_46);
   
   
   TH1D *VbbHcc_tagOnly_Aplanarity_stack_1 = new TH1D("VbbHcc_tagOnly_Aplanarity_stack_1","",50,0,1);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinContent(1,1872419);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinContent(2,267799.8);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinContent(3,68897.73);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinContent(4,22108.4);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinContent(5,6299.527);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinContent(6,3385.897);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinContent(7,2014.781);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinContent(8,661.0652);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinContent(9,943.8756);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinContent(10,134.8633);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinContent(11,183.8237);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinContent(12,349.9911);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinContent(13,105.2276);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinContent(14,10.7077);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinContent(15,38.30738);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinContent(16,0.4261197);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinContent(17,13.05331);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinError(1,35084.04);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinError(2,16808.97);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinError(3,4226.173);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinError(4,2208.551);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinError(5,860.0157);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinError(6,644.2925);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinError(7,474.2626);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinError(8,96.9763);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinError(9,346.3626);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinError(10,40.13941);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinError(11,49.08594);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinError(12,225.2368);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinError(13,38.50082);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinError(14,8.203017);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinError(15,18.27538);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinError(16,0.4261197);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetBinError(17,9.041255);
   VbbHcc_tagOnly_Aplanarity_stack_1->SetEntries(177792);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tagOnly_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagOnly_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_tagOnly_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_tagOnly_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagOnly_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_tagOnly_Aplanarity_stack_2 = new TH1D("VbbHcc_tagOnly_Aplanarity_stack_2","",50,0,1);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinContent(1,18865.93);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinContent(2,2750.396);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinContent(3,709.702);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinContent(4,244.7665);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinContent(5,90.00748);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinContent(6,45.93603);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinContent(7,26.89369);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinContent(8,13.67605);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinContent(9,9.72519);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinContent(10,6.924074);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinContent(11,3.692337);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinContent(12,1.471573);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinContent(13,1.805421);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinContent(14,0.774449);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinContent(15,0.5876593);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinContent(16,0.388035);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinContent(17,0.1263101);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinContent(18,0.5007059);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinContent(19,0.07415391);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinContent(20,0.3020543);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinError(1,53.41953);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinError(2,20.06218);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinError(3,10.26994);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinError(4,6.042589);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinError(5,3.59679);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinError(6,2.697264);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinError(7,2.103495);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinError(8,1.418276);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinError(9,1.248443);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinError(10,1.103588);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinError(11,0.7432344);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinError(12,0.4016519);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinError(13,0.50304);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinError(14,0.3931121);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinError(15,0.2789807);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinError(16,0.2243346);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinError(17,0.07414343);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinError(18,0.357673);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinError(19,0.05264169);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetBinError(20,0.3087479);
   VbbHcc_tagOnly_Aplanarity_stack_2->SetEntries(390006);

   ci = TColor::GetColor("#660066");
   VbbHcc_tagOnly_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagOnly_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_tagOnly_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_tagOnly_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagOnly_Aplanarity_stack_2,"");
   
   TH1D *VbbHcc_tagOnly_Aplanarity_stack_3 = new TH1D("VbbHcc_tagOnly_Aplanarity_stack_3","",50,0,1);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(1,324394.7);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(2,46370.64);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(3,12137.32);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(4,4370.685);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(5,1931.183);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(6,974.3916);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(7,527.0942);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(8,303.5269);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(9,189.1085);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(10,113.282);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(11,74.11825);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(12,46.3556);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(13,30.06483);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(14,18.56802);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(15,12.98819);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(16,6.239604);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(17,3.95176);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(18,2.347801);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(19,1.467033);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(20,0.2188157);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(21,0.2976638);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinContent(22,0.1097414);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(1,134.6465);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(2,50.29281);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(3,25.70849);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(4,15.43566);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(5,10.27598);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(6,7.316293);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(7,5.384775);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(8,4.089029);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(9,3.236117);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(10,2.500566);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(11,2.031527);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(12,1.62981);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(13,1.297926);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(14,1.028511);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(15,0.8680443);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(16,0.5902722);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(17,0.4699745);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(18,0.3661252);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(19,0.2829135);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(20,0.101464);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(21,0.1347488);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetBinError(22,0.07771862);
   VbbHcc_tagOnly_Aplanarity_stack_3->SetEntries(7662944);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tagOnly_Aplanarity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagOnly_Aplanarity_stack_3->SetLineColor(ci);
   VbbHcc_tagOnly_Aplanarity_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_tagOnly_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_3->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_3->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagOnly_Aplanarity_stack_3,"");
   
   TH1D *VbbHcc_tagOnly_Aplanarity_stack_4 = new TH1D("VbbHcc_tagOnly_Aplanarity_stack_4","",50,0,1);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinContent(1,14975.14);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinContent(2,1706.982);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinContent(3,434.3004);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinContent(4,137.7524);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinContent(5,57.55279);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinContent(6,25.00956);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinContent(7,16.10925);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinContent(8,7.589688);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinContent(9,3.142077);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinContent(10,7.361279);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinContent(11,1.986427);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinContent(12,1.627818);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinContent(13,0.6679139);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinContent(14,0.756065);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinContent(15,0.1465752);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinContent(16,0.3228513);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinError(1,74.63708);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinError(2,29.24346);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinError(3,14.73609);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinError(4,8.148369);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinError(5,4.993519);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinError(6,2.426853);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinError(7,1.503387);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinError(8,0.9796869);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinError(9,0.528874);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinError(10,2.864567);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinError(11,0.4896092);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinError(12,0.4559839);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinError(13,0.2147874);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinError(14,0.3432843);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinError(15,0.1055283);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetBinError(16,0.2637407);
   VbbHcc_tagOnly_Aplanarity_stack_4->SetEntries(163200);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tagOnly_Aplanarity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagOnly_Aplanarity_stack_4->SetLineColor(ci);
   VbbHcc_tagOnly_Aplanarity_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_tagOnly_Aplanarity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_4->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Aplanarity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_4->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Aplanarity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagOnly_Aplanarity_stack_4,"");
   
   TH1D *VbbHcc_tagOnly_Aplanarity_stack_5 = new TH1D("VbbHcc_tagOnly_Aplanarity_stack_5","",50,0,1);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinContent(1,8882.118);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinContent(2,937.9904);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinContent(3,267.1328);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinContent(4,88.25211);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinContent(5,28.99449);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinContent(6,26.37605);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinContent(7,22.19332);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinContent(8,5.198408);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinContent(9,2.224502);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinContent(10,3.002751);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinContent(11,0.9920218);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinContent(12,1.145148);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinContent(13,0.3821116);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinContent(14,0.0002168231);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinContent(15,0.1664614);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinContent(20,0.1158155);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinError(1,90.14445);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinError(2,31.82857);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinError(3,21.17609);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinError(4,11.20451);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinError(5,3.59083);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinError(6,6.847983);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinError(7,8.500459);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinError(8,1.279508);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinError(9,0.5901601);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinError(10,1.52351);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinError(11,0.2987724);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinError(12,0.5127644);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinError(13,0.1752817);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinError(14,0.0002168231);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinError(15,0.1664614);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetBinError(20,0.08832062);
   VbbHcc_tagOnly_Aplanarity_stack_5->SetEntries(113767);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tagOnly_Aplanarity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagOnly_Aplanarity_stack_5->SetLineColor(ci);
   VbbHcc_tagOnly_Aplanarity_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_tagOnly_Aplanarity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_5->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Aplanarity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_5->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Aplanarity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagOnly_Aplanarity_stack_5,"");
   
   TH1D *VbbHcc_tagOnly_Aplanarity_stack_6 = new TH1D("VbbHcc_tagOnly_Aplanarity_stack_6","",50,0,1);
   VbbHcc_tagOnly_Aplanarity_stack_6->SetBinContent(1,76.92336);
   VbbHcc_tagOnly_Aplanarity_stack_6->SetBinContent(2,7.791156);
   VbbHcc_tagOnly_Aplanarity_stack_6->SetBinContent(3,1.897498);
   VbbHcc_tagOnly_Aplanarity_stack_6->SetBinContent(4,0.7470293);
   VbbHcc_tagOnly_Aplanarity_stack_6->SetBinContent(5,0.6354576);
   VbbHcc_tagOnly_Aplanarity_stack_6->SetBinContent(6,0.1109207);
   VbbHcc_tagOnly_Aplanarity_stack_6->SetBinContent(7,0.1966875);
   VbbHcc_tagOnly_Aplanarity_stack_6->SetBinError(1,3.063338);
   VbbHcc_tagOnly_Aplanarity_stack_6->SetBinError(2,0.9423265);
   VbbHcc_tagOnly_Aplanarity_stack_6->SetBinError(3,0.4539658);
   VbbHcc_tagOnly_Aplanarity_stack_6->SetBinError(4,0.3087785);
   VbbHcc_tagOnly_Aplanarity_stack_6->SetBinError(5,0.2906289);
   VbbHcc_tagOnly_Aplanarity_stack_6->SetBinError(6,0.1109207);
   VbbHcc_tagOnly_Aplanarity_stack_6->SetBinError(7,0.1390807);
   VbbHcc_tagOnly_Aplanarity_stack_6->SetEntries(766);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tagOnly_Aplanarity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagOnly_Aplanarity_stack_6->SetLineColor(ci);
   VbbHcc_tagOnly_Aplanarity_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_tagOnly_Aplanarity_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_6->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Aplanarity_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_6->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Aplanarity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagOnly_Aplanarity_stack_6,"");
   
   TH1D *VbbHcc_tagOnly_Aplanarity_stack_7 = new TH1D("VbbHcc_tagOnly_Aplanarity_stack_7","",50,0,1);
   VbbHcc_tagOnly_Aplanarity_stack_7->SetBinContent(1,204.512);
   VbbHcc_tagOnly_Aplanarity_stack_7->SetBinContent(2,21.54239);
   VbbHcc_tagOnly_Aplanarity_stack_7->SetBinContent(3,3.74176);
   VbbHcc_tagOnly_Aplanarity_stack_7->SetBinContent(4,2.374932);
   VbbHcc_tagOnly_Aplanarity_stack_7->SetBinContent(5,0.5878483);
   VbbHcc_tagOnly_Aplanarity_stack_7->SetBinContent(6,0.6124505);
   VbbHcc_tagOnly_Aplanarity_stack_7->SetBinContent(7,0.0992748);
   VbbHcc_tagOnly_Aplanarity_stack_7->SetBinContent(8,0.07495342);
   VbbHcc_tagOnly_Aplanarity_stack_7->SetBinError(1,4.482048);
   VbbHcc_tagOnly_Aplanarity_stack_7->SetBinError(2,1.439582);
   VbbHcc_tagOnly_Aplanarity_stack_7->SetBinError(3,0.59825);
   VbbHcc_tagOnly_Aplanarity_stack_7->SetBinError(4,0.4862876);
   VbbHcc_tagOnly_Aplanarity_stack_7->SetBinError(5,0.243715);
   VbbHcc_tagOnly_Aplanarity_stack_7->SetBinError(6,0.2538506);
   VbbHcc_tagOnly_Aplanarity_stack_7->SetBinError(7,0.0992748);
   VbbHcc_tagOnly_Aplanarity_stack_7->SetBinError(8,0.07495342);
   VbbHcc_tagOnly_Aplanarity_stack_7->SetEntries(2494);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tagOnly_Aplanarity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagOnly_Aplanarity_stack_7->SetLineColor(ci);
   VbbHcc_tagOnly_Aplanarity_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_tagOnly_Aplanarity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_7->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Aplanarity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_7->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Aplanarity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagOnly_Aplanarity_stack_7,"");
   
   TH1D *VbbHcc_tagOnly_Aplanarity_stack_8 = new TH1D("VbbHcc_tagOnly_Aplanarity_stack_8","",50,0,1);
   VbbHcc_tagOnly_Aplanarity_stack_8->SetBinContent(1,145.7889);
   VbbHcc_tagOnly_Aplanarity_stack_8->SetBinContent(2,17.12628);
   VbbHcc_tagOnly_Aplanarity_stack_8->SetBinContent(3,3.566557);
   VbbHcc_tagOnly_Aplanarity_stack_8->SetBinContent(4,1.383809);
   VbbHcc_tagOnly_Aplanarity_stack_8->SetBinContent(5,0.8106984);
   VbbHcc_tagOnly_Aplanarity_stack_8->SetBinContent(6,0.709284);
   VbbHcc_tagOnly_Aplanarity_stack_8->SetBinContent(8,0.2296907);
   VbbHcc_tagOnly_Aplanarity_stack_8->SetBinError(1,5.589927);
   VbbHcc_tagOnly_Aplanarity_stack_8->SetBinError(2,1.889446);
   VbbHcc_tagOnly_Aplanarity_stack_8->SetBinError(3,0.839687);
   VbbHcc_tagOnly_Aplanarity_stack_8->SetBinError(4,0.571597);
   VbbHcc_tagOnly_Aplanarity_stack_8->SetBinError(5,0.4116743);
   VbbHcc_tagOnly_Aplanarity_stack_8->SetBinError(6,0.3640566);
   VbbHcc_tagOnly_Aplanarity_stack_8->SetBinError(8,0.2296907);
   VbbHcc_tagOnly_Aplanarity_stack_8->SetEntries(834);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tagOnly_Aplanarity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagOnly_Aplanarity_stack_8->SetLineColor(ci);
   VbbHcc_tagOnly_Aplanarity_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_tagOnly_Aplanarity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_8->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Aplanarity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_8->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Aplanarity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagOnly_Aplanarity_stack_8,"");
   
   TH1D *VbbHcc_tagOnly_Aplanarity_stack_9 = new TH1D("VbbHcc_tagOnly_Aplanarity_stack_9","",50,0,1);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinContent(1,68.20216);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinContent(2,6.922832);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinContent(3,1.590921);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinContent(4,0.4908805);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinContent(5,0.2248331);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinContent(6,0.1089121);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinContent(7,0.06578718);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinContent(8,0.0306809);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinContent(9,0.02022097);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinContent(10,0.01651587);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinContent(11,0.004249663);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinContent(12,0.00532216);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinContent(13,0.004254896);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinContent(15,0.002463746);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinContent(17,0.00099578);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinContent(20,0.001593448);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinError(1,0.2921895);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinError(2,0.09184949);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinError(3,0.04462824);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinError(4,0.02490769);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinError(5,0.0166178);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinError(6,0.0118048);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinError(7,0.009284995);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinError(8,0.006066696);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinError(9,0.004978557);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinError(10,0.004892415);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinError(11,0.002125295);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinError(12,0.002743045);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinError(13,0.00248096);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinError(15,0.001765008);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinError(17,0.00099578);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetBinError(20,0.001593448);
   VbbHcc_tagOnly_Aplanarity_stack_9->SetEntries(67621);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tagOnly_Aplanarity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagOnly_Aplanarity_stack_9->SetLineColor(ci);
   VbbHcc_tagOnly_Aplanarity_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_tagOnly_Aplanarity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_9->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Aplanarity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_9->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Aplanarity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagOnly_Aplanarity_stack_9,"");
   
   TH1D *VbbHcc_tagOnly_Aplanarity_stack_10 = new TH1D("VbbHcc_tagOnly_Aplanarity_stack_10","",50,0,1);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinContent(1,33.83917);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinContent(2,3.793324);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinContent(3,0.9015547);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinContent(4,0.3064217);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinContent(5,0.1519365);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinContent(6,0.06087692);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinContent(7,0.04588242);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinContent(8,0.02048732);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinContent(9,0.01232176);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinContent(10,0.008749369);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinContent(11,0.004633931);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinContent(12,0.003227804);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinContent(13,0.001667388);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinContent(14,0.001652561);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinContent(16,0.000488151);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinContent(17,0.0003310948);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinContent(19,0.0004329223);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinContent(21,0.0003725749);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinError(1,0.1056799);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinError(2,0.03494377);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinError(3,0.01706281);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinError(4,0.01011168);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinError(5,0.007181037);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinError(6,0.004436733);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinError(7,0.003939609);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinError(8,0.002621497);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinError(9,0.002022241);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinError(10,0.001642007);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinError(11,0.00134919);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinError(12,0.001016813);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinError(13,0.000754569);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinError(14,0.0007432239);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinError(16,0.0003554546);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinError(17,0.0003310948);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinError(19,0.0004329223);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetBinError(21,0.0003725749);
   VbbHcc_tagOnly_Aplanarity_stack_10->SetEntries(124885);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tagOnly_Aplanarity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagOnly_Aplanarity_stack_10->SetLineColor(ci);
   VbbHcc_tagOnly_Aplanarity_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_tagOnly_Aplanarity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_10->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Aplanarity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_10->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Aplanarity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagOnly_Aplanarity_stack_10,"");
   
   TH1D *VbbHcc_tagOnly_Aplanarity_stack_11 = new TH1D("VbbHcc_tagOnly_Aplanarity_stack_11","",50,0,1);
   VbbHcc_tagOnly_Aplanarity_stack_11->SetBinContent(1,1.668699);
   VbbHcc_tagOnly_Aplanarity_stack_11->SetBinContent(2,0.1534328);
   VbbHcc_tagOnly_Aplanarity_stack_11->SetBinContent(3,0.0343041);
   VbbHcc_tagOnly_Aplanarity_stack_11->SetBinContent(4,0.01346853);
   VbbHcc_tagOnly_Aplanarity_stack_11->SetBinContent(6,0.001947864);
   VbbHcc_tagOnly_Aplanarity_stack_11->SetBinError(1,0.06115614);
   VbbHcc_tagOnly_Aplanarity_stack_11->SetBinError(2,0.01899553);
   VbbHcc_tagOnly_Aplanarity_stack_11->SetBinError(3,0.008464797);
   VbbHcc_tagOnly_Aplanarity_stack_11->SetBinError(4,0.005587416);
   VbbHcc_tagOnly_Aplanarity_stack_11->SetBinError(6,0.001947864);
   VbbHcc_tagOnly_Aplanarity_stack_11->SetEntries(888);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tagOnly_Aplanarity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagOnly_Aplanarity_stack_11->SetLineColor(ci);
   VbbHcc_tagOnly_Aplanarity_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_tagOnly_Aplanarity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_11->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Aplanarity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_11->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Aplanarity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagOnly_Aplanarity_stack_11,"");
   
   TH1D *VbbHcc_tagOnly_Aplanarity_stack_12 = new TH1D("VbbHcc_tagOnly_Aplanarity_stack_12","",50,0,1);
   VbbHcc_tagOnly_Aplanarity_stack_12->SetBinContent(1,0.7553229);
   VbbHcc_tagOnly_Aplanarity_stack_12->SetBinContent(2,0.08187776);
   VbbHcc_tagOnly_Aplanarity_stack_12->SetBinContent(3,0.02080824);
   VbbHcc_tagOnly_Aplanarity_stack_12->SetBinContent(4,0.007301079);
   VbbHcc_tagOnly_Aplanarity_stack_12->SetBinContent(5,0.002645291);
   VbbHcc_tagOnly_Aplanarity_stack_12->SetBinContent(6,0.0009667027);
   VbbHcc_tagOnly_Aplanarity_stack_12->SetBinContent(7,0.0006433891);
   VbbHcc_tagOnly_Aplanarity_stack_12->SetBinContent(8,0.001490493);
   VbbHcc_tagOnly_Aplanarity_stack_12->SetBinContent(9,0.0004276046);
   VbbHcc_tagOnly_Aplanarity_stack_12->SetBinContent(17,0.0002710721);
   VbbHcc_tagOnly_Aplanarity_stack_12->SetBinError(1,0.01487228);
   VbbHcc_tagOnly_Aplanarity_stack_12->SetBinError(2,0.004875875);
   VbbHcc_tagOnly_Aplanarity_stack_12->SetBinError(3,0.0024463);
   VbbHcc_tagOnly_Aplanarity_stack_12->SetBinError(4,0.001522978);
   VbbHcc_tagOnly_Aplanarity_stack_12->SetBinError(5,0.0008947948);
   VbbHcc_tagOnly_Aplanarity_stack_12->SetBinError(6,0.0004945357);
   VbbHcc_tagOnly_Aplanarity_stack_12->SetBinError(7,0.0004602067);
   VbbHcc_tagOnly_Aplanarity_stack_12->SetBinError(8,0.0006324262);
   VbbHcc_tagOnly_Aplanarity_stack_12->SetBinError(9,0.0004276046);
   VbbHcc_tagOnly_Aplanarity_stack_12->SetBinError(17,0.0002710721);
   VbbHcc_tagOnly_Aplanarity_stack_12->SetEntries(3081);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tagOnly_Aplanarity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagOnly_Aplanarity_stack_12->SetLineColor(ci);
   VbbHcc_tagOnly_Aplanarity_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_tagOnly_Aplanarity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_12->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Aplanarity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity_stack_12->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Aplanarity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagOnly_Aplanarity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tagOnly_Aplanarity__91 = new TH1D("VbbHcc_tagOnly_Aplanarity__91","",50,0,1);
   VbbHcc_tagOnly_Aplanarity__91->SetBinContent(0,1);
   VbbHcc_tagOnly_Aplanarity__91->SetBinContent(1,2568904);
   VbbHcc_tagOnly_Aplanarity__91->SetBinContent(2,357590);
   VbbHcc_tagOnly_Aplanarity__91->SetBinContent(3,90564);
   VbbHcc_tagOnly_Aplanarity__91->SetBinContent(4,29809);
   VbbHcc_tagOnly_Aplanarity__91->SetBinContent(5,11464);
   VbbHcc_tagOnly_Aplanarity__91->SetBinContent(6,5527);
   VbbHcc_tagOnly_Aplanarity__91->SetBinContent(7,2929);
   VbbHcc_tagOnly_Aplanarity__91->SetBinContent(8,1613);
   VbbHcc_tagOnly_Aplanarity__91->SetBinContent(9,970);
   VbbHcc_tagOnly_Aplanarity__91->SetBinContent(10,581);
   VbbHcc_tagOnly_Aplanarity__91->SetBinContent(11,355);
   VbbHcc_tagOnly_Aplanarity__91->SetBinContent(12,230);
   VbbHcc_tagOnly_Aplanarity__91->SetBinContent(13,162);
   VbbHcc_tagOnly_Aplanarity__91->SetBinContent(14,81);
   VbbHcc_tagOnly_Aplanarity__91->SetBinContent(15,74);
   VbbHcc_tagOnly_Aplanarity__91->SetBinContent(16,25);
   VbbHcc_tagOnly_Aplanarity__91->SetBinContent(17,19);
   VbbHcc_tagOnly_Aplanarity__91->SetBinContent(18,10);
   VbbHcc_tagOnly_Aplanarity__91->SetBinContent(19,8);
   VbbHcc_tagOnly_Aplanarity__91->SetBinContent(20,8);
   VbbHcc_tagOnly_Aplanarity__91->SetEntries(3070973);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagOnly_Aplanarity__91->SetLineColor(ci);
   VbbHcc_tagOnly_Aplanarity__91->SetLineWidth(2);
   VbbHcc_tagOnly_Aplanarity__91->SetMarkerStyle(20);
   VbbHcc_tagOnly_Aplanarity__91->SetMarkerSize(1.2);
   VbbHcc_tagOnly_Aplanarity__91->GetXaxis()->SetRange(1,100);
   VbbHcc_tagOnly_Aplanarity__91->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity__91->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Aplanarity__91->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Aplanarity__91->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity__91->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Aplanarity__91->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_Aplanarity__91->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_Aplanarity__91->GetZaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_Aplanarity__91->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tagOnly_Aplanarity_fx1091[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_VbbHcc_tagOnly_Aplanarity_fy1091[50] = { 2240068, 319623.2, 82457.94, 26955.18, 8409.678, 4459.215, 2607.479, 991.4136, 1148.109, 265.4586, 264.6216, 400.5998, 138.1538, 30.8081, 52.19873, 7.377098, 17.13298,
   2.848507, 1.54162, 0.638279, 0.2980364, 0.1097414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   Double_t Graph_from_VbbHcc_tagOnly_Aplanarity_fex1091[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_VbbHcc_tagOnly_Aplanarity_fey1091[50] = { 35084.54, 16809.11, 4226.342, 2208.657, 860.1068, 644.3808, 474.3764, 97.08651, 346.3809, 40.36298, 49.13693, 225.2441, 38.52698, 8.283701, 18.29918, 0.8061542, 9.053766,
   0.5118375, 0.2877696, 0.3367837, 0.1347493, 0.07771862, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_tagOnly_Aplanarity_fx1091,Graph_from_VbbHcc_tagOnly_Aplanarity_fy1091,Graph_from_VbbHcc_tagOnly_Aplanarity_fex1091,Graph_from_VbbHcc_tagOnly_Aplanarity_fey1091);
   gre->SetName("Graph_from_VbbHcc_tagOnly_Aplanarity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tagOnly_Aplanarity1091 = new TH1F("Graph_Graph_from_VbbHcc_tagOnly_Aplanarity1091","",100,0,1.1);
   Graph_Graph_from_VbbHcc_tagOnly_Aplanarity1091->SetMinimum(0);
   Graph_Graph_from_VbbHcc_tagOnly_Aplanarity1091->SetMaximum(2502668);
   Graph_Graph_from_VbbHcc_tagOnly_Aplanarity1091->SetDirectory(nullptr);
   Graph_Graph_from_VbbHcc_tagOnly_Aplanarity1091->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tagOnly_Aplanarity1091->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tagOnly_Aplanarity1091->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tagOnly_Aplanarity1091->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VbbHcc_tagOnly_Aplanarity1091->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tagOnly_Aplanarity1091->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tagOnly_Aplanarity1091->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tagOnly_Aplanarity1091->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tagOnly_Aplanarity1091->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VbbHcc_tagOnly_Aplanarity1091->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tagOnly_Aplanarity1091);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tagOnly_Aplanarity","Data (BTagCSV, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tagOnly_Aplanarity","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tagOnly_Aplanarity","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tagOnly_Aplanarity","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tagOnly_Aplanarity","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tagOnly_Aplanarity","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tagOnly_Aplanarity","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tagOnly_Aplanarity","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tagOnly_Aplanarity","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tagOnly_Aplanarity","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tagOnly_Aplanarity","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tagOnly_Aplanarity","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tagOnly_Aplanarity","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tagOnly_Aplanarity","MC unc. (stat.)","fl");

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
   Aplanarity_tagOnly_16->cd();
  
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
   
   TH1D *data_mc_ratio__92 = new TH1D("data_mc_ratio__92","",50,0,1);
   data_mc_ratio__92->SetBinContent(1,1.146797);
   data_mc_ratio__92->SetBinContent(2,1.118786);
   data_mc_ratio__92->SetBinContent(3,1.098305);
   data_mc_ratio__92->SetBinContent(4,1.105873);
   data_mc_ratio__92->SetBinContent(5,1.363191);
   data_mc_ratio__92->SetBinContent(6,1.239456);
   data_mc_ratio__92->SetBinContent(7,1.123307);
   data_mc_ratio__92->SetBinContent(8,1.62697);
   data_mc_ratio__92->SetBinContent(9,0.8448676);
   data_mc_ratio__92->SetBinContent(10,2.188665);
   data_mc_ratio__92->SetBinContent(11,1.341538);
   data_mc_ratio__92->SetBinContent(12,0.574139);
   data_mc_ratio__92->SetBinContent(13,1.172606);
   data_mc_ratio__92->SetBinContent(14,2.629179);
   data_mc_ratio__92->SetBinContent(15,1.417659);
   data_mc_ratio__92->SetBinContent(16,3.388867);
   data_mc_ratio__92->SetBinContent(17,1.108972);
   data_mc_ratio__92->SetBinContent(18,3.510611);
   data_mc_ratio__92->SetBinContent(19,5.189346);
   data_mc_ratio__92->SetBinContent(20,12.5337);
   data_mc_ratio__92->SetBinError(1,0.000715505);
   data_mc_ratio__92->SetBinError(2,0.001870916);
   data_mc_ratio__92->SetBinError(3,0.0036496);
   data_mc_ratio__92->SetBinError(4,0.006405183);
   data_mc_ratio__92->SetBinError(5,0.01273177);
   data_mc_ratio__92->SetBinError(6,0.01667195);
   data_mc_ratio__92->SetBinError(7,0.02075577);
   data_mc_ratio__92->SetBinError(8,0.04051001);
   data_mc_ratio__92->SetBinError(9,0.02712706);
   data_mc_ratio__92->SetBinError(10,0.09080113);
   data_mc_ratio__92->SetBinError(11,0.07120145);
   data_mc_ratio__92->SetBinError(12,0.03785761);
   data_mc_ratio__92->SetBinError(13,0.09212866);
   data_mc_ratio__92->SetBinError(14,0.292131);
   data_mc_ratio__92->SetBinError(15,0.1647995);
   data_mc_ratio__92->SetBinError(16,0.6777733);
   data_mc_ratio__92->SetBinError(17,0.2544157);
   data_mc_ratio__92->SetBinError(18,1.110153);
   data_mc_ratio__92->SetBinError(19,1.834711);
   data_mc_ratio__92->SetBinError(20,4.431333);
   data_mc_ratio__92->SetMinimum(0.4);
   data_mc_ratio__92->SetMaximum(1.6);
   data_mc_ratio__92->SetEntries(29.12444);
   data_mc_ratio__92->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__92->SetLineColor(ci);
   data_mc_ratio__92->SetLineWidth(2);
   data_mc_ratio__92->SetMarkerStyle(20);
   data_mc_ratio__92->SetMarkerSize(1.2);
   data_mc_ratio__92->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__92->GetXaxis()->SetRange(1,50);
   data_mc_ratio__92->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__92->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__92->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__92->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__92->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__92->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__92->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__92->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__92->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__92->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__92->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__92->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__92->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__92->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__92->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__92->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1092[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_mc_statistical_error_fy1092[50] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1 };
   Double_t Graph_from_mc_statistical_error_fex1092[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_mc_statistical_error_fey1092[50] = { 0.01566226, 0.05259039, 0.05125452, 0.08193813, 0.1022758, 0.1445054, 0.1819291, 0.09792735, 0.3016969, 0.15205, 0.1856875, 0.562267, 0.2788703, 0.2688806, 0.3505675, 0.109278, 0.5284407,
   0.1796863, 0.186667, 0.5276435, 0.4521236, 0.7081981, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1092,Graph_from_mc_statistical_error_fy1092,Graph_from_mc_statistical_error_fex1092,Graph_from_mc_statistical_error_fey1092);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1092 = new TH1F("Graph_Graph_from_mc_statistical_error1092","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1092->SetMinimum(0.1501623);
   Graph_Graph_from_mc_statistical_error1092->SetMaximum(1.849838);
   Graph_Graph_from_mc_statistical_error1092->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1092->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1092->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1092->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1092->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1092->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1092->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1092->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1092->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1092->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1092->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1092);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_tagOnly_16->cd();
   Aplanarity_tagOnly_16->Modified();
   Aplanarity_tagOnly_16->cd();
   Aplanarity_tagOnly_16->SetSelected(Aplanarity_tagOnly_16);
}

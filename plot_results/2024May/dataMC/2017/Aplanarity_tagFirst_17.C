#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tagFirst_17()
{
//=========Macro generated from canvas: Aplanarity_tagFirst_17/Aplanarity_tagFirst_17
//=========  (Thu May 23 13:00:03 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_tagFirst_17 = new TCanvas("Aplanarity_tagFirst_17", "Aplanarity_tagFirst_17",0,0,600,600);
   Aplanarity_tagFirst_17->SetHighLightColor(2);
   Aplanarity_tagFirst_17->Range(0,0,1,1);
   Aplanarity_tagFirst_17->SetFillColor(0);
   Aplanarity_tagFirst_17->SetFillStyle(4000);
   Aplanarity_tagFirst_17->SetBorderMode(0);
   Aplanarity_tagFirst_17->SetBorderSize(2);
   Aplanarity_tagFirst_17->SetFrameFillStyle(1000);
   Aplanarity_tagFirst_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-3556.145,1.052419,3552598);
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
   st->SetMaximum(3196983);
   
   TH1F *st_stack_191 = new TH1F("st_stack_191","",50,0,1);
   st_stack_191->SetMinimum(0.01);
   st_stack_191->SetMaximum(3196983);
   st_stack_191->SetDirectory(nullptr);
   st_stack_191->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_191->SetLineColor(ci);
   st_stack_191->SetLineWidth(0);
   st_stack_191->GetXaxis()->SetRange(1,50);
   st_stack_191->GetXaxis()->SetLabelFont(42);
   st_stack_191->GetXaxis()->SetTitleOffset(1);
   st_stack_191->GetXaxis()->SetTitleFont(42);
   st_stack_191->GetYaxis()->SetTitle("Events/0.02");
   st_stack_191->GetYaxis()->SetLabelFont(42);
   st_stack_191->GetYaxis()->SetLabelSize(0.05);
   st_stack_191->GetYaxis()->SetTitleSize(0.057);
   st_stack_191->GetYaxis()->SetTitleOffset(1.2);
   st_stack_191->GetYaxis()->SetTitleFont(42);
   st_stack_191->GetZaxis()->SetLabelFont(42);
   st_stack_191->GetZaxis()->SetTitleOffset(1);
   st_stack_191->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_191);
   
   
   TH1D *VH_tagFirst_Aplanarity_stack_1 = new TH1D("VH_tagFirst_Aplanarity_stack_1","",50,0,1);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(1,1161564);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(2,140300.1);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(3,34827.51);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(4,13405.65);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(5,7899.395);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(6,1988.594);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(7,1047.066);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(8,779.7853);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(9,509.2003);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(10,313.2338);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(11,194.6281);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(12,52.99996);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(13,43.95033);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(14,38.99299);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(15,1.078283);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(16,25.07289);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(17,0.4516895);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(18,43.63467);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(1,46286.74);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(2,5274.494);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(3,2747.556);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(4,1693.735);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(5,3106.162);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(6,411.3178);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(7,287.0678);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(8,272.314);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(9,194.9731);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(10,210.822);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(11,61.10583);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(12,26.93757);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(13,17.44908);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(14,23.25471);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(15,1.078283);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(16,15.10201);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(17,0.4516895);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(18,30.93528);
   VH_tagFirst_Aplanarity_stack_1->SetEntries(109648);

   ci = TColor::GetColor("#ff6600");
   VH_tagFirst_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_1->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_1,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_2 = new TH1D("VH_tagFirst_Aplanarity_stack_2","",50,0,1);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(1,14216.48);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(2,1989.028);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(3,529.0255);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(4,170.4964);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(5,75.75221);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(6,36.20329);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(7,24.71262);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(8,11.14081);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(9,5.813458);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(10,4.225426);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(11,3.810614);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(12,2.872158);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(13,1.523361);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(14,1.195186);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(15,0.3446602);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(16,0.1583968);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(17,0.2023658);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(18,0.521713);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(19,0.1874799);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(1,55.42882);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(2,20.71208);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(3,10.92087);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(4,6.003736);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(5,3.938634);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(6,2.731786);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(7,2.989111);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(8,1.258573);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(9,0.986097);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(10,0.9123806);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(11,1.064788);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(12,0.8852998);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(13,0.8996827);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(14,0.4963995);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(15,0.2351965);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(16,0.08233285);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(17,0.1906407);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(18,0.4094651);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(19,0.1874799);
   VH_tagFirst_Aplanarity_stack_2->SetEntries(209648);

   ci = TColor::GetColor("#660066");
   VH_tagFirst_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_2->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_2,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_3 = new TH1D("VH_tagFirst_Aplanarity_stack_3","",50,0,1);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(0,0.06949146);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(1,246306.4);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(2,33708.03);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(3,8858.182);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(4,3237.53);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(5,1456.651);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(6,753.687);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(7,420.0064);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(8,250.5683);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(9,155.1806);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(10,98.59566);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(11,63.54314);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(12,40.90726);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(13,28.10359);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(14,17.05814);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(15,11.30061);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(16,6.210942);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(17,4.197122);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(18,1.696317);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(19,0.7504878);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(20,0.7124123);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(21,0.3818539);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(22,0.3021764);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(0,0.06949146);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(1,154.7014);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(2,56.61585);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(3,29.22322);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(4,17.71946);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(5,11.88669);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(6,8.641403);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(7,6.372329);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(8,5.119247);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(9,4.015576);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(10,3.186758);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(11,2.410728);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(12,1.994978);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(13,1.739494);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(14,1.278268);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(15,1.062936);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(16,0.712047);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(17,0.7329766);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(18,0.3416367);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(19,0.2177242);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(20,0.2052389);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(21,0.2060527);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(22,0.2150108);
   VH_tagFirst_Aplanarity_stack_3->SetEntries(4351060);

   ci = TColor::GetColor("#cc00cc");
   VH_tagFirst_Aplanarity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_3->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_3->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_3->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_3->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_3,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_4 = new TH1D("VH_tagFirst_Aplanarity_stack_4","",50,0,1);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(1,10527.43);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(2,1167.127);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(3,311.5126);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(4,106.7569);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(5,43.48722);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(6,18.08984);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(7,10.5798);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(8,6.20929);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(9,4.000149);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(10,2.915889);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(11,2.606569);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(12,0.532465);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(13,0.2994622);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(14,0.4719848);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(15,0.1256136);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(16,0.1196562);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(17,0.1095954);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(1,68.93001);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(2,25.92847);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(3,16.56307);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(4,7.302129);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(5,3.513624);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(6,1.798183);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(7,1.770175);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(8,2.36369);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(9,0.8903859);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(10,0.6654938);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(11,0.9065886);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(12,0.2374795);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(13,0.1454672);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(14,0.2100241);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(15,0.08952342);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(16,0.1196562);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(17,0.07779615);
   VH_tagFirst_Aplanarity_stack_4->SetEntries(95670);

   ci = TColor::GetColor("#00cccc");
   VH_tagFirst_Aplanarity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_4->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_4->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_4->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_4->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_4->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_4->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_4->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_4->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_4->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_4,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_5 = new TH1D("VH_tagFirst_Aplanarity_stack_5","",50,0,1);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(1,5640.136);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(2,598.4603);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(3,143.9667);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(4,58.0627);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(5,21.82423);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(6,14.85718);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(7,5.805523);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(8,3.162163);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(9,4.191229);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(10,0.5859825);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(11,0.9040387);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(12,0.5566079);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(13,0.09834596);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(14,0.07741106);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(16,0.03334759);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(1,78.81594);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(2,28.00727);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(3,14.07275);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(4,7.711228);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(5,3.745686);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(6,5.103064);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(7,1.689724);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(8,0.9020253);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(9,2.597411);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(10,0.2967392);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(11,0.2665562);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(12,0.3312937);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(13,0.08406827);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(14,0.07291285);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(16,0.03334759);
   VH_tagFirst_Aplanarity_stack_5->SetEntries(45049);

   ci = TColor::GetColor("#ff99cc");
   VH_tagFirst_Aplanarity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_5->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_5->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_5->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_5->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_5->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_5->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_5->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_5->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_5->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_5,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_6 = new TH1D("VH_tagFirst_Aplanarity_stack_6","",50,0,1);
   VH_tagFirst_Aplanarity_stack_6->SetBinContent(1,50.69355);
   VH_tagFirst_Aplanarity_stack_6->SetBinContent(2,7.281433);
   VH_tagFirst_Aplanarity_stack_6->SetBinContent(3,1.416739);
   VH_tagFirst_Aplanarity_stack_6->SetBinContent(4,0.692247);
   VH_tagFirst_Aplanarity_stack_6->SetBinContent(6,0.2611829);
   VH_tagFirst_Aplanarity_stack_6->SetBinContent(8,0.1686304);
   VH_tagFirst_Aplanarity_stack_6->SetBinError(1,4.338515);
   VH_tagFirst_Aplanarity_stack_6->SetBinError(2,1.689639);
   VH_tagFirst_Aplanarity_stack_6->SetBinError(3,0.7611536);
   VH_tagFirst_Aplanarity_stack_6->SetBinError(4,0.3624366);
   VH_tagFirst_Aplanarity_stack_6->SetBinError(6,0.2611829);
   VH_tagFirst_Aplanarity_stack_6->SetBinError(8,0.1686304);
   VH_tagFirst_Aplanarity_stack_6->SetEntries(204);

   ci = TColor::GetColor("#9933ff");
   VH_tagFirst_Aplanarity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_6->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_6->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_6->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_6->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_6->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_6->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_6->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_6->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_6->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_6,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_7 = new TH1D("VH_tagFirst_Aplanarity_stack_7","",50,0,1);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(1,131.6403);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(2,15.4772);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(3,2.753447);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(4,1.357695);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(5,0.2061255);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(6,0.8384539);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(8,0.1216993);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(11,0.5424682);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(1,6.587636);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(2,2.349223);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(3,1.04625);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(4,0.5565141);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(5,0.2061255);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(6,0.6151703);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(8,0.1216993);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(11,0.5424682);
   VH_tagFirst_Aplanarity_stack_7->SetEntries(620);

   ci = TColor::GetColor("#3399ff");
   VH_tagFirst_Aplanarity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_7->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_7->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_7->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_7->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_7->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_7->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_7->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_7->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_7->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_7,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_8 = new TH1D("VH_tagFirst_Aplanarity_stack_8","",50,0,1);
   VH_tagFirst_Aplanarity_stack_8->SetBinContent(1,110.8746);
   VH_tagFirst_Aplanarity_stack_8->SetBinContent(2,11.61009);
   VH_tagFirst_Aplanarity_stack_8->SetBinContent(3,4.354695);
   VH_tagFirst_Aplanarity_stack_8->SetBinContent(4,0.7375593);
   VH_tagFirst_Aplanarity_stack_8->SetBinContent(6,0.7626167);
   VH_tagFirst_Aplanarity_stack_8->SetBinError(1,6.443799);
   VH_tagFirst_Aplanarity_stack_8->SetBinError(2,1.88746);
   VH_tagFirst_Aplanarity_stack_8->SetBinError(3,1.368426);
   VH_tagFirst_Aplanarity_stack_8->SetBinError(4,0.4480842);
   VH_tagFirst_Aplanarity_stack_8->SetBinError(6,0.7626167);
   VH_tagFirst_Aplanarity_stack_8->SetEntries(481);

   ci = TColor::GetColor("#33ff99");
   VH_tagFirst_Aplanarity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_8->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_8->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_8->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_8->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_8->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_8->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_8->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_8->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_8->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_8,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_9 = new TH1D("VH_tagFirst_Aplanarity_stack_9","",50,0,1);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(1,55.01505);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(2,5.370064);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(3,1.271904);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(4,0.4110257);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(5,0.206049);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(6,0.06894345);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(7,0.05521976);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(8,0.01337757);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(9,0.01468712);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(10,0.01783036);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(11,0.004666374);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(12,0.01129395);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(13,0.003274319);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(19,0.005490325);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(1,0.3477173);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(2,0.1100381);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(3,0.05370479);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(4,0.03089157);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(5,0.02189902);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(6,0.01191952);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(7,0.01171939);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(8,0.004385031);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(9,0.005100606);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(10,0.009567786);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(11,0.002735942);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(12,0.007022197);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(13,0.002473239);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(19,0.003540414);
   VH_tagFirst_Aplanarity_stack_9->SetEntries(39482);

   ci = TColor::GetColor("#cccc00");
   VH_tagFirst_Aplanarity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_9->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_9->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_9->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_9->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_9->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_9->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_9->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_9->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_9->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_9,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_10 = new TH1D("VH_tagFirst_Aplanarity_stack_10","",50,0,1);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(1,37.96204);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(2,4.256748);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(3,1.029375);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(4,0.3562219);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(5,0.1728054);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(6,0.07233187);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(7,0.05204137);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(8,0.02483336);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(9,0.01377716);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(10,0.008728683);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(11,0.005687442);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(12,0.003340645);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(13,0.002118087);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(14,0.002092572);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(15,0.0004278628);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(16,0.0005089974);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(17,0.0003482848);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(19,0.0008130978);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(20,0.0004072878);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(21,0.0003700873);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(1,0.1146038);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(2,0.03786954);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(3,0.01865709);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(4,0.01115302);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(5,0.00782307);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(6,0.004968453);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(7,0.004300942);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(8,0.002963182);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(9,0.00220812);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(10,0.001669198);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(11,0.001542265);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(12,0.001052825);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(13,0.0008733103);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(14,0.0008583249);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(15,0.0004278628);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(16,0.0003700688);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(17,0.0003482848);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(19,0.0005780722);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(20,0.0004072878);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(21,0.0003700873);
   VH_tagFirst_Aplanarity_stack_10->SetEntries(134198);

   ci = TColor::GetColor("#0000cc");
   VH_tagFirst_Aplanarity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_10->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_10->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_10->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_10->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_10->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_10->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_10->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_10->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_10->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_10,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_11 = new TH1D("VH_tagFirst_Aplanarity_stack_11","",50,0,1);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(1,1.310505);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(2,0.1171994);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(3,0.02448301);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(4,0.01407391);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(5,0.003769742);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(6,0.001290917);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(7,0.0001481517);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(9,0.001064883);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(11,0.0009156332);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(1,0.04545116);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(2,0.01369033);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(3,0.006655205);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(4,0.004561593);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(5,0.002177518);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(6,0.001290917);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(7,0.0001481517);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(9,0.001064883);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(11,0.0009156332);
   VH_tagFirst_Aplanarity_stack_11->SetEntries(1123);

   ci = TColor::GetColor("#cc0000");
   VH_tagFirst_Aplanarity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_11->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_11->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_11->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_11->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_11->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_11->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_11->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_11->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_11->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_11,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_12 = new TH1D("VH_tagFirst_Aplanarity_stack_12","",50,0,1);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(1,0.6510664);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(2,0.07794274);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(3,0.01720281);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(4,0.005566444);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(5,0.00250862);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(6,0.0002958805);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(7,0.0007757456);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(8,0.001198057);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(10,0.0001482523);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(11,0.0008430725);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(1,0.01166563);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(2,0.004217915);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(3,0.001941965);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(4,0.001157414);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(5,0.000690103);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(6,0.0002215981);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(7,0.000353572);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(8,0.0006203505);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(10,0.0001482523);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(11,0.0004308263);
   VH_tagFirst_Aplanarity_stack_12->SetEntries(4223);

   ci = TColor::GetColor("#00cc00");
   VH_tagFirst_Aplanarity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_12->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_12->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_12->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_12->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_12->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_12->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_12->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_12->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_12->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VH_tagFirst_Aplanarity__381 = new TH1D("VH_tagFirst_Aplanarity__381","",50,0,1);
   VH_tagFirst_Aplanarity__381->SetBinContent(1,1209867);
   VH_tagFirst_Aplanarity__381->SetBinContent(2,160660);
   VH_tagFirst_Aplanarity__381->SetBinContent(3,41537);
   VH_tagFirst_Aplanarity__381->SetBinContent(4,14176);
   VH_tagFirst_Aplanarity__381->SetBinContent(5,5901);
   VH_tagFirst_Aplanarity__381->SetBinContent(6,2825);
   VH_tagFirst_Aplanarity__381->SetBinContent(7,1596);
   VH_tagFirst_Aplanarity__381->SetBinContent(8,878);
   VH_tagFirst_Aplanarity__381->SetBinContent(9,521);
   VH_tagFirst_Aplanarity__381->SetBinContent(10,335);
   VH_tagFirst_Aplanarity__381->SetBinContent(11,223);
   VH_tagFirst_Aplanarity__381->SetBinContent(12,127);
   VH_tagFirst_Aplanarity__381->SetBinContent(13,93);
   VH_tagFirst_Aplanarity__381->SetBinContent(14,50);
   VH_tagFirst_Aplanarity__381->SetBinContent(15,38);
   VH_tagFirst_Aplanarity__381->SetBinContent(16,20);
   VH_tagFirst_Aplanarity__381->SetBinContent(17,9);
   VH_tagFirst_Aplanarity__381->SetBinContent(18,10);
   VH_tagFirst_Aplanarity__381->SetBinContent(19,1);
   VH_tagFirst_Aplanarity__381->SetBinContent(21,2);
   VH_tagFirst_Aplanarity__381->SetBinError(1,1099.94);
   VH_tagFirst_Aplanarity__381->SetBinError(2,400.8242);
   VH_tagFirst_Aplanarity__381->SetBinError(3,203.8063);
   VH_tagFirst_Aplanarity__381->SetBinError(4,119.063);
   VH_tagFirst_Aplanarity__381->SetBinError(5,76.81797);
   VH_tagFirst_Aplanarity__381->SetBinError(6,53.15073);
   VH_tagFirst_Aplanarity__381->SetBinError(7,39.94997);
   VH_tagFirst_Aplanarity__381->SetBinError(8,29.63106);
   VH_tagFirst_Aplanarity__381->SetBinError(9,22.82542);
   VH_tagFirst_Aplanarity__381->SetBinError(10,18.30301);
   VH_tagFirst_Aplanarity__381->SetBinError(11,14.93318);
   VH_tagFirst_Aplanarity__381->SetBinError(12,11.26943);
   VH_tagFirst_Aplanarity__381->SetBinError(13,9.643651);
   VH_tagFirst_Aplanarity__381->SetBinError(14,7.071068);
   VH_tagFirst_Aplanarity__381->SetBinError(15,6.164414);
   VH_tagFirst_Aplanarity__381->SetBinError(16,4.472136);
   VH_tagFirst_Aplanarity__381->SetBinError(17,3);
   VH_tagFirst_Aplanarity__381->SetBinError(18,3.162278);
   VH_tagFirst_Aplanarity__381->SetBinError(19,1);
   VH_tagFirst_Aplanarity__381->SetBinError(21,1.414214);
   VH_tagFirst_Aplanarity__381->SetEntries(1438918);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity__381->SetLineColor(ci);
   VH_tagFirst_Aplanarity__381->SetLineWidth(2);
   VH_tagFirst_Aplanarity__381->SetMarkerStyle(20);
   VH_tagFirst_Aplanarity__381->SetMarkerSize(1.2);
   VH_tagFirst_Aplanarity__381->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity__381->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__381->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__381->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__381->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__381->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__381->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__381->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__381->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__381->Draw("same E");
   
   Double_t Graph_from_VH_tagFirst_Aplanarity_fx1381[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_VH_tagFirst_Aplanarity_fy1381[50] = { 1438642, 177807, 44681.06, 16982.07, 9497.701, 2813.437, 1508.279, 1051.196, 678.4153, 419.5834, 266.0471, 97.88309, 73.98048, 57.79781, 12.8496, 31.59574, 4.961121,
   45.8527, 0.9442711, 0.7128195, 0.382224, 0.3021764, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   Double_t Graph_from_VH_tagFirst_Aplanarity_fex1381[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_VH_tagFirst_Aplanarity_fey1381[50] = { 46287.15, 5274.978, 2747.82, 1693.871, 3106.191, 411.4545, 287.1645, 272.3769, 195.0363, 210.8494, 61.17234, 27.02892, 17.55944, 23.29616, 1.534881, 15.11953, 0.8852538,
   30.93988, 0.2873419, 0.2052393, 0.2060531, 0.2150108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VH_tagFirst_Aplanarity_fx1381,Graph_from_VH_tagFirst_Aplanarity_fy1381,Graph_from_VH_tagFirst_Aplanarity_fex1381,Graph_from_VH_tagFirst_Aplanarity_fey1381);
   gre->SetName("Graph_from_VH_tagFirst_Aplanarity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagFirst_Aplanarity1381 = new TH1F("Graph_Graph_from_VH_tagFirst_Aplanarity1381","",100,0,1.1);
   Graph_Graph_from_VH_tagFirst_Aplanarity1381->SetMinimum(0);
   Graph_Graph_from_VH_tagFirst_Aplanarity1381->SetMaximum(1633422);
   Graph_Graph_from_VH_tagFirst_Aplanarity1381->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagFirst_Aplanarity1381->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagFirst_Aplanarity1381->SetLineColor(ci);
   Graph_Graph_from_VH_tagFirst_Aplanarity1381->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_Aplanarity1381->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_Aplanarity1381->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_Aplanarity1381->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_Aplanarity1381->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_Aplanarity1381->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_Aplanarity1381->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_Aplanarity1381->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagFirst_Aplanarity1381);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_tagFirst_Aplanarity","Data (BTagCSV, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","ggZHcc","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","ZHcc","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","ggZHbb","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","ZHbb","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","ZZ","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","WZ","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","WW","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","W + jets","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","Z + jets","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","t#bar{t}","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","Single top","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VH_tagFirst_Aplanarity","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Aplanarity_tagFirst_17->cd();
  
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
   
   TH1D *data_mc_ratio__382 = new TH1D("data_mc_ratio__382","",50,0,1);
   data_mc_ratio__382->SetBinContent(1,0.8409784);
   data_mc_ratio__382->SetBinContent(2,0.9035642);
   data_mc_ratio__382->SetBinContent(3,0.9296333);
   data_mc_ratio__382->SetBinContent(4,0.8347626);
   data_mc_ratio__382->SetBinContent(5,0.6213083);
   data_mc_ratio__382->SetBinContent(6,1.00411);
   data_mc_ratio__382->SetBinContent(7,1.05816);
   data_mc_ratio__382->SetBinContent(8,0.8352394);
   data_mc_ratio__382->SetBinContent(9,0.7679662);
   data_mc_ratio__382->SetBinContent(10,0.798411);
   data_mc_ratio__382->SetBinContent(11,0.8381976);
   data_mc_ratio__382->SetBinContent(12,1.297466);
   data_mc_ratio__382->SetBinContent(13,1.257088);
   data_mc_ratio__382->SetBinContent(14,0.8650847);
   data_mc_ratio__382->SetBinContent(15,2.957291);
   data_mc_ratio__382->SetBinContent(16,0.6329967);
   data_mc_ratio__382->SetBinContent(17,1.814106);
   data_mc_ratio__382->SetBinContent(18,0.2180897);
   data_mc_ratio__382->SetBinContent(19,1.059018);
   data_mc_ratio__382->SetBinContent(21,5.232534);
   data_mc_ratio__382->SetBinError(1,0.0007645678);
   data_mc_ratio__382->SetBinError(2,0.002254266);
   data_mc_ratio__382->SetBinError(3,0.004561357);
   data_mc_ratio__382->SetBinError(4,0.0070111);
   data_mc_ratio__382->SetBinError(5,0.008088059);
   data_mc_ratio__382->SetBinError(6,0.01889174);
   data_mc_ratio__382->SetBinError(7,0.02648713);
   data_mc_ratio__382->SetBinError(8,0.02818796);
   data_mc_ratio__382->SetBinError(9,0.03364521);
   data_mc_ratio__382->SetBinError(10,0.04362185);
   data_mc_ratio__382->SetBinError(11,0.05612986);
   data_mc_ratio__382->SetBinError(12,0.1151315);
   data_mc_ratio__382->SetBinError(13,0.130354);
   data_mc_ratio__382->SetBinError(14,0.1223414);
   data_mc_ratio__382->SetBinError(15,0.479736);
   data_mc_ratio__382->SetBinError(16,0.1415424);
   data_mc_ratio__382->SetBinError(17,0.604702);
   data_mc_ratio__382->SetBinError(18,0.06896601);
   data_mc_ratio__382->SetBinError(19,1.059018);
   data_mc_ratio__382->SetBinError(21,3.69996);
   data_mc_ratio__382->SetMinimum(0.4);
   data_mc_ratio__382->SetMaximum(1.6);
   data_mc_ratio__382->SetEntries(24.89593);
   data_mc_ratio__382->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__382->SetLineColor(ci);
   data_mc_ratio__382->SetLineWidth(2);
   data_mc_ratio__382->SetMarkerStyle(20);
   data_mc_ratio__382->SetMarkerSize(1.2);
   data_mc_ratio__382->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__382->GetXaxis()->SetRange(1,50);
   data_mc_ratio__382->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__382->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__382->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__382->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__382->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__382->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__382->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__382->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__382->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__382->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__382->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__382->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__382->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__382->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__382->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__382->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1382[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_mc_statistical_error_fy1382[50] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1 };
   Double_t Graph_from_mc_statistical_error_fex1382[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_mc_statistical_error_fey1382[50] = { 0.03217419, 0.02966688, 0.06149854, 0.09974468, 0.3270467, 0.1462462, 0.1903922, 0.2591115, 0.287488, 0.5025207, 0.2299305, 0.2761347, 0.2373523, 0.4030631, 0.1194497, 0.4785305, 0.1784383,
   0.6747668, 0.3043003, 0.2879261, 0.5390899, 0.7115409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1382,Graph_from_mc_statistical_error_fy1382,Graph_from_mc_statistical_error_fex1382,Graph_from_mc_statistical_error_fey1382);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1382 = new TH1F("Graph_Graph_from_mc_statistical_error1382","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1382->SetMinimum(0.1461509);
   Graph_Graph_from_mc_statistical_error1382->SetMaximum(1.853849);
   Graph_Graph_from_mc_statistical_error1382->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1382->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1382->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1382->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1382->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1382->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1382->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1382->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1382->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1382->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1382->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1382);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_tagFirst_17->cd();
   Aplanarity_tagFirst_17->Modified();
   Aplanarity_tagFirst_17->cd();
   Aplanarity_tagFirst_17->SetSelected(Aplanarity_tagFirst_17);
}

void Aplanarity_tags_17_logY()
{
//=========Macro generated from canvas: Aplanarity_tags_17/Aplanarity_tags_17
//=========  (Thu Aug 10 12:31:34 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_tags_17 = new TCanvas("Aplanarity_tags_17", "Aplanarity_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tags_17->SetHighLightColor(2);
   Aplanarity_tags_17->Range(0,0,1,1);
   Aplanarity_tags_17->SetFillColor(0);
   Aplanarity_tags_17->SetFillStyle(4000);
   Aplanarity_tags_17->SetBorderMode(0);
   Aplanarity_tags_17->SetBorderSize(2);
   Aplanarity_tags_17->SetFrameFillStyle(1000);
   Aplanarity_tags_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-2.911934,1.052419,13.96767);
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
   st->SetMaximum(5.089625e+11);
   
   TH1F *st_stack_62 = new TH1F("st_stack_62","",50,0,1);
   st_stack_62->SetMinimum(0.001273343);
   st_stack_62->SetMaximum(1.9042e+12);
   st_stack_62->SetDirectory(0);
   st_stack_62->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_62->SetLineColor(ci);
   st_stack_62->GetXaxis()->SetRange(1,50);
   st_stack_62->GetXaxis()->SetLabelFont(42);
   st_stack_62->GetXaxis()->SetLabelSize(0.035);
   st_stack_62->GetXaxis()->SetTitleSize(0.035);
   st_stack_62->GetXaxis()->SetTitleFont(42);
   st_stack_62->GetYaxis()->SetTitle("Events/0.02");
   st_stack_62->GetYaxis()->SetLabelFont(42);
   st_stack_62->GetYaxis()->SetLabelSize(0.05);
   st_stack_62->GetYaxis()->SetTitleSize(0.057);
   st_stack_62->GetYaxis()->SetTitleOffset(1.2);
   st_stack_62->GetYaxis()->SetTitleFont(42);
   st_stack_62->GetZaxis()->SetLabelFont(42);
   st_stack_62->GetZaxis()->SetLabelSize(0.035);
   st_stack_62->GetZaxis()->SetTitleSize(0.035);
   st_stack_62->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_62);
   
   
   TH1D *VbbHcc_tags_Aplanarity_stack_1 = new TH1D("VbbHcc_tags_Aplanarity_stack_1","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(1,166665.2);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(2,33547.08);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(3,3912.716);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(4,2288.497);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(5,528.5344);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(6,193.686);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(7,56.26824);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(8,54.99088);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(9,297.4088);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(10,27.4402);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(11,28.88113);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(1,15646.07);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(2,14922.81);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(3,733.6302);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(4,666.1927);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(5,275.1048);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(6,54.20044);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(7,26.28335);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(8,26.27174);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(9,269.3049);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(10,22.4618);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(11,23.09868);
   VbbHcc_tags_Aplanarity_stack_1->SetEntries(10314);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_2 = new TH1D("VbbHcc_tags_Aplanarity_stack_2","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(1,799.3729);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(2,110.559);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(3,33.15588);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(4,11.07389);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(5,6.681904);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(6,2.30631);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(7,1.543376);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(8,0.4855113);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(9,0.193253);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(10,0.3578148);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(11,0.1037628);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(12,0.4085355);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(13,0.04712387);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(14,0.05188141);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(1,11.06076);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(2,4.068946);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(3,2.26096);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(4,1.312459);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(5,1.08202);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(6,0.5307301);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(7,0.5489541);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(8,0.1536869);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(9,0.09671431);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(10,0.271862);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(11,0.07337139);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(12,0.275663);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(13,0.04712387);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(14,0.05188141);
   VbbHcc_tags_Aplanarity_stack_2->SetEntries(11980);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_2,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_3 = new TH1D("VbbHcc_tags_Aplanarity_stack_3","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(1,15523.36);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(2,2263.694);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(3,618.048);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(4,230.0819);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(5,105.1493);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(6,51.48494);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(7,29.20547);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(8,17.86393);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(9,11.01313);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(10,6.543282);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(11,3.599933);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(12,2.373412);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(13,2.354636);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(14,0.9263956);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(15,0.7059001);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(16,0.7574802);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(17,0.08913271);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(18,0.2556355);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(19,0.07035638);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(20,0.07035638);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(1,31.1546);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(2,11.85752);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(3,6.196762);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(4,3.770517);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(5,2.548961);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(6,1.78258);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(7,1.351519);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(8,1.049104);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(9,0.8285133);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(10,0.6343915);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(11,0.4760025);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(12,0.3883367);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(13,0.3895935);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(14,0.2437847);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(15,0.2093552);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(16,0.2230635);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(17,0.06302634);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(18,0.1297545);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(19,0.07035638);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(20,0.07035638);
   VbbHcc_tags_Aplanarity_stack_3->SetEntries(317372);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Aplanarity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_3->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_3,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_4 = new TH1D("VbbHcc_tags_Aplanarity_stack_4","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(1,2054.582);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(2,237.7685);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(3,54.50874);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(4,17.11679);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(5,8.911818);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(6,4.658161);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(7,2.64261);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(8,1.712519);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(9,0.6564532);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(10,0.9678834);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(11,0.1326196);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(12,0.240921);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(13,0.3492224);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(15,0.06630981);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(16,0.1083014);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(1,29.25425);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(2,12.24641);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(3,5.031747);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(4,1.790832);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(5,1.314704);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(6,0.9331735);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(7,0.7741502);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(8,0.5824421);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(9,0.2391078);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(10,0.4180278);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(11,0.09377623);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(12,0.1432591);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(13,0.1795894);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(15,0.06630981);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(16,0.1083014);
   VbbHcc_tags_Aplanarity_stack_4->SetEntries(17051);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Aplanarity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_4->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_4,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_5 = new TH1D("VbbHcc_tags_Aplanarity_stack_5","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(1,206.5483);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(2,23.23676);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(3,7.503917);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(4,2.342029);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(5,0.3268157);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(6,0.5802967);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(7,0.08120236);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(8,6.791729);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(9,0.1763629);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(11,0.08120236);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(1,11.15876);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(2,3.566784);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(3,1.945751);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(4,0.6281964);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(5,0.1999609);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(6,0.3894757);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(7,0.08120236);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(8,6.630318);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(9,0.1763629);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(11,0.08120236);
   VbbHcc_tags_Aplanarity_stack_5->SetEntries(2254);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Aplanarity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_5->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_5,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_6 = new TH1D("VbbHcc_tags_Aplanarity_stack_6","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_6->SetBinContent(1,1.261224);
   VbbHcc_tags_Aplanarity_stack_6->SetBinContent(2,0.3153059);
   VbbHcc_tags_Aplanarity_stack_6->SetBinError(1,0.6306118);
   VbbHcc_tags_Aplanarity_stack_6->SetBinError(2,0.3153059);
   VbbHcc_tags_Aplanarity_stack_6->SetEntries(5);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Aplanarity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_6->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_6,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_7 = new TH1D("VbbHcc_tags_Aplanarity_stack_7","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_7->SetBinContent(1,4.710902);
   VbbHcc_tags_Aplanarity_stack_7->SetBinContent(2,0.7438266);
   VbbHcc_tags_Aplanarity_stack_7->SetBinContent(3,0.2479422);
   VbbHcc_tags_Aplanarity_stack_7->SetBinContent(5,0.2479422);
   VbbHcc_tags_Aplanarity_stack_7->SetBinError(1,1.080755);
   VbbHcc_tags_Aplanarity_stack_7->SetBinError(2,0.4294485);
   VbbHcc_tags_Aplanarity_stack_7->SetBinError(3,0.2479422);
   VbbHcc_tags_Aplanarity_stack_7->SetBinError(5,0.2479422);
   VbbHcc_tags_Aplanarity_stack_7->SetEntries(24);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Aplanarity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_7->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_7,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_8 = new TH1D("VbbHcc_tags_Aplanarity_stack_8","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_8->SetBinContent(1,41.529);
   VbbHcc_tags_Aplanarity_stack_8->SetBinContent(2,2.785482);
   VbbHcc_tags_Aplanarity_stack_8->SetBinContent(3,0.2532256);
   VbbHcc_tags_Aplanarity_stack_8->SetBinContent(4,0.2532256);
   VbbHcc_tags_Aplanarity_stack_8->SetBinContent(5,0.2532256);
   VbbHcc_tags_Aplanarity_stack_8->SetBinError(1,3.24287);
   VbbHcc_tags_Aplanarity_stack_8->SetBinError(2,0.8398543);
   VbbHcc_tags_Aplanarity_stack_8->SetBinError(3,0.2532256);
   VbbHcc_tags_Aplanarity_stack_8->SetBinError(4,0.2532256);
   VbbHcc_tags_Aplanarity_stack_8->SetBinError(5,0.2532256);
   VbbHcc_tags_Aplanarity_stack_8->SetEntries(178);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Aplanarity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_8->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_8,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_9 = new TH1D("VbbHcc_tags_Aplanarity_stack_9","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(1,42.40812);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(2,3.183395);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(3,0.5442944);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(4,0.1986594);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(5,0.07591049);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(6,0.06460468);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(7,0.01776629);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(8,0.02745699);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(9,0.008075584);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(10,0.003230234);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(11,0.006460468);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(12,0.004845351);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(13,0.001615117);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(16,0.001615117);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(1,0.2617137);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(2,0.07170464);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(3,0.0296496);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(4,0.01791251);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(5,0.01107268);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(6,0.0102149);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(7,0.005356737);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(8,0.006659297);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(9,0.003611511);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(10,0.00228412);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(11,0.003230234);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(12,0.002797464);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(13,0.001615117);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(16,0.001615117);
   VbbHcc_tags_Aplanarity_stack_9->SetEntries(28819);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Aplanarity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_9->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_9,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_10 = new TH1D("VbbHcc_tags_Aplanarity_stack_10","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(1,17.72939);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(2,1.876595);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(3,0.4349422);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(4,0.1637771);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(5,0.06053533);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(6,0.03234079);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(7,0.02156053);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(8,0.01036564);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(9,0.009536387);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(10,0.005804758);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(11,0.002073128);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(12,0.001658502);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(13,0.002073128);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(14,0.0008292511);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(15,0.0004146255);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(16,0.0004146255);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(17,0.0004146255);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(18,0.001243877);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(1,0.08573831);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(2,0.02789416);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(3,0.013429);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(4,0.00824052);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(5,0.005009939);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(6,0.003661874);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(7,0.002989907);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(8,0.002073128);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(9,0.001988474);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(10,0.001551387);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(11,0.0009271309);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(12,0.0008292511);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(13,0.0009271309);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(14,0.0005863691);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(15,0.0004146255);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(16,0.0004146255);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(17,0.0004146255);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(18,0.0007181525);
   VbbHcc_tags_Aplanarity_stack_10->SetEntries(49090);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Aplanarity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_10->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_10,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_11 = new TH1D("VbbHcc_tags_Aplanarity_stack_11","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_11->SetBinContent(1,0.1200991);
   VbbHcc_tags_Aplanarity_stack_11->SetBinContent(2,0.01264201);
   VbbHcc_tags_Aplanarity_stack_11->SetBinContent(3,0.001580251);
   VbbHcc_tags_Aplanarity_stack_11->SetBinContent(6,0.003160502);
   VbbHcc_tags_Aplanarity_stack_11->SetBinError(1,0.01377631);
   VbbHcc_tags_Aplanarity_stack_11->SetBinError(2,0.004469625);
   VbbHcc_tags_Aplanarity_stack_11->SetBinError(3,0.001580251);
   VbbHcc_tags_Aplanarity_stack_11->SetBinError(6,0.002234813);
   VbbHcc_tags_Aplanarity_stack_11->SetEntries(87);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Aplanarity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_11->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_11,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_12 = new TH1D("VbbHcc_tags_Aplanarity_stack_12","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(1,0.04982536);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(2,0.005605353);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(3,0.001245634);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(4,0.0004152113);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(6,0.0002076057);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(12,0.0002076057);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(1,0.003216213);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(2,0.001078751);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(3,0.0005085279);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(4,0.0002935987);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(6,0.0002076057);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(12,0.0002076057);
   VbbHcc_tags_Aplanarity_stack_12->SetEntries(277);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Aplanarity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_12->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_Aplanarity__169 = new TH1D("VbbHcc_tags_Aplanarity__169","",50,0,1);
   VbbHcc_tags_Aplanarity__169->SetBinContent(1,57243);
   VbbHcc_tags_Aplanarity__169->SetBinContent(2,7249);
   VbbHcc_tags_Aplanarity__169->SetBinContent(3,2149);
   VbbHcc_tags_Aplanarity__169->SetBinContent(4,870);
   VbbHcc_tags_Aplanarity__169->SetBinContent(5,444);
   VbbHcc_tags_Aplanarity__169->SetBinContent(6,218);
   VbbHcc_tags_Aplanarity__169->SetBinContent(7,121);
   VbbHcc_tags_Aplanarity__169->SetBinContent(8,97);
   VbbHcc_tags_Aplanarity__169->SetBinContent(9,49);
   VbbHcc_tags_Aplanarity__169->SetBinContent(10,28);
   VbbHcc_tags_Aplanarity__169->SetBinContent(11,21);
   VbbHcc_tags_Aplanarity__169->SetBinContent(12,15);
   VbbHcc_tags_Aplanarity__169->SetBinContent(13,13);
   VbbHcc_tags_Aplanarity__169->SetBinContent(14,5);
   VbbHcc_tags_Aplanarity__169->SetBinContent(15,8);
   VbbHcc_tags_Aplanarity__169->SetBinContent(16,1);
   VbbHcc_tags_Aplanarity__169->SetEntries(68580);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity__169->SetLineColor(ci);
   VbbHcc_tags_Aplanarity__169->SetLineWidth(2);
   VbbHcc_tags_Aplanarity__169->SetMarkerStyle(20);
   VbbHcc_tags_Aplanarity__169->SetMarkerSize(1.2);
   VbbHcc_tags_Aplanarity__169->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity__169->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__169->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity__169->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity__169->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__169->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__169->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity__169->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity__169->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity__169->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__169->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__169->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity__169->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity__169->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__169->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Aplanarity_fx1123[50] = {
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
   Double_t Graph_from_VbbHcc_tags_Aplanarity_fy1123[50] = {
   185356.8,
   36191.26,
   4627.416,
   2549.728,
   650.2419,
   252.816,
   89.78022,
   81.88239,
   309.4656,
   35.31822,
   32.80718,
   3.02958,
   2.75467,
   0.9791062,
   0.7726246,
   0.8678113,
   0.08954733,
   0.2568794,
   0.07035638,
   0.07035638,
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
   0,
   0,
   0};
   Double_t Graph_from_VbbHcc_tags_Aplanarity_fex1123[50] = {
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
   Double_t Graph_from_VbbHcc_tags_Aplanarity_fey1123[50] = {
   15646.14,
   14922.82,
   733.6797,
   666.2074,
   275.1221,
   54.24177,
   26.33531,
   27.12248,
   269.3063,
   22.47629,
   23.10404,
   0.49732,
   0.431578,
   0.2492449,
   0.2196059,
   0.2479703,
   0.0630277,
   0.1297564,
   0.07035638,
   0.07035638,
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
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_tags_Aplanarity_fx1123,Graph_from_VbbHcc_tags_Aplanarity_fy1123,Graph_from_VbbHcc_tags_Aplanarity_fex1123,Graph_from_VbbHcc_tags_Aplanarity_fey1123);
   gre->SetName("Graph_from_VbbHcc_tags_Aplanarity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Aplanarity1123 = new TH1F("Graph_Graph_from_VbbHcc_tags_Aplanarity1123","",100,0,1.1);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1123->SetMinimum(221.1033);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1123->SetMaximum(221103.3);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1123->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1123->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Aplanarity1123->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1123->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1123->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1123->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1123->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1123->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1123->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1123->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1123->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1123->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1123->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1123->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1123->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1123->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Aplanarity1123);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Aplanarity","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_Aplanarity","MC unc. (stat.)","fl");

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
   Aplanarity_tags_17->cd();
  
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
   
   TH1D *data_mc_ratio__170 = new TH1D("data_mc_ratio__170","",50,0,1);
   data_mc_ratio__170->SetBinContent(1,0.3088259);
   data_mc_ratio__170->SetBinContent(2,0.200297);
   data_mc_ratio__170->SetBinContent(3,0.4644061);
   data_mc_ratio__170->SetBinContent(4,0.3412129);
   data_mc_ratio__170->SetBinContent(5,0.6828228);
   data_mc_ratio__170->SetBinContent(6,0.8622871);
   data_mc_ratio__170->SetBinContent(7,1.347736);
   data_mc_ratio__170->SetBinContent(8,1.184626);
   data_mc_ratio__170->SetBinContent(9,0.1583375);
   data_mc_ratio__170->SetBinContent(10,0.792792);
   data_mc_ratio__170->SetBinContent(11,0.6401037);
   data_mc_ratio__170->SetBinContent(12,4.951181);
   data_mc_ratio__170->SetBinContent(13,4.719258);
   data_mc_ratio__170->SetBinContent(14,5.106698);
   data_mc_ratio__170->SetBinContent(15,10.35432);
   data_mc_ratio__170->SetBinContent(16,1.152324);
   data_mc_ratio__170->SetBinError(1,0.001290781);
   data_mc_ratio__170->SetBinError(2,0.002352531);
   data_mc_ratio__170->SetBinError(3,0.01001797);
   data_mc_ratio__170->SetBinError(4,0.0115682);
   data_mc_ratio__170->SetBinError(5,0.03240534);
   data_mc_ratio__170->SetBinError(6,0.05840145);
   data_mc_ratio__170->SetBinError(7,0.1225214);
   data_mc_ratio__170->SetBinError(8,0.1202805);
   data_mc_ratio__170->SetBinError(9,0.02261964);
   data_mc_ratio__170->SetBinError(10,0.1498236);
   data_mc_ratio__170->SetBinError(11,0.1396821);
   data_mc_ratio__170->SetBinError(12,1.278389);
   data_mc_ratio__170->SetBinError(13,1.308887);
   data_mc_ratio__170->SetBinError(14,2.283785);
   data_mc_ratio__170->SetBinError(15,3.660804);
   data_mc_ratio__170->SetBinError(16,1.152324);
   data_mc_ratio__170->SetMinimum(0.4);
   data_mc_ratio__170->SetMaximum(1.6);
   data_mc_ratio__170->SetEntries(30.77453);
   data_mc_ratio__170->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__170->SetLineColor(ci);
   data_mc_ratio__170->SetLineWidth(2);
   data_mc_ratio__170->SetMarkerStyle(20);
   data_mc_ratio__170->SetMarkerSize(1.2);
   data_mc_ratio__170->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__170->GetXaxis()->SetRange(1,50);
   data_mc_ratio__170->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__170->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__170->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__170->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__170->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__170->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__170->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__170->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__170->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__170->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__170->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__170->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__170->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__170->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__170->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__170->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__170->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1124[50] = {
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
   Double_t Graph_from_mc_statistical_error_fy1124[50] = {
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
   Double_t Graph_from_mc_statistical_error_fex1124[50] = {
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
   Double_t Graph_from_mc_statistical_error_fey1124[50] = {
   0.08441092,
   0.4123322,
   0.1585506,
   0.2612857,
   0.4231074,
   0.2145503,
   0.2933308,
   0.331237,
   0.8702302,
   0.6363936,
   0.7042372,
   0.1641548,
   0.1566714,
   0.2545637,
   0.2842337,
   0.2857422,
   0.7038479,
   0.505126,
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
   0,
   0,
   0};
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1124,Graph_from_mc_statistical_error_fy1124,Graph_from_mc_statistical_error_fex1124,Graph_from_mc_statistical_error_fey1124);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1124 = new TH1F("Graph_Graph_from_mc_statistical_error1124","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1124->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1124->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1124->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1124->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1124->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1124->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1124->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1124->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1124->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1124->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1124->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1124->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1124->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1124->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1124->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1124->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1124->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1124->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1124);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_tags_17->cd();
   Aplanarity_tags_17->Modified();
   Aplanarity_tags_17->cd();
   Aplanarity_tags_17->SetSelected(Aplanarity_tags_17);
}

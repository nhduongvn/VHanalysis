#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_seljet_17()
{
//=========Macro generated from canvas: H_dR_seljet_17/H_dR_seljet_17
//=========  (Thu Feb 16 10:35:23 2023) by ROOT version 6.26/06
   TCanvas *H_dR_seljet_17 = new TCanvas("H_dR_seljet_17", "H_dR_seljet_17",0,0,600,600);
   H_dR_seljet_17->SetHighLightColor(2);
   H_dR_seljet_17->Range(-1.353788,-7.240264,7.264125,53.09527);
   H_dR_seljet_17->SetFillColor(0);
   H_dR_seljet_17->SetFillStyle(4000);
   H_dR_seljet_17->SetBorderMode(0);
   H_dR_seljet_17->SetBorderSize(2);
   H_dR_seljet_17->SetLeftMargin(0.15709);
   H_dR_seljet_17->SetRightMargin(0.1234783);
   H_dR_seljet_17->SetBottomMargin(0.12);
   H_dR_seljet_17->SetFrameFillStyle(1000);
   H_dR_seljet_17->SetFrameBorderMode(0);
   H_dR_seljet_17->SetFrameFillStyle(1000);
   H_dR_seljet_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(47.06172);
   
   TH1F *st_stack_278 = new TH1F("st_stack_278","",30,0,6);
   st_stack_278->SetMinimum(0);
   st_stack_278->SetMaximum(47.06172);
   st_stack_278->SetDirectory(0);
   st_stack_278->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_278->SetLineColor(ci);
   st_stack_278->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_278->GetXaxis()->SetRange(1,31);
   st_stack_278->GetXaxis()->SetLabelFont(42);
   st_stack_278->GetXaxis()->SetTitleOffset(1);
   st_stack_278->GetXaxis()->SetTitleFont(42);
   st_stack_278->GetYaxis()->SetTitle("Events/0.2");
   st_stack_278->GetYaxis()->SetLabelFont(42);
   st_stack_278->GetYaxis()->SetTitleSize(0.037);
   st_stack_278->GetYaxis()->SetTitleFont(42);
   st_stack_278->GetZaxis()->SetLabelFont(42);
   st_stack_278->GetZaxis()->SetTitleOffset(1);
   st_stack_278->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_278);
   
   
   TH1D *VbbHcc_seljet_H_dR_stack_1 = new TH1D("VbbHcc_seljet_H_dR_stack_1","",30,0,6);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(2,0.001753361);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(3,0.6193304);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(4,1.092609);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(5,1.548845);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(6,1.827829);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(7,2.144853);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(8,2.426824);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(9,2.969868);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(10,3.91901);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(11,5.240008);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(12,7.101356);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(13,10.31145);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(14,14.80439);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(15,19.94235);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(16,23.17113);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(17,7.925143);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(18,3.540754);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(19,1.839785);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(20,1.097474);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(21,0.6768956);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(22,0.4725365);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(23,0.2209618);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(24,0.1287685);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(25,0.0693746);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(26,0.05360338);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(27,0.01283323);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(28,0.007157217);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(29,0.001227691);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(2,0.001753361);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(3,0.03357097);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(4,0.04546837);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(5,0.05387794);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(6,0.0583194);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(7,0.06303576);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(8,0.06743345);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(9,0.07415301);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(10,0.08564584);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(11,0.0987115);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(12,0.1156524);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(13,0.139147);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(14,0.1665959);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(15,0.1939828);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(16,0.2089112);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(17,0.1216872);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(18,0.0810667);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(19,0.05814848);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(20,0.0446921);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(21,0.03502677);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(22,0.02890967);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(23,0.01969822);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(24,0.01487787);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(25,0.01075858);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(26,0.009747757);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(27,0.004399335);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(28,0.00361886);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(29,0.001227691);
   VbbHcc_seljet_H_dR_stack_1->SetEntries(65683);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_seljet_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_seljet_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_seljet_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_H_dR_stack_1,"");
   
   TH1D *VbbHcc_seljet_H_dR_stack_2 = new TH1D("VbbHcc_seljet_H_dR_stack_2","",30,0,6);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(2,0.0002645912);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(3,0.252031);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(4,0.5768017);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(5,0.751319);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(6,0.7525538);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(7,0.7029672);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(8,0.6752702);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(9,0.7718338);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(10,1.109473);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(11,1.718415);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(12,2.701127);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(13,4.116692);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(14,5.658143);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(15,7.536659);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(16,8.203348);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(17,3.481428);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(18,1.74734);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(19,0.9851903);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(20,0.5955511);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(21,0.3640081);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(22,0.2240192);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(23,0.1352926);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(24,0.07756679);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(25,0.03832214);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(26,0.01920935);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(27,0.004530453);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(28,0.001285931);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(2,0.0002645912);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(3,0.00761225);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(4,0.01165919);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(5,0.01338493);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(6,0.01344793);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(7,0.01300794);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(8,0.01273069);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(9,0.01359353);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(10,0.01631301);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(11,0.02032088);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(12,0.02550592);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(13,0.03153352);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(14,0.03698242);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(15,0.04267532);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(16,0.04455023);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(17,0.02894153);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(18,0.02046397);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(19,0.01531943);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(20,0.01183478);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(21,0.009239715);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(22,0.007203078);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(23,0.005571304);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(24,0.00419309);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(25,0.002912762);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(26,0.002021195);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(27,0.0009816211);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(28,0.0005264353);
   VbbHcc_seljet_H_dR_stack_2->SetEntries(187491);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_seljet_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_seljet_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_seljet_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_H_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_seljet_H_dR_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_seljet_H_dR_stack_1","ZHcc","F");

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
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_seljet_17->Modified();
   H_dR_seljet_17->cd();
   H_dR_seljet_17->SetSelected(H_dR_seljet_17);
}

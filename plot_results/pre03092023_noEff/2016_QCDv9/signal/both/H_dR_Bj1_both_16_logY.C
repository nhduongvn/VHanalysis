#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj1_both_16_logY()
{
//=========Macro generated from canvas: H_dR_Bj1_both_16/H_dR_Bj1_both_16
//=========  (Thu Mar  9 12:19:51 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj1_both_16 = new TCanvas("H_dR_Bj1_both_16", "H_dR_Bj1_both_16",0,0,600,600);
   H_dR_Bj1_both_16->SetHighLightColor(2);
   H_dR_Bj1_both_16->Range(-1.310117,-0.09979869,7.029799,0.7318571);
   H_dR_Bj1_both_16->SetFillColor(0);
   H_dR_Bj1_both_16->SetFillStyle(4000);
   H_dR_Bj1_both_16->SetBorderMode(0);
   H_dR_Bj1_both_16->SetBorderSize(2);
   H_dR_Bj1_both_16->SetLogy();
   H_dR_Bj1_both_16->SetLeftMargin(0.15709);
   H_dR_Bj1_both_16->SetRightMargin(0.1234783);
   H_dR_Bj1_both_16->SetBottomMargin(0.12);
   H_dR_Bj1_both_16->SetFrameFillStyle(1000);
   H_dR_Bj1_both_16->SetFrameBorderMode(0);
   H_dR_Bj1_both_16->SetFrameFillStyle(1000);
   H_dR_Bj1_both_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1e+10);
   
   TH1F *st_stack_173 = new TH1F("st_stack_173","",30,0,6);
   st_stack_173->SetMinimum(-2.436306e+09);
   st_stack_173->SetMaximum(-0.6436442);
   st_stack_173->SetDirectory(0);
   st_stack_173->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_173->SetLineColor(ci);
   st_stack_173->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   st_stack_173->GetXaxis()->SetRange(1,30);
   st_stack_173->GetXaxis()->SetLabelFont(42);
   st_stack_173->GetXaxis()->SetTitleOffset(1);
   st_stack_173->GetXaxis()->SetTitleFont(42);
   st_stack_173->GetYaxis()->SetTitle("Event/0.2");
   st_stack_173->GetYaxis()->SetLabelFont(42);
   st_stack_173->GetYaxis()->SetTitleSize(0.037);
   st_stack_173->GetYaxis()->SetTitleFont(42);
   st_stack_173->GetZaxis()->SetLabelFont(42);
   st_stack_173->GetZaxis()->SetTitleOffset(1);
   st_stack_173->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_173);
   
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_1 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(1,0.0964088);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(2,0.3605689);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(3,0.4261269);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(4,0.4145579);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(5,0.3335745);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(6,0.2101712);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(7,0.142685);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(8,0.1272596);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(9,0.07519887);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(10,0.06941434);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(11,0.05784528);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(12,0.06748616);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(13,0.05206075);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(14,0.05206075);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(15,0.05206075);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(16,0.05398893);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(17,0.01928176);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(18,0.01542541);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(19,0.00964088);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(20,0.007712704);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(21,0.007712704);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(22,0.001928176);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(25,0.001928176);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(1,0.01363426);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(2,0.02636741);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(3,0.0286644);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(4,0.02827261);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(5,0.0253612);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(6,0.02013075);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(7,0.0165868);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(8,0.01566458);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(9,0.01204146);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(10,0.01156906);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(11,0.01056106);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(12,0.01140724);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(13,0.0100191);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(14,0.0100191);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(15,0.0100191);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(16,0.01020295);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(17,0.006097428);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(18,0.005453705);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(19,0.004311533);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(20,0.003856352);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(21,0.003856352);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(22,0.001928176);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(25,0.001928176);
   VbbHcc_both_H_dR_Bj1_stack_1->SetEntries(1377);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_2 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(1,0.03098024);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(2,0.1450782);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(3,0.1916745);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(4,0.1740435);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(5,0.1410482);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(6,0.09722254);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(7,0.06372358);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(8,0.04684817);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(9,0.03626955);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(10,0.03072837);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(11,0.02720216);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(12,0.0241797);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(13,0.01889039);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(14,0.02065349);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(15,0.01662354);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(16,0.0161198);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(17,0.01032675);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(18,0.006800541);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(19,0.003526206);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(20,0.002518719);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(21,0.001763103);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(22,0.001007487);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(23,0.001763103);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(24,0.0007556156);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(25,0.0007556156);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(28,0.0002518719);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(29,0.0002518719);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(1,0.002793394);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(2,0.006044925);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(3,0.006948195);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(4,0.006620925);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(5,0.005960376);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(6,0.004948497);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(7,0.004006267);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(8,0.003435074);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(9,0.003022462);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(10,0.002782016);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(11,0.002617529);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(12,0.00246783);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(13,0.002181274);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(14,0.002280797);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(15,0.002046217);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(16,0.002014975);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(17,0.001612767);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(18,0.001308765);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(19,0.0009424183);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(20,0.0007964888);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(21,0.0006663903);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(22,0.0005037437);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(23,0.0006663903);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(24,0.0004362549);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(25,0.0004362549);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(28,0.0002518719);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(29,0.0002518719);
   VbbHcc_both_H_dR_Bj1_stack_2->SetEntries(4411);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj1_both_16->Modified();
   H_dR_Bj1_both_16->cd();
   H_dR_Bj1_both_16->SetSelected(H_dR_Bj1_both_16);
}

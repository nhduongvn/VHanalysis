#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_tags_all_logY()
{
//=========Macro generated from canvas: H_dR_tags_all/H_dR_tags_all
//=========  (Mon Dec 19 11:10:36 2022) by ROOT version 6.26/06
   TCanvas *H_dR_tags_all = new TCanvas("H_dR_tags_all", "H_dR_tags_all",0,0,600,600);
   H_dR_tags_all->SetHighLightColor(2);
   H_dR_tags_all->Range(-1.353788,0.4716035,7.264125,2.850704);
   H_dR_tags_all->SetFillColor(0);
   H_dR_tags_all->SetFillStyle(4000);
   H_dR_tags_all->SetBorderMode(0);
   H_dR_tags_all->SetBorderSize(2);
   H_dR_tags_all->SetLogy();
   H_dR_tags_all->SetLeftMargin(0.15709);
   H_dR_tags_all->SetRightMargin(0.1234783);
   H_dR_tags_all->SetBottomMargin(0.12);
   H_dR_tags_all->SetFrameFillStyle(1000);
   H_dR_tags_all->SetFrameBorderMode(0);
   H_dR_tags_all->SetFrameFillStyle(1000);
   H_dR_tags_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(315.4444);
   
   TH1F *st_stack_24 = new TH1F("st_stack_24","",30,0,6);
   st_stack_24->SetMinimum(5.716045);
   st_stack_24->SetMaximum(410.0098);
   st_stack_24->SetDirectory(0);
   st_stack_24->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_24->SetLineColor(ci);
   st_stack_24->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_24->GetXaxis()->SetRange(1,31);
   st_stack_24->GetXaxis()->SetLabelFont(42);
   st_stack_24->GetXaxis()->SetTitleOffset(1);
   st_stack_24->GetXaxis()->SetTitleFont(42);
   st_stack_24->GetYaxis()->SetTitle("Events/0.2");
   st_stack_24->GetYaxis()->SetLabelFont(42);
   st_stack_24->GetYaxis()->SetTitleSize(0.037);
   st_stack_24->GetYaxis()->SetTitleFont(42);
   st_stack_24->GetZaxis()->SetLabelFont(42);
   st_stack_24->GetZaxis()->SetTitleOffset(1);
   st_stack_24->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_24);
   
   
   TH1D *VbbHcc_tags_H_dR_all_stack_1 = new TH1D("VbbHcc_tags_H_dR_all_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(3,0.5165948);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(4,1.07066);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(5,1.33405);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(6,1.619481);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(7,1.968935);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(8,2.055789);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(9,2.23411);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(10,2.222149);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(11,2.250425);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(12,2.138665);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(13,2.246768);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(14,2.327596);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(15,2.504051);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(16,2.477132);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(17,0.9797449);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(18,0.5265118);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(19,0.2681398);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(20,0.188466);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(21,0.1132268);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(22,0.08112775);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(23,0.04618479);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(24,0.02557514);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(25,0.007195303);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(26,0.01123389);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(27,0.00361407);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(3,0.032326);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(4,0.0476358);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(5,0.05396714);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(6,0.05854726);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(7,0.06531221);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(8,0.0669318);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(9,0.07082648);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(10,0.06880856);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(11,0.0703419);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(12,0.06845874);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(13,0.06907199);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(14,0.07025898);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(15,0.07188011);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(16,0.07383683);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(17,0.04737476);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(18,0.03275209);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(19,0.02369113);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(20,0.0188039);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(21,0.01494715);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(22,0.01266307);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(23,0.009456216);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(24,0.006645084);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(25,0.003690872);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(26,0.004273686);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(27,0.002608774);
   VbbHcc_tags_H_dR_all_stack_1->SetEntries(16994);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_all_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_all_stack_2 = new TH1D("VbbHcc_tags_H_dR_all_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(2,0.0001892188);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(3,0.2123505);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(4,0.3909965);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(5,0.5041603);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(6,0.7042171);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(7,0.8046084);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(8,0.8368737);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(9,0.7394928);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(10,0.6454655);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(11,0.5770648);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(12,0.5707521);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(13,0.5461187);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(14,0.5925931);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(15,0.6503928);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(16,0.6177458);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(17,0.3224608);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(18,0.18938);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(19,0.1188714);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(20,0.06847808);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(21,0.05069305);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(22,0.0327722);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(23,0.02383864);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(24,0.01458488);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(25,0.008421765);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(26,0.003466413);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(27,0.001734852);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(28,0.000533292);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(2,0.0001892188);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(3,0.007976996);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(4,0.01068277);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(5,0.01220182);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(6,0.01439836);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(7,0.01556263);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(8,0.01592995);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(9,0.01472745);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(10,0.01391851);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(11,0.01298528);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(12,0.01295806);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(13,0.0126604);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(14,0.01307274);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(15,0.01376871);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(16,0.0133522);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(17,0.009540634);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(18,0.007330296);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(19,0.005811593);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(20,0.004368042);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(21,0.003841334);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(22,0.003017764);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(23,0.002604608);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(24,0.002078488);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(25,0.001461203);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(26,0.0009602101);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(27,0.0009272483);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(28,0.0003083126);
   VbbHcc_tags_H_dR_all_stack_2->SetEntries(38313);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_all_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_tags_all->Modified();
   H_dR_tags_all->cd();
   H_dR_tags_all->SetSelected(H_dR_tags_all);
}

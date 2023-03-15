#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_both_all()
{
//=========Macro generated from canvas: H_dR_both_all/H_dR_both_all
//=========  (Thu Feb 16 10:35:20 2023) by ROOT version 6.26/06
   TCanvas *H_dR_both_all = new TCanvas("H_dR_both_all", "H_dR_both_all",0,0,600,600);
   H_dR_both_all->SetHighLightColor(2);
   H_dR_both_all->Range(-1.353788,-0.6150908,7.264125,4.510666);
   H_dR_both_all->SetFillColor(0);
   H_dR_both_all->SetFillStyle(4000);
   H_dR_both_all->SetBorderMode(0);
   H_dR_both_all->SetBorderSize(2);
   H_dR_both_all->SetLeftMargin(0.15709);
   H_dR_both_all->SetRightMargin(0.1234783);
   H_dR_both_all->SetBottomMargin(0.12);
   H_dR_both_all->SetFrameFillStyle(1000);
   H_dR_both_all->SetFrameBorderMode(0);
   H_dR_both_all->SetFrameFillStyle(1000);
   H_dR_both_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(3.99809);
   
   TH1F *st_stack_152 = new TH1F("st_stack_152","",30,0,6);
   st_stack_152->SetMinimum(0);
   st_stack_152->SetMaximum(3.99809);
   st_stack_152->SetDirectory(0);
   st_stack_152->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_152->SetLineColor(ci);
   st_stack_152->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_152->GetXaxis()->SetRange(1,31);
   st_stack_152->GetXaxis()->SetLabelFont(42);
   st_stack_152->GetXaxis()->SetTitleOffset(1);
   st_stack_152->GetXaxis()->SetTitleFont(42);
   st_stack_152->GetYaxis()->SetTitle("Events/0.2");
   st_stack_152->GetYaxis()->SetLabelFont(42);
   st_stack_152->GetYaxis()->SetTitleSize(0.037);
   st_stack_152->GetYaxis()->SetTitleFont(42);
   st_stack_152->GetZaxis()->SetLabelFont(42);
   st_stack_152->GetZaxis()->SetTitleOffset(1);
   st_stack_152->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_152);
   
   
   TH1D *VbbHcc_both_H_dR_all_stack_1 = new TH1D("VbbHcc_both_H_dR_all_stack_1","",30,0,6);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(3,0.5111943);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(4,1.120277);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(5,1.474826);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(6,1.873166);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(7,1.74046);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(8,1.475099);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(9,1.265912);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(10,0.991195);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(11,0.9492666);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(12,0.9277803);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(13,0.957182);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(14,1.172064);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(15,1.208444);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(16,1.264153);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(17,0.4982634);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(18,0.2693159);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(19,0.1742528);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(20,0.09362249);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(21,0.04745448);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(22,0.04867779);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(23,0.03348249);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(24,0.01528906);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(25,0.01231653);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(26,0.002891781);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(3,0.03612661);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(4,0.0564754);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(5,0.06141214);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(6,0.08212435);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(7,0.0665628);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(8,0.06650205);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(9,0.05649549);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(10,0.04986387);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(11,0.04803837);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(12,0.04855822);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(13,0.04907536);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(14,0.05677948);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(15,0.05548842);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(16,0.05772197);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(17,0.03480979);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(18,0.02584794);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(19,0.02083806);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(20,0.01485885);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(21,0.0101765);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(22,0.01068717);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(23,0.009373845);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(24,0.005600883);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(25,0.005406964);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(26,0.002891781);
   VbbHcc_both_H_dR_all_stack_1->SetEntries(8153);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_both_H_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_all_stack_1,"");
   
   TH1D *VbbHcc_both_H_dR_all_stack_2 = new TH1D("VbbHcc_both_H_dR_all_stack_2","",30,0,6);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(3,0.1836567);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(4,0.3820858);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(5,0.5900956);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(6,0.7922278);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(7,0.843644);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(8,0.7348515);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(9,0.5510168);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(10,0.4404318);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(11,0.3742723);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(12,0.3955755);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(13,0.4093578);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(14,0.4395146);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(15,0.4948212);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(16,0.4936647);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(17,0.2412445);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(18,0.145393);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(19,0.09615617);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(20,0.05626087);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(21,0.04666559);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(22,0.02117055);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(23,0.01319389);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(24,0.007993181);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(25,0.00833205);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(26,0.003845038);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(27,0.001628119);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(28,0.0004374943);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(3,0.007653754);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(4,0.01120267);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(5,0.01375724);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(6,0.01742256);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(7,0.01723619);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(8,0.01534589);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(9,0.01335949);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(10,0.01216547);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(11,0.01099775);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(12,0.01131936);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(13,0.01148788);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(14,0.0119257);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(15,0.01284081);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(16,0.01304492);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(17,0.009480817);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(18,0.007350527);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(19,0.005560697);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(20,0.004224588);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(21,0.003949916);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(22,0.002605772);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(23,0.002093966);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(24,0.001536759);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(25,0.001673277);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(26,0.001137573);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(27,0.000745666);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(28,0.0004374943);
   VbbHcc_both_H_dR_all_stack_2->SetEntries(26049);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_both_H_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_all_stack_1","ZHcc","F");

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
   H_dR_both_all->Modified();
   H_dR_both_all->cd();
   H_dR_both_all->SetSelected(H_dR_both_all);
}

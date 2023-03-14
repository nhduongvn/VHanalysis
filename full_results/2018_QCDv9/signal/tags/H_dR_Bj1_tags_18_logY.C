#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj1_tags_18_logY()
{
//=========Macro generated from canvas: H_dR_Bj1_tags_18/H_dR_Bj1_tags_18
//=========  (Thu Mar  9 13:08:25 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj1_tags_18 = new TCanvas("H_dR_Bj1_tags_18", "H_dR_Bj1_tags_18",0,0,600,600);
   H_dR_Bj1_tags_18->SetHighLightColor(2);
   H_dR_Bj1_tags_18->Range(-1.310117,-0.1352096,7.029799,0.4240112);
   H_dR_Bj1_tags_18->SetFillColor(0);
   H_dR_Bj1_tags_18->SetFillStyle(4000);
   H_dR_Bj1_tags_18->SetBorderMode(0);
   H_dR_Bj1_tags_18->SetBorderSize(2);
   H_dR_Bj1_tags_18->SetLogy();
   H_dR_Bj1_tags_18->SetLeftMargin(0.15709);
   H_dR_Bj1_tags_18->SetRightMargin(0.1234783);
   H_dR_Bj1_tags_18->SetBottomMargin(0.12);
   H_dR_Bj1_tags_18->SetFrameFillStyle(1000);
   H_dR_Bj1_tags_18->SetFrameBorderMode(0);
   H_dR_Bj1_tags_18->SetFrameFillStyle(1000);
   H_dR_Bj1_tags_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(2.185517);
   
   TH1F *st_stack_47 = new TH1F("st_stack_47","",30,0,6);
   st_stack_47->SetMinimum(0.8548637);
   st_stack_47->SetMaximum(2.333937);
   st_stack_47->SetDirectory(0);
   st_stack_47->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_47->SetLineColor(ci);
   st_stack_47->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   st_stack_47->GetXaxis()->SetRange(1,30);
   st_stack_47->GetXaxis()->SetLabelFont(42);
   st_stack_47->GetXaxis()->SetTitleOffset(1);
   st_stack_47->GetXaxis()->SetTitleFont(42);
   st_stack_47->GetYaxis()->SetTitle("Event/0.2");
   st_stack_47->GetYaxis()->SetLabelFont(42);
   st_stack_47->GetYaxis()->SetTitleSize(0.037);
   st_stack_47->GetYaxis()->SetTitleFont(42);
   st_stack_47->GetZaxis()->SetLabelFont(42);
   st_stack_47->GetZaxis()->SetTitleOffset(1);
   st_stack_47->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_47);
   
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_1 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(1,0.2275762);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(2,1.076435);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(3,1.288081);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(4,1.008163);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(5,0.82155);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(6,0.6394891);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(7,0.4733585);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(8,0.3117794);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(9,0.2344035);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(10,0.1957155);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(11,0.1866125);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(12,0.1206154);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(13,0.1251669);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(14,0.1410972);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(15,0.09785776);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(16,0.104685);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(17,0.07054862);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(18,0.03641219);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(19,0.0182061);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(20,0.01593033);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(21,0.006827286);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(22,0.004551524);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(23,0.002275762);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(24,0.002275762);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(25,0.004551524);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(27,0.002275762);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(28,0.002275762);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(1,0.02275762);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(2,0.04949455);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(3,0.05414209);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(4,0.04789925);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(5,0.04323948);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(6,0.03814872);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(7,0.0328215);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(8,0.02663711);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(9,0.02309646);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(10,0.02110455);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(11,0.0206079);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(12,0.0165678);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(13,0.0168775);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(14,0.01791937);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(15,0.01492317);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(16,0.01543497);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(17,0.01267091);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(18,0.009103048);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(19,0.006436827);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(20,0.0060211);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(21,0.003941735);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(22,0.003218413);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(23,0.002275762);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(24,0.002275762);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(25,0.003218413);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(27,0.002275762);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(28,0.002275762);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetEntries(3172);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_2 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(1,0.08839876);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(2,0.4479869);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(3,0.5258977);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(4,0.484545);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(5,0.3685779);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(6,0.2382272);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(7,0.182491);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(8,0.1273541);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(9,0.102183);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(10,0.08300493);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(11,0.06832175);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(12,0.06023102);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(13,0.05753411);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(14,0.04974303);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(15,0.04824474);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(16,0.04015401);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(17,0.02157529);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(18,0.01588181);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(19,0.008690047);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(20,0.005693479);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(21,0.004195195);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(22,0.001797941);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(23,0.002996568);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(25,0.0005993136);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(26,0.0002996568);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(27,0.0005993136);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(31,0.0002996568);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(1,0.005146775);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(2,0.0115863);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(3,0.01255344);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(4,0.01204978);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(5,0.01050937);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(6,0.008449046);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(7,0.007394908);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(8,0.006177583);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(9,0.005533518);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(10,0.004987283);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(11,0.004524718);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(12,0.004248368);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(13,0.004152166);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(14,0.003860808);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(15,0.003802219);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(16,0.003468778);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(17,0.002542672);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(18,0.002181534);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(19,0.001613701);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(20,0.001306174);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(21,0.001121213);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(22,0.0007340063);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(23,0.000947598);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(25,0.0004237787);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(26,0.0002996568);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(27,0.0004237787);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(31,0.0002996568);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetEntries(10130);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj1_tags_18->Modified();
   H_dR_Bj1_tags_18->cd();
   H_dR_Bj1_tags_18->SetSelected(H_dR_Bj1_tags_18);
}

#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj1_tags_18_logY()
{
//=========Macro generated from canvas: H_dR_Bj1_tags_18/H_dR_Bj1_tags_18
//=========  (Tue Feb 14 10:43:06 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj1_tags_18 = new TCanvas("H_dR_Bj1_tags_18", "H_dR_Bj1_tags_18",0,0,600,600);
   H_dR_Bj1_tags_18->SetHighLightColor(2);
   H_dR_Bj1_tags_18->Range(-1.310117,0.4475617,7.029799,2.946564);
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
   st->SetMinimum(10);
   st->SetMaximum(378.0668);
   
   TH1F *st_stack_47 = new TH1F("st_stack_47","",30,0,6);
   st_stack_47->SetMinimum(5.590389);
   st_stack_47->SetMaximum(497.3521);
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
   st_stack_47->GetYaxis()->SetTitle("Events/0.2");
   st_stack_47->GetYaxis()->SetLabelFont(42);
   st_stack_47->GetYaxis()->SetTitleSize(0.037);
   st_stack_47->GetYaxis()->SetTitleFont(42);
   st_stack_47->GetZaxis()->SetLabelFont(42);
   st_stack_47->GetZaxis()->SetTitleOffset(1);
   st_stack_47->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_47);
   
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_1 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(1,0.5552859);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(2,2.344035);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(3,2.819669);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(4,2.450996);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(5,2.309898);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(6,1.943501);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(7,1.604412);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(8,1.144708);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(9,1.087814);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(10,0.8443077);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(11,0.7464499);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(12,0.6190072);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(13,0.5006676);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(14,0.5006676);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(15,0.4050856);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(16,0.4551524);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(17,0.2503338);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(18,0.1137881);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(19,0.0773759);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(20,0.05916981);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(21,0.03641219);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(22,0.009103048);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(23,0.01365457);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(24,0.009103048);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(25,0.006827286);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(26,0.002275762);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(27,0.002275762);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(1,0.03554854);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(2,0.07303742);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(3,0.08010553);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(4,0.07468522);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(5,0.07250365);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(6,0.06650522);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(7,0.06042566);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(8,0.05104002);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(9,0.04975546);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(10,0.04383427);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(11,0.0412158);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(12,0.03753283);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(13,0.033755);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(14,0.033755);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(15,0.03036245);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(16,0.03218413);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(17,0.02386839);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(18,0.01609207);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(19,0.01326986);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(20,0.01160415);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(21,0.009103048);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(22,0.004551524);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(23,0.005574455);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(24,0.004551524);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(25,0.003941735);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(26,0.002275762);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(27,0.002275762);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetEntries(9189);

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
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(1,0.2238436);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(2,0.8666075);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(3,0.9609993);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(4,0.8411366);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(5,0.7212739);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(6,0.5279953);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(7,0.4464886);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(8,0.3332184);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(9,0.2559069);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(10,0.2037666);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(11,0.1797941);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(12,0.1609157);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(13,0.1477308);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(14,0.1345459);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(15,0.121361);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(16,0.1123713);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(17,0.05513685);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(18,0.03565916);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(19,0.02397254);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(20,0.01558215);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(21,0.009888674);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(22,0.005693479);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(23,0.006892106);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(24,0.002696911);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(25,0.002397254);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(26,0.001498284);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(27,0.002397254);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(28,0.0002996568);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(31,0.0002996568);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(1,0.00819001);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(2,0.01611474);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(3,0.01696968);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(4,0.01587616);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(5,0.01470152);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(6,0.01257845);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(7,0.01156691);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(8,0.009992555);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(9,0.008756954);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(10,0.007814093);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(11,0.007340063);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(12,0.006944025);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(13,0.006653461);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(14,0.006349614);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(15,0.006030477);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(16,0.005802829);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(17,0.004064743);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(18,0.00326887);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(19,0.002680212);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(20,0.002160856);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(21,0.001721397);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(22,0.001306174);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(23,0.001437104);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(24,0.0008989704);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(25,0.0008475574);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(26,0.000670053);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(27,0.0008475574);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(28,0.0002996568);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(31,0.0002996568);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetEntries(21359);

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
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj1_tags_18->Modified();
   H_dR_Bj1_tags_18->cd();
   H_dR_Bj1_tags_18->SetSelected(H_dR_Bj1_tags_18);
}

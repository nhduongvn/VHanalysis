#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_tags_18_logY()
{
//=========Macro generated from canvas: Z_dR_tags_18/Z_dR_tags_18
//=========  (Thu Mar  9 12:19:49 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_tags_18 = new TCanvas("Z_dR_tags_18", "Z_dR_tags_18",0,0,600,600);
   Z_dR_tags_18->SetHighLightColor(2);
   Z_dR_tags_18->Range(-1.310117,-3.50087,7.029799,0.3452843);
   Z_dR_tags_18->SetFillColor(0);
   Z_dR_tags_18->SetFillStyle(4000);
   Z_dR_tags_18->SetBorderMode(0);
   Z_dR_tags_18->SetBorderSize(2);
   Z_dR_tags_18->SetLogy();
   Z_dR_tags_18->SetLeftMargin(0.15709);
   Z_dR_tags_18->SetRightMargin(0.1234783);
   Z_dR_tags_18->SetBottomMargin(0.12);
   Z_dR_tags_18->SetFrameFillStyle(1000);
   Z_dR_tags_18->SetFrameBorderMode(0);
   Z_dR_tags_18->SetFrameFillStyle(1000);
   Z_dR_tags_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   
   TH1F *st_stack_19 = new TH1F("st_stack_19","",30,0,6);
   st_stack_19->SetMinimum(19.0119);
   st_stack_19->SetMaximum(0.9134166);
   st_stack_19->SetDirectory(0);
   st_stack_19->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_19->SetLineColor(ci);
   st_stack_19->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_19->GetXaxis()->SetRange(1,30);
   st_stack_19->GetXaxis()->SetLabelFont(42);
   st_stack_19->GetXaxis()->SetTitleOffset(1);
   st_stack_19->GetXaxis()->SetTitleFont(42);
   st_stack_19->GetYaxis()->SetTitle("Event/0.2");
   st_stack_19->GetYaxis()->SetLabelFont(42);
   st_stack_19->GetYaxis()->SetTitleSize(0.037);
   st_stack_19->GetYaxis()->SetTitleFont(42);
   st_stack_19->GetZaxis()->SetLabelFont(42);
   st_stack_19->GetZaxis()->SetTitleOffset(1);
   st_stack_19->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_19);
   
   
   TH1D *VbbHcc_tags_Z_dR_stack_1 = new TH1D("VbbHcc_tags_Z_dR_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(3,0.536666);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(4,0.7190564);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(5,0.7298375);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(6,0.6290818);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(7,0.441491);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(8,0.3030322);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(9,0.2669409);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(10,0.1940985);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(11,0.1851423);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(12,0.2025685);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(13,0.2212186);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(14,0.2416457);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(15,0.3506683);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(16,0.2875289);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(17,0.1227111);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(18,0.05475836);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(19,0.02976792);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(20,0.01017171);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(21,0.01000462);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(22,0.004533374);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(23,0.005669388);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(24,0.003398922);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(27,0.001645873);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(3,0.034912);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(4,0.03778888);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(5,0.04199201);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(6,0.04625727);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(7,0.02908546);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(8,0.02389597);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(9,0.0225616);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(10,0.02345298);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(11,0.01866382);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(12,0.01991879);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(13,0.02150858);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(14,0.02150508);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(15,0.02630411);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(16,0.02413515);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(17,0.01516616);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(18,0.009955844);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(19,0.00993446);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(20,0.004241415);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(21,0.004560836);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(22,0.002628315);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(23,0.003290674);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(24,0.002421793);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(27,0.001645873);
   VbbHcc_tags_Z_dR_stack_1->SetEntries(3172);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_2 = new TH1D("VbbHcc_tags_Z_dR_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(3,0.1803462);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(4,0.3764451);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(5,0.3972885);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(6,0.3240404);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(7,0.2094067);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(8,0.121451);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(9,0.07323121);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(10,0.06253332);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(11,0.07048746);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(12,0.07448459);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(13,0.08773721);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(14,0.09252572);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(15,0.1107933);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(16,0.1191227);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(17,0.05042634);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(18,0.02213638);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(19,0.01379822);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(20,0.009212138);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(21,0.002037167);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(22,0.002379842);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(23,0.001216724);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(24,0.0009807079);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(25,0.000558501);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(3,0.007361013);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(4,0.009894817);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(5,0.01013387);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(6,0.009986408);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(7,0.007176465);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(8,0.005632654);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(9,0.004256019);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(10,0.003882066);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(11,0.004211335);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(12,0.004309381);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(13,0.004713192);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(14,0.004953558);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(15,0.005291859);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(16,0.006238257);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(17,0.004338241);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(18,0.002282709);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(19,0.001855383);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(20,0.001492274);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(21,0.0006944623);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(22,0.0007425762);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(23,0.000547165);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(24,0.0004956591);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(25,0.0003968636);
   VbbHcc_tags_Z_dR_stack_2->SetEntries(10130);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_1","ZHcc","F");

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
   Z_dR_tags_18->Modified();
   Z_dR_tags_18->cd();
   Z_dR_tags_18->SetSelected(Z_dR_tags_18);
}

#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj1_both_16()
{
//=========Macro generated from canvas: H_dR_Bj1_both_16/H_dR_Bj1_both_16
//=========  (Wed Jan 18 11:40:25 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj1_both_16 = new TCanvas("H_dR_Bj1_both_16", "H_dR_Bj1_both_16",0,0,600,600);
   H_dR_Bj1_both_16->SetHighLightColor(2);
   H_dR_Bj1_both_16->Range(-1.310117,-0.3342189,7.029799,2.450939);
   H_dR_Bj1_both_16->SetFillColor(0);
   H_dR_Bj1_both_16->SetFillStyle(4000);
   H_dR_Bj1_both_16->SetBorderMode(0);
   H_dR_Bj1_both_16->SetBorderSize(2);
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
   st->SetMaximum(2.172423);
   
   TH1F *st_stack_173 = new TH1F("st_stack_173","",30,0,6);
   st_stack_173->SetMinimum(0);
   st_stack_173->SetMaximum(2.172423);
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
   st_stack_173->GetYaxis()->SetTitle("Events/0.2");
   st_stack_173->GetYaxis()->SetLabelFont(42);
   st_stack_173->GetYaxis()->SetTitleSize(0.037);
   st_stack_173->GetYaxis()->SetTitleFont(42);
   st_stack_173->GetZaxis()->SetLabelFont(42);
   st_stack_173->GetZaxis()->SetTitleOffset(1);
   st_stack_173->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_173);
   
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_1 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(1,0.2160969);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(2,0.7606612);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(3,1.015656);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(4,1.057434);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(5,0.8485406);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(6,0.7015947);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(7,0.6036307);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(8,0.4941416);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(9,0.3644835);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(10,0.2967731);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(11,0.2751634);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(12,0.256435);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(13,0.2333847);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(14,0.2002498);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(15,0.1728775);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(16,0.1527085);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(17,0.09220135);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(18,0.05042261);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(19,0.03313486);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(20,0.0187284);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(21,0.01440646);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(22,0.008643877);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(23,0.005762585);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(24,0.007203231);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(25,0.005762585);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(26,0.001440646);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(28,0.001440646);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(1,0.01764424);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(2,0.03310353);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(3,0.0382518);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(4,0.03903061);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(5,0.03496351);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(6,0.03179229);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(7,0.02948929);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(8,0.02668114);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(9,0.02291488);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(10,0.02067716);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(11,0.01991013);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(12,0.01922062);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(13,0.01833643);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(14,0.01698497);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(15,0.01578149);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(16,0.01483236);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(17,0.01152517);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(18,0.008522977);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(19,0.006909096);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(20,0.005194323);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(21,0.004555723);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(22,0.003528848);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(23,0.002881292);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(24,0.003221383);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(25,0.002881292);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(26,0.001440646);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(28,0.001440646);
   VbbHcc_both_H_dR_Bj1_stack_1->SetEntries(5476);

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
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(1,0.1294458);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(2,0.3741147);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(3,0.4326264);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(4,0.3715942);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(5,0.2925584);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(6,0.2425084);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(7,0.1895779);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(8,0.1492498);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(9,0.130166);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(10,0.1017203);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(11,0.0896579);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(12,0.08677733);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(13,0.0666133);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(14,0.07093416);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(15,0.06589316);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(16,0.05995197);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(17,0.03366672);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(18,0.01962392);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(19,0.01386277);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(20,0.008101618);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(21,0.004140827);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(22,0.004140827);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(23,0.004320863);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(24,0.001620324);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(25,0.0009001798);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(26,0.0009001798);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(27,0.0005401079);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(31,0.000180036);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(1,0.004827516);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(2,0.008206954);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(3,0.008825435);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(4,0.008179261);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(5,0.007257481);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(6,0.006607589);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(7,0.00584216);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(8,0.00518366);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(9,0.004840925);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(10,0.004279406);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(11,0.004017667);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(12,0.003952599);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(13,0.003463061);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(14,0.003573612);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(15,0.003444291);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(16,0.003285348);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(17,0.002461955);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(18,0.001879631);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(19,0.001579809);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(20,0.001207718);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(21,0.0008634221);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(22,0.0008634221);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(23,0.0008819924);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(24,0.0005401079);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(25,0.0004025726);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(26,0.0004025726);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(27,0.0003118314);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(31,0.000180036);
   VbbHcc_both_H_dR_Bj1_stack_2->SetEntries(16360);

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

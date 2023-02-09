void H_pt_algo_18_logY()
{
//=========Macro generated from canvas: H_pt_algo_18/H_pt_algo_18
//=========  (Thu Feb  9 09:44:32 2023) by ROOT version 6.14/09
   TCanvas *H_pt_algo_18 = new TCanvas("H_pt_algo_18", "H_pt_algo_18",0,0,600,600);
   H_pt_algo_18->SetHighLightColor(2);
   H_pt_algo_18->Range(37.97653,0.5377739,1705.96,2.591725);
   H_pt_algo_18->SetFillColor(0);
   H_pt_algo_18->SetFillStyle(4000);
   H_pt_algo_18->SetBorderMode(0);
   H_pt_algo_18->SetBorderSize(2);
   H_pt_algo_18->SetLogy();
   H_pt_algo_18->SetLeftMargin(0.15709);
   H_pt_algo_18->SetRightMargin(0.1234783);
   H_pt_algo_18->SetBottomMargin(0.12);
   H_pt_algo_18->SetFrameFillStyle(1000);
   H_pt_algo_18->SetFrameBorderMode(0);
   H_pt_algo_18->SetFrameFillStyle(1000);
   H_pt_algo_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(193.5823);
   
   TH1F *st_stack_79 = new TH1F("st_stack_79","",40,0,2000);
   st_stack_79->SetMinimum(6.084824);
   st_stack_79->SetMaximum(243.4052);
   st_stack_79->SetDirectory(0);
   st_stack_79->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_79->SetLineColor(ci);
   st_stack_79->GetXaxis()->SetTitle("H p_{T} [GeV]");
   st_stack_79->GetXaxis()->SetRange(7,30);
   st_stack_79->GetXaxis()->SetLabelFont(42);
   st_stack_79->GetXaxis()->SetLabelSize(0.035);
   st_stack_79->GetXaxis()->SetTitleSize(0.035);
   st_stack_79->GetXaxis()->SetTitleFont(42);
   st_stack_79->GetYaxis()->SetTitle("Events/50.0");
   st_stack_79->GetYaxis()->SetLabelFont(42);
   st_stack_79->GetYaxis()->SetLabelSize(0.035);
   st_stack_79->GetYaxis()->SetTitleSize(0.037);
   st_stack_79->GetYaxis()->SetTitleOffset(0);
   st_stack_79->GetYaxis()->SetTitleFont(42);
   st_stack_79->GetZaxis()->SetLabelFont(42);
   st_stack_79->GetZaxis()->SetLabelSize(0.035);
   st_stack_79->GetZaxis()->SetTitleSize(0.035);
   st_stack_79->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_79);
   
   
   TH1D *VbbHcc_algo_H_pt_stack_1 = new TH1D("VbbHcc_algo_H_pt_stack_1","",40,0,2000);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(1,0.226614);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(2,1.388069);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(3,1.485381);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(4,0.9110992);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(5,0.5149832);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(6,0.3180692);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(7,0.1614623);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(8,0.1347852);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(9,0.03910372);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(10,0.01095994);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(11,0.01278842);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(12,0.007651353);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(13,0.002397148);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(14,0.002958322);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(16,0.01223407);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(18,0.002840873);
   VbbHcc_algo_H_pt_stack_1->SetBinError(1,0.0251349);
   VbbHcc_algo_H_pt_stack_1->SetBinError(2,0.06275665);
   VbbHcc_algo_H_pt_stack_1->SetBinError(3,0.06585357);
   VbbHcc_algo_H_pt_stack_1->SetBinError(4,0.05010424);
   VbbHcc_algo_H_pt_stack_1->SetBinError(5,0.05449685);
   VbbHcc_algo_H_pt_stack_1->SetBinError(6,0.03052713);
   VbbHcc_algo_H_pt_stack_1->SetBinError(7,0.02057208);
   VbbHcc_algo_H_pt_stack_1->SetBinError(8,0.01906781);
   VbbHcc_algo_H_pt_stack_1->SetBinError(9,0.01064338);
   VbbHcc_algo_H_pt_stack_1->SetBinError(10,0.005527779);
   VbbHcc_algo_H_pt_stack_1->SetBinError(11,0.005815471);
   VbbHcc_algo_H_pt_stack_1->SetBinError(12,0.004417986);
   VbbHcc_algo_H_pt_stack_1->SetBinError(13,0.002397148);
   VbbHcc_algo_H_pt_stack_1->SetBinError(14,0.002958322);
   VbbHcc_algo_H_pt_stack_1->SetBinError(16,0.007595962);
   VbbHcc_algo_H_pt_stack_1->SetBinError(18,0.002840873);
   VbbHcc_algo_H_pt_stack_1->SetEntries(2134);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_pt_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_H_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_pt_stack_1,"");
   
   TH1D *VbbHcc_algo_H_pt_stack_2 = new TH1D("VbbHcc_algo_H_pt_stack_2","",40,0,2000);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(1,0.02471617);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(2,0.1772383);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(3,0.4504421);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(4,0.4096343);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(5,0.2001828);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(6,0.1019415);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(7,0.04676945);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(8,0.0247654);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(9,0.008622431);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(10,0.002960529);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(11,0.0008339451);
   VbbHcc_algo_H_pt_stack_2->SetBinError(1,0.002982509);
   VbbHcc_algo_H_pt_stack_2->SetBinError(2,0.007943513);
   VbbHcc_algo_H_pt_stack_2->SetBinError(3,0.01262682);
   VbbHcc_algo_H_pt_stack_2->SetBinError(4,0.01268084);
   VbbHcc_algo_H_pt_stack_2->SetBinError(5,0.008600649);
   VbbHcc_algo_H_pt_stack_2->SetBinError(6,0.006020135);
   VbbHcc_algo_H_pt_stack_2->SetBinError(7,0.004809792);
   VbbHcc_algo_H_pt_stack_2->SetBinError(8,0.003110007);
   VbbHcc_algo_H_pt_stack_2->SetBinError(9,0.001763359);
   VbbHcc_algo_H_pt_stack_2->SetBinError(10,0.0009964562);
   VbbHcc_algo_H_pt_stack_2->SetBinError(11,0.0004881822);
   VbbHcc_algo_H_pt_stack_2->SetEntries(4285);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_pt_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_H_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_pt_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_pt_stack_1","ZHcc","F");

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
   H_pt_algo_18->Modified();
   H_pt_algo_18->cd();
   H_pt_algo_18->SetSelected(H_pt_algo_18);
}

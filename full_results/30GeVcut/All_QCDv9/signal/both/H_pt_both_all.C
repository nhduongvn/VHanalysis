#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_pt_both_all()
{
//=========Macro generated from canvas: H_pt_both_all/H_pt_both_all
//=========  (Tue Feb 14 15:57:10 2023) by ROOT version 6.26/06
   TCanvas *H_pt_both_all = new TCanvas("H_pt_both_all", "H_pt_both_all",0,0,600,600);
   H_pt_both_all->SetHighLightColor(2);
   H_pt_both_all->Range(37.97653,-4.134601,1705.96,30.32041);
   H_pt_both_all->SetFillColor(0);
   H_pt_both_all->SetFillStyle(4000);
   H_pt_both_all->SetBorderMode(0);
   H_pt_both_all->SetBorderSize(2);
   H_pt_both_all->SetLeftMargin(0.15709);
   H_pt_both_all->SetRightMargin(0.1234783);
   H_pt_both_all->SetBottomMargin(0.12);
   H_pt_both_all->SetFrameFillStyle(1000);
   H_pt_both_all->SetFrameBorderMode(0);
   H_pt_both_all->SetFrameFillStyle(1000);
   H_pt_both_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(26.8749);
   
   TH1F *st_stack_144 = new TH1F("st_stack_144","",40,0,2000);
   st_stack_144->SetMinimum(0);
   st_stack_144->SetMaximum(26.8749);
   st_stack_144->SetDirectory(0);
   st_stack_144->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_144->SetLineColor(ci);
   st_stack_144->GetXaxis()->SetTitle("H p_{T} [GeV]");
   st_stack_144->GetXaxis()->SetRange(7,30);
   st_stack_144->GetXaxis()->SetLabelFont(42);
   st_stack_144->GetXaxis()->SetTitleOffset(1);
   st_stack_144->GetXaxis()->SetTitleFont(42);
   st_stack_144->GetYaxis()->SetTitle("Events/50.0");
   st_stack_144->GetYaxis()->SetLabelFont(42);
   st_stack_144->GetYaxis()->SetTitleSize(0.037);
   st_stack_144->GetYaxis()->SetTitleFont(42);
   st_stack_144->GetZaxis()->SetLabelFont(42);
   st_stack_144->GetZaxis()->SetTitleOffset(1);
   st_stack_144->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_144);
   
   
   TH1D *VbbHcc_both_H_pt_all_stack_1 = new TH1D("VbbHcc_both_H_pt_all_stack_1","",40,0,2000);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(1,9.801797);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(2,17.9166);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(3,11.47189);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(4,5.778124);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(5,3.188135);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(6,1.772675);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(7,0.9454799);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(8,0.511552);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(9,0.2824023);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(10,0.1477665);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(11,0.0657602);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(12,0.04802666);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(13,0.03548436);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(14,0.02735983);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(15,0.01126439);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(16,0.01663409);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(18,0.002873518);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(19,0.004907163);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(20,0.001227937);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(23,0.002930821);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(24,0.002001313);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(1,0.1588393);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(2,0.2168206);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(3,0.1703093);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(4,0.1205784);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(5,0.1008973);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(6,0.07011988);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(7,0.04828723);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(8,0.03569197);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(9,0.02691581);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(10,0.01888501);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(11,0.01262118);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(12,0.01114836);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(13,0.009402323);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(14,0.008151018);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(15,0.005349045);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(16,0.00787154);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(18,0.002082033);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(19,0.00357586);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(20,0.001227937);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(23,0.002930821);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(24,0.002001313);
   VbbHcc_both_H_pt_all_stack_1->SetEntries(23382);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_pt_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_pt_all_stack_1->SetLineColor(ci);
   VbbHcc_both_H_pt_all_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_both_H_pt_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_pt_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_pt_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_pt_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_pt_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_pt_all_stack_1,"");
   
   TH1D *VbbHcc_both_H_pt_all_stack_2 = new TH1D("VbbHcc_both_H_pt_all_stack_2","",40,0,2000);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(1,1.769906);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(2,4.157548);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(3,4.37764);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(4,2.965685);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(5,1.561994);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(6,0.8014613);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(7,0.3896815);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(8,0.196342);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(9,0.09893015);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(10,0.04954047);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(11,0.01761825);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(12,0.01459282);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(13,0.004018639);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(14,0.003036998);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(15,0.0001561895);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(16,0.0004386855);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(17,0.001019854);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(19,0.0006273928);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(20,0.0004374943);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(23,0.0002225569);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(24,0.0002536154);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(1,0.02487259);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(2,0.03922729);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(3,0.04010018);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(4,0.03193657);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(5,0.02283569);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(6,0.01632547);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(7,0.01157898);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(8,0.008006645);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(9,0.005593553);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(10,0.003996808);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(11,0.002328322);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(12,0.002154451);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(13,0.001179744);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(14,0.000962755);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(15,0.0001561895);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(16,0.0003171006);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(17,0.0005970768);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(19,0.000455775);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(20,0.0004374943);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(23,0.0002225569);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(24,0.0002536154);
   VbbHcc_both_H_pt_all_stack_2->SetEntries(54951);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_pt_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_pt_all_stack_2->SetLineColor(ci);
   VbbHcc_both_H_pt_all_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_both_H_pt_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_pt_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_pt_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_pt_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_pt_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_pt_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_pt_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_pt_all_stack_1","ZHcc","F");

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
   H_pt_both_all->Modified();
   H_pt_both_all->cd();
   H_pt_both_all->SetSelected(H_pt_both_all);
}

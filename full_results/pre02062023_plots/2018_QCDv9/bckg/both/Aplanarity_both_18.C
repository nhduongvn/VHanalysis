#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_both_18()
{
//=========Macro generated from canvas: Aplanarity_both_18/Aplanarity_both_18
//=========  (Wed Jan 18 11:43:13 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_both_18 = new TCanvas("Aplanarity_both_18", "Aplanarity_both_18",0,0,600,600);
   Aplanarity_both_18->SetHighLightColor(2);
   Aplanarity_both_18->Range(-0.2183529,-9821581,1.171633,7.202493e+07);
   Aplanarity_both_18->SetFillColor(0);
   Aplanarity_both_18->SetFillStyle(4000);
   Aplanarity_both_18->SetBorderMode(0);
   Aplanarity_both_18->SetBorderSize(2);
   Aplanarity_both_18->SetLeftMargin(0.15709);
   Aplanarity_both_18->SetRightMargin(0.1234783);
   Aplanarity_both_18->SetBottomMargin(0.12);
   Aplanarity_both_18->SetFrameFillStyle(1000);
   Aplanarity_both_18->SetFrameBorderMode(0);
   Aplanarity_both_18->SetFrameFillStyle(1000);
   Aplanarity_both_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(6.384028e+07);
   
   TH1F *st_stack_191 = new TH1F("st_stack_191","",50,0,1);
   st_stack_191->SetMinimum(0);
   st_stack_191->SetMaximum(6.384028e+07);
   st_stack_191->SetDirectory(0);
   st_stack_191->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_191->SetLineColor(ci);
   st_stack_191->GetXaxis()->SetTitle("Aplanarity");
   st_stack_191->GetXaxis()->SetRange(1,50);
   st_stack_191->GetXaxis()->SetLabelFont(42);
   st_stack_191->GetXaxis()->SetTitleOffset(1);
   st_stack_191->GetXaxis()->SetTitleFont(42);
   st_stack_191->GetYaxis()->SetTitle("Events/0.02");
   st_stack_191->GetYaxis()->SetLabelFont(42);
   st_stack_191->GetYaxis()->SetTitleSize(0.037);
   st_stack_191->GetYaxis()->SetTitleFont(42);
   st_stack_191->GetZaxis()->SetLabelFont(42);
   st_stack_191->GetZaxis()->SetTitleOffset(1);
   st_stack_191->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_191);
   
   
   TH1D *VbbHcc_both_Aplanarity_stack_1 = new TH1D("VbbHcc_both_Aplanarity_stack_1","",50,0,1);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(1,4.116605e+07);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(2,2.115801e+07);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(3,1.054176e+07);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(4,6387648);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(5,3568288);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(6,2256961);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(7,1621364);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(8,1039272);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(9,601102.9);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(10,358279.8);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(11,383843.9);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(12,188843);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(13,142558.1);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(14,105608.5);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(15,59606.26);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(16,41865.2);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(17,35376.22);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(18,4550.266);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(19,31870.65);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(20,2500.095);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(21,2516.441);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(1,585217.1);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(2,488822.8);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(3,335752.2);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(4,272109.1);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(5,191616.9);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(6,154082.6);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(7,137566);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(8,107268.8);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(9,78587.44);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(10,49348.34);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(11,72710.66);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(12,43569.35);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(13,35967.98);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(14,34443.95);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(15,24223.46);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(16,23815.62);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(17,23940.25);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(18,2655.771);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(19,29277.96);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(20,2026.842);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(21,2439.217);
   VbbHcc_both_Aplanarity_stack_1->SetEntries(528827);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_2 = new TH1D("VbbHcc_both_Aplanarity_stack_2","",50,0,1);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(0,0.5536625);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(1,1394136);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(2,976425.6);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(3,651380);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(4,447822.1);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(5,315010.4);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(6,225219.2);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(7,162612.4);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(8,117966.9);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(9,85531.18);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(10,61720.67);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(11,44411.16);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(12,31414.27);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(13,22003.59);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(14,15045.02);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(15,10099.62);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(16,6546.887);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(17,4096.373);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(18,2415.135);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(19,1344.732);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(20,673.9843);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(21,290.572);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(22,113.7225);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(23,28.53277);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(24,4.828647);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(25,0.06372505);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(0,0.2572192);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(1,376.0025);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(2,314.0796);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(3,256.6628);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(4,213.6263);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(5,179.1297);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(6,151.7213);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(7,128.6623);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(8,109.6297);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(9,93.03776);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(10,79.08253);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(11,67.23978);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(12,56.11107);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(13,47.85112);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(14,39.45888);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(15,32.47511);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(16,26.09936);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(17,20.64667);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(18,15.94479);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(19,11.18651);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(20,8.196403);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(21,5.129448);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(22,3.221001);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(23,1.612715);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(24,0.6497291);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(25,0.06372505);
   VbbHcc_both_Aplanarity_stack_2->SetEntries(5.602093e+07);

   ci = TColor::GetColor("#990099");
   VbbHcc_both_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
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
   Aplanarity_both_18->Modified();
   Aplanarity_both_18->cd();
   Aplanarity_both_18->SetSelected(Aplanarity_both_18);
}

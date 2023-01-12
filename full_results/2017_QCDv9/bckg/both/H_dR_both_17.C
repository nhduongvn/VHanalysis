#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_both_17()
{
//=========Macro generated from canvas: H_dR_both_17/H_dR_both_17
//=========  (Mon Dec 19 11:11:47 2022) by ROOT version 6.26/06
   TCanvas *H_dR_both_17 = new TCanvas("H_dR_both_17", "H_dR_both_17",0,0,600,600);
   H_dR_both_17->SetHighLightColor(2);
   H_dR_both_17->Range(-1.353788,-1703917,7.264125,1.249539e+07);
   H_dR_both_17->SetFillColor(0);
   H_dR_both_17->SetFillStyle(4000);
   H_dR_both_17->SetBorderMode(0);
   H_dR_both_17->SetBorderSize(2);
   H_dR_both_17->SetLeftMargin(0.15709);
   H_dR_both_17->SetRightMargin(0.1234783);
   H_dR_both_17->SetBottomMargin(0.12);
   H_dR_both_17->SetFrameFillStyle(1000);
   H_dR_both_17->SetFrameBorderMode(0);
   H_dR_both_17->SetFrameFillStyle(1000);
   H_dR_both_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.107546e+07);
   
   TH1F *st_stack_134 = new TH1F("st_stack_134","",30,0,6);
   st_stack_134->SetMinimum(0);
   st_stack_134->SetMaximum(1.107546e+07);
   st_stack_134->SetDirectory(0);
   st_stack_134->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_134->SetLineColor(ci);
   st_stack_134->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_134->GetXaxis()->SetRange(1,31);
   st_stack_134->GetXaxis()->SetLabelFont(42);
   st_stack_134->GetXaxis()->SetTitleOffset(1);
   st_stack_134->GetXaxis()->SetTitleFont(42);
   st_stack_134->GetYaxis()->SetTitle("Events/0.2");
   st_stack_134->GetYaxis()->SetLabelFont(42);
   st_stack_134->GetYaxis()->SetTitleSize(0.037);
   st_stack_134->GetYaxis()->SetTitleFont(42);
   st_stack_134->GetZaxis()->SetLabelFont(42);
   st_stack_134->GetZaxis()->SetTitleOffset(1);
   st_stack_134->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_134);
   
   
   TH1D *VbbHcc_both_H_dR_stack_1 = new TH1D("VbbHcc_both_H_dR_stack_1","",30,0,6);
   VbbHcc_both_H_dR_stack_1->SetBinContent(2,20269.61);
   VbbHcc_both_H_dR_stack_1->SetBinContent(3,2479118);
   VbbHcc_both_H_dR_stack_1->SetBinContent(4,3275967);
   VbbHcc_both_H_dR_stack_1->SetBinContent(5,2707131);
   VbbHcc_both_H_dR_stack_1->SetBinContent(6,2960278);
   VbbHcc_both_H_dR_stack_1->SetBinContent(7,2888386);
   VbbHcc_both_H_dR_stack_1->SetBinContent(8,3353593);
   VbbHcc_both_H_dR_stack_1->SetBinContent(9,3404424);
   VbbHcc_both_H_dR_stack_1->SetBinContent(10,3521348);
   VbbHcc_both_H_dR_stack_1->SetBinContent(11,3889554);
   VbbHcc_both_H_dR_stack_1->SetBinContent(12,4266460);
   VbbHcc_both_H_dR_stack_1->SetBinContent(13,4904638);
   VbbHcc_both_H_dR_stack_1->SetBinContent(14,6067692);
   VbbHcc_both_H_dR_stack_1->SetBinContent(15,6460337);
   VbbHcc_both_H_dR_stack_1->SetBinContent(16,7100871);
   VbbHcc_both_H_dR_stack_1->SetBinContent(17,4735971);
   VbbHcc_both_H_dR_stack_1->SetBinContent(18,3458400);
   VbbHcc_both_H_dR_stack_1->SetBinContent(19,2949971);
   VbbHcc_both_H_dR_stack_1->SetBinContent(20,2497994);
   VbbHcc_both_H_dR_stack_1->SetBinContent(21,1627277);
   VbbHcc_both_H_dR_stack_1->SetBinContent(22,1325266);
   VbbHcc_both_H_dR_stack_1->SetBinContent(23,915525);
   VbbHcc_both_H_dR_stack_1->SetBinContent(24,596295.5);
   VbbHcc_both_H_dR_stack_1->SetBinContent(25,439642.8);
   VbbHcc_both_H_dR_stack_1->SetBinContent(26,217390.5);
   VbbHcc_both_H_dR_stack_1->SetBinContent(27,75165.4);
   VbbHcc_both_H_dR_stack_1->SetBinContent(28,38360.9);
   VbbHcc_both_H_dR_stack_1->SetBinContent(29,2588.018);
   VbbHcc_both_H_dR_stack_1->SetBinError(2,18265.85);
   VbbHcc_both_H_dR_stack_1->SetBinError(3,109102.2);
   VbbHcc_both_H_dR_stack_1->SetBinError(4,135520.8);
   VbbHcc_both_H_dR_stack_1->SetBinError(5,124676.5);
   VbbHcc_both_H_dR_stack_1->SetBinError(6,143370);
   VbbHcc_both_H_dR_stack_1->SetBinError(7,139127.6);
   VbbHcc_both_H_dR_stack_1->SetBinError(8,163452.2);
   VbbHcc_both_H_dR_stack_1->SetBinError(9,159946);
   VbbHcc_both_H_dR_stack_1->SetBinError(10,156554.9);
   VbbHcc_both_H_dR_stack_1->SetBinError(11,162728.8);
   VbbHcc_both_H_dR_stack_1->SetBinError(12,168482.6);
   VbbHcc_both_H_dR_stack_1->SetBinError(13,188615.9);
   VbbHcc_both_H_dR_stack_1->SetBinError(14,219823.8);
   VbbHcc_both_H_dR_stack_1->SetBinError(15,213788.5);
   VbbHcc_both_H_dR_stack_1->SetBinError(16,234987.6);
   VbbHcc_both_H_dR_stack_1->SetBinError(17,188172.2);
   VbbHcc_both_H_dR_stack_1->SetBinError(18,161001.8);
   VbbHcc_both_H_dR_stack_1->SetBinError(19,156147.7);
   VbbHcc_both_H_dR_stack_1->SetBinError(20,147882);
   VbbHcc_both_H_dR_stack_1->SetBinError(21,108080.6);
   VbbHcc_both_H_dR_stack_1->SetBinError(22,101685.1);
   VbbHcc_both_H_dR_stack_1->SetBinError(23,86305.82);
   VbbHcc_both_H_dR_stack_1->SetBinError(24,65971.26);
   VbbHcc_both_H_dR_stack_1->SetBinError(25,62062.73);
   VbbHcc_both_H_dR_stack_1->SetBinError(26,42274.82);
   VbbHcc_both_H_dR_stack_1->SetBinError(27,21428.69);
   VbbHcc_both_H_dR_stack_1->SetBinError(28,17416.5);
   VbbHcc_both_H_dR_stack_1->SetBinError(29,1879.097);
   VbbHcc_both_H_dR_stack_1->SetEntries(620777);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_1,"");
   
   TH1D *VbbHcc_both_H_dR_stack_2 = new TH1D("VbbHcc_both_H_dR_stack_2","",30,0,6);
   VbbHcc_both_H_dR_stack_2->SetBinContent(2,47.52179);
   VbbHcc_both_H_dR_stack_2->SetBinContent(3,67216.08);
   VbbHcc_both_H_dR_stack_2->SetBinContent(4,121755.4);
   VbbHcc_both_H_dR_stack_2->SetBinContent(5,147723.4);
   VbbHcc_both_H_dR_stack_2->SetBinContent(6,177467.1);
   VbbHcc_both_H_dR_stack_2->SetBinContent(7,193916.5);
   VbbHcc_both_H_dR_stack_2->SetBinContent(8,199702.4);
   VbbHcc_both_H_dR_stack_2->SetBinContent(9,202452.7);
   VbbHcc_both_H_dR_stack_2->SetBinContent(10,206615.5);
   VbbHcc_both_H_dR_stack_2->SetBinContent(11,215807.7);
   VbbHcc_both_H_dR_stack_2->SetBinContent(12,229552);
   VbbHcc_both_H_dR_stack_2->SetBinContent(13,247189.2);
   VbbHcc_both_H_dR_stack_2->SetBinContent(14,266916.3);
   VbbHcc_both_H_dR_stack_2->SetBinContent(15,286277.4);
   VbbHcc_both_H_dR_stack_2->SetBinContent(16,282767.7);
   VbbHcc_both_H_dR_stack_2->SetBinContent(17,162717.1);
   VbbHcc_both_H_dR_stack_2->SetBinContent(18,104600.5);
   VbbHcc_both_H_dR_stack_2->SetBinContent(19,70989.06);
   VbbHcc_both_H_dR_stack_2->SetBinContent(20,48578.21);
   VbbHcc_both_H_dR_stack_2->SetBinContent(21,32786.49);
   VbbHcc_both_H_dR_stack_2->SetBinContent(22,21606.4);
   VbbHcc_both_H_dR_stack_2->SetBinContent(23,13832.6);
   VbbHcc_both_H_dR_stack_2->SetBinContent(24,8292.866);
   VbbHcc_both_H_dR_stack_2->SetBinContent(25,4494.773);
   VbbHcc_both_H_dR_stack_2->SetBinContent(26,2169.726);
   VbbHcc_both_H_dR_stack_2->SetBinContent(27,887.8961);
   VbbHcc_both_H_dR_stack_2->SetBinContent(28,237.2651);
   VbbHcc_both_H_dR_stack_2->SetBinContent(29,14.46975);
   VbbHcc_both_H_dR_stack_2->SetBinError(2,1.839556);
   VbbHcc_both_H_dR_stack_2->SetBinError(3,69.82311);
   VbbHcc_both_H_dR_stack_2->SetBinError(4,94.12961);
   VbbHcc_both_H_dR_stack_2->SetBinError(5,103.6922);
   VbbHcc_both_H_dR_stack_2->SetBinError(6,113.607);
   VbbHcc_both_H_dR_stack_2->SetBinError(7,118.7647);
   VbbHcc_both_H_dR_stack_2->SetBinError(8,120.5932);
   VbbHcc_both_H_dR_stack_2->SetBinError(9,121.5268);
   VbbHcc_both_H_dR_stack_2->SetBinError(10,122.9094);
   VbbHcc_both_H_dR_stack_2->SetBinError(11,125.7593);
   VbbHcc_both_H_dR_stack_2->SetBinError(12,129.8618);
   VbbHcc_both_H_dR_stack_2->SetBinError(13,134.9011);
   VbbHcc_both_H_dR_stack_2->SetBinError(14,140.3702);
   VbbHcc_both_H_dR_stack_2->SetBinError(15,145.4719);
   VbbHcc_both_H_dR_stack_2->SetBinError(16,144.6256);
   VbbHcc_both_H_dR_stack_2->SetBinError(17,109.3806);
   VbbHcc_both_H_dR_stack_2->SetBinError(18,87.33127);
   VbbHcc_both_H_dR_stack_2->SetBinError(19,71.6264);
   VbbHcc_both_H_dR_stack_2->SetBinError(20,58.95568);
   VbbHcc_both_H_dR_stack_2->SetBinError(21,48.1883);
   VbbHcc_both_H_dR_stack_2->SetBinError(22,38.91553);
   VbbHcc_both_H_dR_stack_2->SetBinError(23,30.96443);
   VbbHcc_both_H_dR_stack_2->SetBinError(24,23.82751);
   VbbHcc_both_H_dR_stack_2->SetBinError(25,17.40813);
   VbbHcc_both_H_dR_stack_2->SetBinError(26,12.04315);
   VbbHcc_both_H_dR_stack_2->SetBinError(27,7.627957);
   VbbHcc_both_H_dR_stack_2->SetBinError(28,3.898011);
   VbbHcc_both_H_dR_stack_2->SetBinError(29,0.9232665);
   VbbHcc_both_H_dR_stack_2->SetEntries(5.027594e+07);

   ci = TColor::GetColor("#990099");
   VbbHcc_both_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_both_17->Modified();
   H_dR_both_17->cd();
   H_dR_both_17->SetSelected(H_dR_both_17);
}

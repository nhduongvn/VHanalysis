#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_both_all()
{
//=========Macro generated from canvas: H_dR_both_all/H_dR_both_all
//=========  (Tue Feb 14 16:10:11 2023) by ROOT version 6.26/06
   TCanvas *H_dR_both_all = new TCanvas("H_dR_both_all", "H_dR_both_all",0,0,600,600);
   H_dR_both_all->SetHighLightColor(2);
   H_dR_both_all->Range(-1.353788,-3137020,7.264125,2.300481e+07);
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
   st->SetMaximum(2.039063e+07);
   
   TH1F *st_stack_152 = new TH1F("st_stack_152","",30,0,6);
   st_stack_152->SetMinimum(0);
   st_stack_152->SetMaximum(2.039063e+07);
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
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(2,22781.9);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(3,6187979);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(4,7264589);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(5,5658427);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(6,5713448);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(7,5859285);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(8,5598805);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(9,6430591);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(10,6671665);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(11,7726000);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(12,8614162);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(13,9116356);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(14,1.090511e+07);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(15,1.177523e+07);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(16,1.276817e+07);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(17,8622036);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(18,6130902);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(19,5066764);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(20,3900190);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(21,3093026);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(22,2147668);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(23,1780663);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(24,1081748);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(25,744576.1);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(26,482071.8);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(27,170381.7);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(28,57833.3);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(29,4874.331);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(2,19641.85);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(3,173144.2);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(4,193477.8);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(5,165098.9);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(6,182628);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(7,197753);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(8,166137.5);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(9,207028.4);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(10,190061.4);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(11,242631.3);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(12,246773.2);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(13,223797.5);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(14,261845.8);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(15,257847.8);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(16,278777.6);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(17,232770.1);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(18,182226.5);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(19,181281.4);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(20,153444.8);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(21,142795.6);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(22,107478.3);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(23,116039.8);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(24,84706.18);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(25,71220.2);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(26,76415.03);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(27,29005.18);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(28,19119.81);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(29,2091.76);
   VbbHcc_both_H_dR_all_stack_1->SetEntries(1509118);

   ci = TColor::GetColor("#ff6600");
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
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(2,166.5324);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(3,200905.2);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(4,357234.2);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(5,433417);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(6,519527.4);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(7,566469.2);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(8,582557);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(9,588402.6);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(10,600641.8);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(11,627249.2);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(12,668101.3);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(13,720279.8);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(14,778624.2);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(15,835431.6);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(16,825584.1);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(17,473311.3);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(18,302982.4);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(19,204363.8);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(20,139039.1);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(21,93523.88);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(22,61666.68);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(23,39308.17);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(24,23691.37);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(25,12784.9);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(26,6275.577);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(27,2590.236);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(28,702.0896);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(29,48.25466);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(2,5.272351);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(3,129.8086);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(4,172.0692);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(5,189.93);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(6,207.1455);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(7,216.29);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(8,220.4734);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(9,221.0967);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(10,224.0736);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(11,228.5405);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(12,235.8492);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(13,245.308);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(14,255.3211);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(15,264.3464);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(16,262.8771);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(17,199.1088);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(18,159.0853);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(19,130.0305);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(20,106.5034);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(21,86.6566);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(22,70.80275);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(23,55.91751);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(24,43.28928);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(25,31.20994);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(26,22.32384);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(27,13.96342);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(28,7.719559);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(29,1.846204);
   VbbHcc_both_H_dR_all_stack_2->SetEntries(1.352603e+08);

   ci = TColor::GetColor("#990099");
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
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR_all_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_all_stack_1","QCD","F");

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

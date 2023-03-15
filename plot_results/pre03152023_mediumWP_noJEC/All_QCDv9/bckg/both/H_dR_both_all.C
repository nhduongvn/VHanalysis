#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_both_all()
{
//=========Macro generated from canvas: H_dR_both_all/H_dR_both_all
//=========  (Thu Mar  9 13:18:51 2023) by ROOT version 6.26/06
   TCanvas *H_dR_both_all = new TCanvas("H_dR_both_all", "H_dR_both_all",0,0,600,600);
   H_dR_both_all->SetHighLightColor(2);
   H_dR_both_all->Range(-1.353788,-465731,7.264125,3415361);
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
   st->SetMaximum(3027251);
   
   TH1F *st_stack_152 = new TH1F("st_stack_152","",30,0,6);
   st_stack_152->SetMinimum(0);
   st_stack_152->SetMaximum(3027251);
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
   st_stack_152->GetYaxis()->SetTitle("Event/0.2");
   st_stack_152->GetYaxis()->SetLabelFont(42);
   st_stack_152->GetYaxis()->SetTitleSize(0.037);
   st_stack_152->GetYaxis()->SetTitleFont(42);
   st_stack_152->GetZaxis()->SetLabelFont(42);
   st_stack_152->GetZaxis()->SetTitleOffset(1);
   st_stack_152->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_152);
   
   
   TH1D *VbbHcc_both_H_dR_all_stack_1 = new TH1D("VbbHcc_both_H_dR_all_stack_1","",30,0,6);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(2,1004.019);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(3,1134942);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(4,1146251);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(5,949691.8);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(6,859633.2);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(7,940510.1);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(8,914458.7);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(9,1029227);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(10,1123478);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(11,1249654);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(12,1257293);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(13,1432756);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(14,1819893);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(15,1964064);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(16,2171986);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(17,1402726);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(18,1041612);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(19,799699.7);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(20,596582.8);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(21,542730.5);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(22,375356);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(23,265229.1);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(24,195482.5);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(25,109486.7);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(26,56818.96);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(27,19288.11);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(28,6433.211);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(29,408.0823);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(2,478.3701);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(3,29706.94);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(4,25074.17);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(5,36663.71);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(6,28441.81);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(7,48567.59);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(8,32262.06);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(9,49818.96);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(10,52593.92);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(11,52442.94);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(12,36975.68);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(13,28718.79);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(14,77075.46);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(15,58027.87);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(16,75218.03);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(17,54354.77);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(18,46132.62);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(19,25905.39);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(20,28726.83);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(21,50599.6);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(22,27135.06);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(23,16284.71);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(24,22654.46);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(25,18343.1);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(26,6202.811);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(27,2386.162);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(28,1752.695);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(29,366.9577);
   VbbHcc_both_H_dR_all_stack_1->SetEntries(806512);

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
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(2,77.09847);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(3,84891.46);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(4,149581);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(5,175325.9);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(6,187985.6);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(7,181114.7);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(8,169537.5);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(9,166144.3);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(10,174900.4);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(11,194969.9);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(12,223516.2);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(13,258209.5);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(14,296472.6);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(15,334147.2);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(16,340632.7);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(17,194226.7);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(18,121918.3);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(19,80252.72);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(20,53324.84);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(21,35194.55);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(22,22645.97);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(23,14204);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(24,8418.484);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(25,4462.691);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(26,2162);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(27,869.3492);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(28,226.2184);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(29,16.71177);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(2,3.873956);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(3,81.738);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(4,107.9892);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(5,116.6203);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(6,120.7631);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(7,118.5344);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(8,114.87);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(9,114.1109);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(10,117.5267);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(11,123.6967);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(12,132.8862);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(13,142.6537);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(14,153.0852);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(15,162.9916);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(16,164.5617);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(17,124.1031);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(18,97.93674);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(19,78.74806);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(20,64.12381);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(21,51.60367);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(22,41.47714);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(23,32.63195);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(24,24.90607);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(25,17.74491);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(26,12.68034);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(27,7.814253);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(28,3.876653);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(29,1.049999);
   VbbHcc_both_H_dR_all_stack_2->SetEntries(5.170841e+07);

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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_both_all->Modified();
   H_dR_both_all->cd();
   H_dR_both_all->SetSelected(H_dR_both_all);
}

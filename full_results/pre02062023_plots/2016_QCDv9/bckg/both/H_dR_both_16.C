#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_both_16()
{
//=========Macro generated from canvas: H_dR_both_16/H_dR_both_16
//=========  (Wed Jan 18 11:43:12 2023) by ROOT version 6.26/06
   TCanvas *H_dR_both_16 = new TCanvas("H_dR_both_16", "H_dR_both_16",0,0,600,600);
   H_dR_both_16->SetHighLightColor(2);
   H_dR_both_16->Range(-1.353788,-971940.1,7.264125,7127561);
   H_dR_both_16->SetFillColor(0);
   H_dR_both_16->SetFillStyle(4000);
   H_dR_both_16->SetBorderMode(0);
   H_dR_both_16->SetBorderSize(2);
   H_dR_both_16->SetLeftMargin(0.15709);
   H_dR_both_16->SetRightMargin(0.1234783);
   H_dR_both_16->SetBottomMargin(0.12);
   H_dR_both_16->SetFrameFillStyle(1000);
   H_dR_both_16->SetFrameBorderMode(0);
   H_dR_both_16->SetFrameFillStyle(1000);
   H_dR_both_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(6317610);
   
   TH1F *st_stack_149 = new TH1F("st_stack_149","",30,0,6);
   st_stack_149->SetMinimum(0);
   st_stack_149->SetMaximum(6317610);
   st_stack_149->SetDirectory(0);
   st_stack_149->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_149->SetLineColor(ci);
   st_stack_149->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_149->GetXaxis()->SetRange(1,31);
   st_stack_149->GetXaxis()->SetLabelFont(42);
   st_stack_149->GetXaxis()->SetTitleOffset(1);
   st_stack_149->GetXaxis()->SetTitleFont(42);
   st_stack_149->GetYaxis()->SetTitle("Events/0.2");
   st_stack_149->GetYaxis()->SetLabelFont(42);
   st_stack_149->GetYaxis()->SetTitleSize(0.037);
   st_stack_149->GetYaxis()->SetTitleFont(42);
   st_stack_149->GetZaxis()->SetLabelFont(42);
   st_stack_149->GetZaxis()->SetTitleOffset(1);
   st_stack_149->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_149);
   
   
   TH1D *VbbHcc_both_H_dR_stack_1 = new TH1D("VbbHcc_both_H_dR_stack_1","",30,0,6);
   VbbHcc_both_H_dR_stack_1->SetBinContent(2,2006.608);
   VbbHcc_both_H_dR_stack_1->SetBinContent(3,1733392);
   VbbHcc_both_H_dR_stack_1->SetBinContent(4,2242843);
   VbbHcc_both_H_dR_stack_1->SetBinContent(5,1593607);
   VbbHcc_both_H_dR_stack_1->SetBinContent(6,1618728);
   VbbHcc_both_H_dR_stack_1->SetBinContent(7,1641079);
   VbbHcc_both_H_dR_stack_1->SetBinContent(8,1620757);
   VbbHcc_both_H_dR_stack_1->SetBinContent(9,1861934);
   VbbHcc_both_H_dR_stack_1->SetBinContent(10,1869694);
   VbbHcc_both_H_dR_stack_1->SetBinContent(11,2418736);
   VbbHcc_both_H_dR_stack_1->SetBinContent(12,2444050);
   VbbHcc_both_H_dR_stack_1->SetBinContent(13,2820481);
   VbbHcc_both_H_dR_stack_1->SetBinContent(14,3439152);
   VbbHcc_both_H_dR_stack_1->SetBinContent(15,3442459);
   VbbHcc_both_H_dR_stack_1->SetBinContent(16,4016976);
   VbbHcc_both_H_dR_stack_1->SetBinContent(17,2988888);
   VbbHcc_both_H_dR_stack_1->SetBinContent(18,2135083);
   VbbHcc_both_H_dR_stack_1->SetBinContent(19,1606740);
   VbbHcc_both_H_dR_stack_1->SetBinContent(20,1446583);
   VbbHcc_both_H_dR_stack_1->SetBinContent(21,1159451);
   VbbHcc_both_H_dR_stack_1->SetBinContent(22,801653);
   VbbHcc_both_H_dR_stack_1->SetBinContent(23,611623.6);
   VbbHcc_both_H_dR_stack_1->SetBinContent(24,460634.4);
   VbbHcc_both_H_dR_stack_1->SetBinContent(25,255507.8);
   VbbHcc_both_H_dR_stack_1->SetBinContent(26,196386.3);
   VbbHcc_both_H_dR_stack_1->SetBinContent(27,87566.23);
   VbbHcc_both_H_dR_stack_1->SetBinContent(28,14914.55);
   VbbHcc_both_H_dR_stack_1->SetBinContent(29,1228.356);
   VbbHcc_both_H_dR_stack_1->SetBinError(2,1503.117);
   VbbHcc_both_H_dR_stack_1->SetBinError(3,88668.9);
   VbbHcc_both_H_dR_stack_1->SetBinError(4,115915.2);
   VbbHcc_both_H_dR_stack_1->SetBinError(5,90450.46);
   VbbHcc_both_H_dR_stack_1->SetBinError(6,93631.03);
   VbbHcc_both_H_dR_stack_1->SetBinError(7,96854.55);
   VbbHcc_both_H_dR_stack_1->SetBinError(8,87652.3);
   VbbHcc_both_H_dR_stack_1->SetBinError(9,104018);
   VbbHcc_both_H_dR_stack_1->SetBinError(10,98402.07);
   VbbHcc_both_H_dR_stack_1->SetBinError(11,128114.7);
   VbbHcc_both_H_dR_stack_1->SetBinError(12,106700.6);
   VbbHcc_both_H_dR_stack_1->SetBinError(13,126899.2);
   VbbHcc_both_H_dR_stack_1->SetBinError(14,149448.8);
   VbbHcc_both_H_dR_stack_1->SetBinError(15,132800.6);
   VbbHcc_both_H_dR_stack_1->SetBinError(16,156775.8);
   VbbHcc_both_H_dR_stack_1->SetBinError(17,147347.9);
   VbbHcc_both_H_dR_stack_1->SetBinError(18,119458.7);
   VbbHcc_both_H_dR_stack_1->SetBinError(19,94963.55);
   VbbHcc_both_H_dR_stack_1->SetBinError(20,104675.6);
   VbbHcc_both_H_dR_stack_1->SetBinError(21,95662.77);
   VbbHcc_both_H_dR_stack_1->SetBinError(22,73545.31);
   VbbHcc_both_H_dR_stack_1->SetBinError(23,63922.51);
   VbbHcc_both_H_dR_stack_1->SetBinError(24,55155.19);
   VbbHcc_both_H_dR_stack_1->SetBinError(25,36515.02);
   VbbHcc_both_H_dR_stack_1->SetBinError(26,43061.41);
   VbbHcc_both_H_dR_stack_1->SetBinError(27,19046.75);
   VbbHcc_both_H_dR_stack_1->SetBinError(28,3801.188);
   VbbHcc_both_H_dR_stack_1->SetBinError(29,578.1274);
   VbbHcc_both_H_dR_stack_1->SetEntries(482555);

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
   VbbHcc_both_H_dR_stack_2->SetBinContent(2,43.07709);
   VbbHcc_both_H_dR_stack_2->SetBinContent(3,47588.25);
   VbbHcc_both_H_dR_stack_2->SetBinContent(4,83905.55);
   VbbHcc_both_H_dR_stack_2->SetBinContent(5,101913.4);
   VbbHcc_both_H_dR_stack_2->SetBinContent(6,122000.2);
   VbbHcc_both_H_dR_stack_2->SetBinContent(7,132936.9);
   VbbHcc_both_H_dR_stack_2->SetBinContent(8,136682.8);
   VbbHcc_both_H_dR_stack_2->SetBinContent(9,138279.2);
   VbbHcc_both_H_dR_stack_2->SetBinContent(10,141004.5);
   VbbHcc_both_H_dR_stack_2->SetBinContent(11,147368.1);
   VbbHcc_both_H_dR_stack_2->SetBinContent(12,156979.5);
   VbbHcc_both_H_dR_stack_2->SetBinContent(13,169114.1);
   VbbHcc_both_H_dR_stack_2->SetBinContent(14,183170.4);
   VbbHcc_both_H_dR_stack_2->SetBinContent(15,196580.9);
   VbbHcc_both_H_dR_stack_2->SetBinContent(16,194764.1);
   VbbHcc_both_H_dR_stack_2->SetBinContent(17,113272.3);
   VbbHcc_both_H_dR_stack_2->SetBinContent(18,73929.04);
   VbbHcc_both_H_dR_stack_2->SetBinContent(19,50751.51);
   VbbHcc_both_H_dR_stack_2->SetBinContent(20,35262.5);
   VbbHcc_both_H_dR_stack_2->SetBinContent(21,24318.39);
   VbbHcc_both_H_dR_stack_2->SetBinContent(22,16514.44);
   VbbHcc_both_H_dR_stack_2->SetBinContent(23,10809.74);
   VbbHcc_both_H_dR_stack_2->SetBinContent(24,6791.664);
   VbbHcc_both_H_dR_stack_2->SetBinContent(25,3762.04);
   VbbHcc_both_H_dR_stack_2->SetBinContent(26,1913.744);
   VbbHcc_both_H_dR_stack_2->SetBinContent(27,830.4223);
   VbbHcc_both_H_dR_stack_2->SetBinContent(28,244.3774);
   VbbHcc_both_H_dR_stack_2->SetBinContent(29,18.41212);
   VbbHcc_both_H_dR_stack_2->SetBinError(2,1.712581);
   VbbHcc_both_H_dR_stack_2->SetBinError(3,58.02324);
   VbbHcc_both_H_dR_stack_2->SetBinError(4,77.16842);
   VbbHcc_both_H_dR_stack_2->SetBinError(5,85.06312);
   VbbHcc_both_H_dR_stack_2->SetBinError(6,93.02472);
   VbbHcc_both_H_dR_stack_2->SetBinError(7,97.08069);
   VbbHcc_both_H_dR_stack_2->SetBinError(8,98.48877);
   VbbHcc_both_H_dR_stack_2->SetBinError(9,99.15788);
   VbbHcc_both_H_dR_stack_2->SetBinError(10,100.2385);
   VbbHcc_both_H_dR_stack_2->SetBinError(11,102.5953);
   VbbHcc_both_H_dR_stack_2->SetBinError(12,106.0116);
   VbbHcc_both_H_dR_stack_2->SetBinError(13,110.1747);
   VbbHcc_both_H_dR_stack_2->SetBinError(14,114.8008);
   VbbHcc_both_H_dR_stack_2->SetBinError(15,119.033);
   VbbHcc_both_H_dR_stack_2->SetBinError(16,118.5125);
   VbbHcc_both_H_dR_stack_2->SetBinError(17,90.11805);
   VbbHcc_both_H_dR_stack_2->SetBinError(18,72.5038);
   VbbHcc_both_H_dR_stack_2->SetBinError(19,59.81769);
   VbbHcc_both_H_dR_stack_2->SetBinError(20,49.61074);
   VbbHcc_both_H_dR_stack_2->SetBinError(21,41.01181);
   VbbHcc_both_H_dR_stack_2->SetBinError(22,33.62151);
   VbbHcc_both_H_dR_stack_2->SetBinError(23,27.03895);
   VbbHcc_both_H_dR_stack_2->SetBinError(24,21.33603);
   VbbHcc_both_H_dR_stack_2->SetBinError(25,15.80542);
   VbbHcc_both_H_dR_stack_2->SetBinError(26,11.20753);
   VbbHcc_both_H_dR_stack_2->SetBinError(27,7.351028);
   VbbHcc_both_H_dR_stack_2->SetBinError(28,3.927414);
   VbbHcc_both_H_dR_stack_2->SetBinError(29,1.077968);
   VbbHcc_both_H_dR_stack_2->SetEntries(3.456552e+07);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_both_16->Modified();
   H_dR_both_16->cd();
   H_dR_both_16->SetSelected(H_dR_both_16);
}

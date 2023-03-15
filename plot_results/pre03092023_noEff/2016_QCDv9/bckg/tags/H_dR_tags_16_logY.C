#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_tags_16_logY()
{
//=========Macro generated from canvas: H_dR_tags_16/H_dR_tags_16
//=========  (Thu Feb 16 10:37:38 2023) by ROOT version 6.26/06
   TCanvas *H_dR_tags_16 = new TCanvas("H_dR_tags_16", "H_dR_tags_16",0,0,600,600);
   H_dR_tags_16->SetHighLightColor(2);
   H_dR_tags_16->Range(-1.353788,-0.8393173,7.264125,9.138878);
   H_dR_tags_16->SetFillColor(0);
   H_dR_tags_16->SetFillStyle(4000);
   H_dR_tags_16->SetBorderMode(0);
   H_dR_tags_16->SetBorderSize(2);
   H_dR_tags_16->SetLogy();
   H_dR_tags_16->SetLeftMargin(0.15709);
   H_dR_tags_16->SetRightMargin(0.1234783);
   H_dR_tags_16->SetBottomMargin(0.12);
   H_dR_tags_16->SetFrameFillStyle(1000);
   H_dR_tags_16->SetFrameBorderMode(0);
   H_dR_tags_16->SetFrameFillStyle(1000);
   H_dR_tags_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(5.878662e+07);
   
   TH1F *st_stack_21 = new TH1F("st_stack_21","",30,0,6);
   st_stack_21->SetMinimum(2.280689);
   st_stack_21->SetMaximum(1.383752e+08);
   st_stack_21->SetDirectory(0);
   st_stack_21->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_21->SetLineColor(ci);
   st_stack_21->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_21->GetXaxis()->SetRange(1,31);
   st_stack_21->GetXaxis()->SetLabelFont(42);
   st_stack_21->GetXaxis()->SetTitleOffset(1);
   st_stack_21->GetXaxis()->SetTitleFont(42);
   st_stack_21->GetYaxis()->SetTitle("Events/0.2");
   st_stack_21->GetYaxis()->SetLabelFont(42);
   st_stack_21->GetYaxis()->SetTitleSize(0.037);
   st_stack_21->GetYaxis()->SetTitleFont(42);
   st_stack_21->GetZaxis()->SetLabelFont(42);
   st_stack_21->GetZaxis()->SetTitleOffset(1);
   st_stack_21->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_21);
   
   
   TH1D *VbbHcc_tags_H_dR_stack_1 = new TH1D("VbbHcc_tags_H_dR_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(2,92.24426);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(3,265296.8);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(4,276604.7);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(5,191404.8);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(6,199760.3);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(7,204988);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(8,204490.3);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(9,231387.2);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(10,230622.6);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(11,283495.5);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(12,324602.3);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(13,347103.3);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(14,364916.8);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(15,473331.4);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(16,513109);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(17,297991.5);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(18,225003.6);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(19,176795.7);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(20,140103.4);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(21,138798.1);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(22,95581.05);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(23,60891.08);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(24,45715.43);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(25,25974.95);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(26,10452.72);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(27,6090.509);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(28,3575.506);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(29,11.6734);
   VbbHcc_tags_H_dR_stack_1->SetBinError(2,45.86044);
   VbbHcc_tags_H_dR_stack_1->SetBinError(3,11289.67);
   VbbHcc_tags_H_dR_stack_1->SetBinError(4,11648.87);
   VbbHcc_tags_H_dR_stack_1->SetBinError(5,9338.516);
   VbbHcc_tags_H_dR_stack_1->SetBinError(6,11156.63);
   VbbHcc_tags_H_dR_stack_1->SetBinError(7,11183.24);
   VbbHcc_tags_H_dR_stack_1->SetBinError(8,10269.43);
   VbbHcc_tags_H_dR_stack_1->SetBinError(9,22984.1);
   VbbHcc_tags_H_dR_stack_1->SetBinError(10,10586.48);
   VbbHcc_tags_H_dR_stack_1->SetBinError(11,25619.98);
   VbbHcc_tags_H_dR_stack_1->SetBinError(12,26365.63);
   VbbHcc_tags_H_dR_stack_1->SetBinError(13,14094.03);
   VbbHcc_tags_H_dR_stack_1->SetBinError(14,13231.23);
   VbbHcc_tags_H_dR_stack_1->SetBinError(15,28097.46);
   VbbHcc_tags_H_dR_stack_1->SetBinError(16,29515.87);
   VbbHcc_tags_H_dR_stack_1->SetBinError(17,12964.51);
   VbbHcc_tags_H_dR_stack_1->SetBinError(18,10626.21);
   VbbHcc_tags_H_dR_stack_1->SetBinError(19,9526.751);
   VbbHcc_tags_H_dR_stack_1->SetBinError(20,8492.222);
   VbbHcc_tags_H_dR_stack_1->SetBinError(21,29713.88);
   VbbHcc_tags_H_dR_stack_1->SetBinError(22,6830.742);
   VbbHcc_tags_H_dR_stack_1->SetBinError(23,5493.379);
   VbbHcc_tags_H_dR_stack_1->SetBinError(24,4370.163);
   VbbHcc_tags_H_dR_stack_1->SetBinError(25,4254.819);
   VbbHcc_tags_H_dR_stack_1->SetBinError(26,2276.195);
   VbbHcc_tags_H_dR_stack_1->SetBinError(27,1127.602);
   VbbHcc_tags_H_dR_stack_1->SetBinError(28,1928.466);
   VbbHcc_tags_H_dR_stack_1->SetBinError(29,8.16246);
   VbbHcc_tags_H_dR_stack_1->SetEntries(237768);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_2 = new TH1D("VbbHcc_tags_H_dR_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(2,17.85088);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(3,18764.21);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(4,32905.22);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(5,38438.22);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(6,41008.68);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(7,39353.6);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(8,36766.9);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(9,35987.6);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(10,37803.75);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(11,42204.94);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(12,48617.13);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(13,56301.85);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(14,64946.68);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(15,73259.2);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(16,74757.25);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(17,43099.55);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(18,27352.9);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(19,18277.67);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(20,12309.55);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(21,8284.902);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(22,5411.291);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(23,3422.175);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(24,2100.211);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(25,1131.073);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(26,565.8481);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(27,235.2014);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(28,61.50068);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(29,5.10325);
   VbbHcc_tags_H_dR_stack_2->SetBinError(2,1.121905);
   VbbHcc_tags_H_dR_stack_2->SetBinError(3,36.74573);
   VbbHcc_tags_H_dR_stack_2->SetBinError(4,48.62561);
   VbbHcc_tags_H_dR_stack_2->SetBinError(5,52.49647);
   VbbHcc_tags_H_dR_stack_2->SetBinError(6,54.16047);
   VbbHcc_tags_H_dR_stack_2->SetBinError(7,53.04883);
   VbbHcc_tags_H_dR_stack_2->SetBinError(8,51.3035);
   VbbHcc_tags_H_dR_stack_2->SetBinError(9,50.78685);
   VbbHcc_tags_H_dR_stack_2->SetBinError(10,52.12725);
   VbbHcc_tags_H_dR_stack_2->SetBinError(11,55.12777);
   VbbHcc_tags_H_dR_stack_2->SetBinError(12,59.2216);
   VbbHcc_tags_H_dR_stack_2->SetBinError(13,63.82487);
   VbbHcc_tags_H_dR_stack_2->SetBinError(14,68.62127);
   VbbHcc_tags_H_dR_stack_2->SetBinError(15,72.97133);
   VbbHcc_tags_H_dR_stack_2->SetBinError(16,73.76399);
   VbbHcc_tags_H_dR_stack_2->SetBinError(17,55.87047);
   VbbHcc_tags_H_dR_stack_2->SetBinError(18,44.37932);
   VbbHcc_tags_H_dR_stack_2->SetBinError(19,36.1538);
   VbbHcc_tags_H_dR_stack_2->SetBinError(20,29.52968);
   VbbHcc_tags_H_dR_stack_2->SetBinError(21,24.11196);
   VbbHcc_tags_H_dR_stack_2->SetBinError(22,19.40097);
   VbbHcc_tags_H_dR_stack_2->SetBinError(23,15.33971);
   VbbHcc_tags_H_dR_stack_2->SetBinError(24,11.9358);
   VbbHcc_tags_H_dR_stack_2->SetBinError(25,8.724845);
   VbbHcc_tags_H_dR_stack_2->SetBinError(26,6.110279);
   VbbHcc_tags_H_dR_stack_2->SetBinError(27,3.917892);
   VbbHcc_tags_H_dR_stack_2->SetBinError(28,1.975818);
   VbbHcc_tags_H_dR_stack_2->SetBinError(29,0.568633);
   VbbHcc_tags_H_dR_stack_2->SetEntries(1.12179e+07);

   ci = TColor::GetColor("#990099");
   VbbHcc_tags_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_1","QCD","F");

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
   H_dR_tags_16->Modified();
   H_dR_tags_16->cd();
   H_dR_tags_16->SetSelected(H_dR_tags_16);
}

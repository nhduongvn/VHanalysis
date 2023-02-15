#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_tags_16_logY()
{
//=========Macro generated from canvas: Z_dR_tags_16/Z_dR_tags_16
//=========  (Tue Feb 14 16:02:01 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_tags_16 = new TCanvas("Z_dR_tags_16", "Z_dR_tags_16",0,0,600,600);
   Z_dR_tags_16->SetHighLightColor(2);
   Z_dR_tags_16->Range(-1.310117,-0.9881694,7.029799,9.954653);
   Z_dR_tags_16->SetFillColor(0);
   Z_dR_tags_16->SetFillStyle(4000);
   Z_dR_tags_16->SetBorderMode(0);
   Z_dR_tags_16->SetBorderSize(2);
   Z_dR_tags_16->SetLogy();
   Z_dR_tags_16->SetLeftMargin(0.15709);
   Z_dR_tags_16->SetRightMargin(0.1234783);
   Z_dR_tags_16->SetBottomMargin(0.12);
   Z_dR_tags_16->SetFrameFillStyle(1000);
   Z_dR_tags_16->SetFrameBorderMode(0);
   Z_dR_tags_16->SetFrameFillStyle(1000);
   Z_dR_tags_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(2.908669e+08);
   
   TH1F *st_stack_17 = new TH1F("st_stack_17","",30,0,6);
   st_stack_17->SetMinimum(2.11334);
   st_stack_17->SetMaximum(7.250551e+08);
   st_stack_17->SetDirectory(0);
   st_stack_17->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_17->SetLineColor(ci);
   st_stack_17->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_17->GetXaxis()->SetRange(1,30);
   st_stack_17->GetXaxis()->SetLabelFont(42);
   st_stack_17->GetXaxis()->SetTitleOffset(1);
   st_stack_17->GetXaxis()->SetTitleFont(42);
   st_stack_17->GetYaxis()->SetTitle("Events/0.2");
   st_stack_17->GetYaxis()->SetLabelFont(42);
   st_stack_17->GetYaxis()->SetTitleSize(0.037);
   st_stack_17->GetYaxis()->SetTitleFont(42);
   st_stack_17->GetZaxis()->SetLabelFont(42);
   st_stack_17->GetZaxis()->SetTitleOffset(1);
   st_stack_17->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_17);
   
   
   TH1D *VbbHcc_tags_Z_dR_stack_1 = new TH1D("VbbHcc_tags_Z_dR_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(2,1159.212);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(3,2381515);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(4,2851972);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(5,2287266);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(6,1871821);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(7,1708227);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(8,1597663);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(9,1718893);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(10,1573058);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(11,1480222);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(12,1530954);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(13,1687251);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(14,1897168);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(15,2395134);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(16,2284217);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(17,1315012);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(18,741178.9);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(19,621897.1);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(20,337162);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(21,290377.9);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(22,242431);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(23,111477.6);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(24,67660.72);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(25,52504.24);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(26,22836.84);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(27,3337.908);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(28,433.9822);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(29,0.4032327);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(2,513.6211);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(3,70150.84);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(4,86988.96);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(5,102093.5);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(6,83139.83);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(7,91039.91);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(8,98038.99);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(9,111328.7);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(10,96437.42);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(11,87294.49);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(12,86750.91);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(13,89177.59);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(14,108002.3);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(15,130267);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(16,124062.9);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(17,83922.21);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(18,50368.79);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(19,62663.64);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(20,27355.17);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(21,42439.2);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(22,48814.7);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(23,27553.88);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(24,8224.661);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(25,23386.98);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(26,5749.798);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(27,1658.913);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(28,291);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(29,0.4032327);
   VbbHcc_tags_Z_dR_stack_1->SetEntries(451898);

   ci = TColor::GetColor("#ff6600");
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
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(2,22.78983);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(3,29210.26);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(4,56696.31);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(5,68073);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(6,83175.3);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(7,97253.34);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(8,110433.6);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(9,123496.3);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(10,137329.3);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(11,151724.8);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(12,167709.1);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(13,184412.2);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(14,201122.8);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(15,216086);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(16,211872.7);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(17,110636.1);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(18,62567.77);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(19,36675.48);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(20,21386.68);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(21,12204.5);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(22,6775.363);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(23,3587.858);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(24,1809.756);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(25,823.2825);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(26,338.4944);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(27,113.6358);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(28,26.95312);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(29,1.047386);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(2,1.263567);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(3,45.18996);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(4,63.02906);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(5,69.13059);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(6,76.43064);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(7,82.66048);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(8,88.10087);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(9,93.17171);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(10,98.27063);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(11,103.3274);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(12,108.6899);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(13,114.0307);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(14,119.1759);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(15,123.6044);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(16,122.4877);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(17,88.533);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(18,66.58547);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(19,50.97446);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(20,38.90957);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(21,29.38006);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(22,21.8414);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(23,15.86735);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(24,11.2215);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(25,7.568013);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(26,4.836844);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(27,2.781322);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(28,1.347711);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(29,0.2530643);
   VbbHcc_tags_Z_dR_stack_2->SetEntries(3.141452e+07);

   ci = TColor::GetColor("#990099");
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
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_1","QCD","F");

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
   Z_dR_tags_16->Modified();
   Z_dR_tags_16->cd();
   Z_dR_tags_16->SetSelected(Z_dR_tags_16);
}

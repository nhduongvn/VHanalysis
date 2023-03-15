#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_both_18()
{
//=========Macro generated from canvas: Z_dR_both_18/Z_dR_both_18
//=========  (Thu Mar  9 13:18:51 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_both_18 = new TCanvas("Z_dR_both_18", "Z_dR_both_18",0,0,600,600);
   Z_dR_both_18->SetHighLightColor(2);
   Z_dR_both_18->Range(-1.310117,-178533,7.029799,1309242);
   Z_dR_both_18->SetFillColor(0);
   Z_dR_both_18->SetFillStyle(4000);
   Z_dR_both_18->SetBorderMode(0);
   Z_dR_both_18->SetBorderSize(2);
   Z_dR_both_18->SetLeftMargin(0.15709);
   Z_dR_both_18->SetRightMargin(0.1234783);
   Z_dR_both_18->SetBottomMargin(0.12);
   Z_dR_both_18->SetFrameFillStyle(1000);
   Z_dR_both_18->SetFrameBorderMode(0);
   Z_dR_both_18->SetFrameFillStyle(1000);
   Z_dR_both_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1160464);
   
   TH1F *st_stack_147 = new TH1F("st_stack_147","",30,0,6);
   st_stack_147->SetMinimum(0);
   st_stack_147->SetMaximum(1160464);
   st_stack_147->SetDirectory(0);
   st_stack_147->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_147->SetLineColor(ci);
   st_stack_147->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_147->GetXaxis()->SetRange(1,30);
   st_stack_147->GetXaxis()->SetLabelFont(42);
   st_stack_147->GetXaxis()->SetTitleOffset(1);
   st_stack_147->GetXaxis()->SetTitleFont(42);
   st_stack_147->GetYaxis()->SetTitle("Event/0.2");
   st_stack_147->GetYaxis()->SetLabelFont(42);
   st_stack_147->GetYaxis()->SetTitleSize(0.037);
   st_stack_147->GetYaxis()->SetTitleFont(42);
   st_stack_147->GetZaxis()->SetLabelFont(42);
   st_stack_147->GetZaxis()->SetTitleOffset(1);
   st_stack_147->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_147);
   
   
   TH1D *VbbHcc_both_Z_dR_stack_1 = new TH1D("VbbHcc_both_Z_dR_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(2,699.8261);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(3,942831.8);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(4,920628.7);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(5,652073.1);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(6,643005.7);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(7,526306.4);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(8,464692.5);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(9,436298.3);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(10,608188.6);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(11,517666);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(12,504866.5);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(13,607428.2);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(14,643869.7);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(15,698314.1);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(16,720592.7);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(17,396606.2);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(18,322181);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(19,210636.7);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(20,152508.4);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(21,97843.06);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(22,62160.62);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(23,29679.03);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(24,24665.68);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(25,10983.13);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(26,6284.096);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(27,2155.361);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(28,44.31927);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(29,1438.909);
   VbbHcc_both_Z_dR_stack_1->SetBinError(2,375.9225);
   VbbHcc_both_Z_dR_stack_1->SetBinError(3,40282.81);
   VbbHcc_both_Z_dR_stack_1->SetBinError(4,23466.12);
   VbbHcc_both_Z_dR_stack_1->SetBinError(5,19830.54);
   VbbHcc_both_Z_dR_stack_1->SetBinError(6,37170.72);
   VbbHcc_both_Z_dR_stack_1->SetBinError(7,18326.55);
   VbbHcc_both_Z_dR_stack_1->SetBinError(8,17713.84);
   VbbHcc_both_Z_dR_stack_1->SetBinError(9,17117.65);
   VbbHcc_both_Z_dR_stack_1->SetBinError(10,59477.22);
   VbbHcc_both_Z_dR_stack_1->SetBinError(11,43998.47);
   VbbHcc_both_Z_dR_stack_1->SetBinError(12,37000.96);
   VbbHcc_both_Z_dR_stack_1->SetBinError(13,49375.69);
   VbbHcc_both_Z_dR_stack_1->SetBinError(14,48956.74);
   VbbHcc_both_Z_dR_stack_1->SetBinError(15,42268.28);
   VbbHcc_both_Z_dR_stack_1->SetBinError(16,37535.36);
   VbbHcc_both_Z_dR_stack_1->SetBinError(17,16531.18);
   VbbHcc_both_Z_dR_stack_1->SetBinError(18,42609.71);
   VbbHcc_both_Z_dR_stack_1->SetBinError(19,29798.51);
   VbbHcc_both_Z_dR_stack_1->SetBinError(20,32464.24);
   VbbHcc_both_Z_dR_stack_1->SetBinError(21,9218.598);
   VbbHcc_both_Z_dR_stack_1->SetBinError(22,7669.167);
   VbbHcc_both_Z_dR_stack_1->SetBinError(23,3331.221);
   VbbHcc_both_Z_dR_stack_1->SetBinError(24,5203.702);
   VbbHcc_both_Z_dR_stack_1->SetBinError(25,3103.315);
   VbbHcc_both_Z_dR_stack_1->SetBinError(26,2914.481);
   VbbHcc_both_Z_dR_stack_1->SetBinError(27,807.1068);
   VbbHcc_both_Z_dR_stack_1->SetBinError(28,19.72571);
   VbbHcc_both_Z_dR_stack_1->SetBinError(29,1438.364);
   VbbHcc_both_Z_dR_stack_1->SetEntries(271342);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_2 = new TH1D("VbbHcc_both_Z_dR_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(2,15.80329);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(3,20353.61);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(4,38874.03);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(5,47355.13);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(6,56923.51);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(7,65533.37);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(8,73565.95);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(9,82972.49);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(10,93522.47);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(11,107087.2);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(12,122598);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(13,140352.8);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(14,158480.4);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(15,175260.2);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(16,174916.7);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(17,89845.47);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(18,49540.67);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(19,28583.67);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(20,16327.26);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(21,9163.041);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(22,4963.489);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(23,2587.362);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(24,1301.593);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(25,598.732);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(26,242.5345);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(27,82.80755);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(28,22.37198);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(29,0.6364349);
   VbbHcc_both_Z_dR_stack_2->SetBinError(2,1.108311);
   VbbHcc_both_Z_dR_stack_2->SetBinError(3,41.46869);
   VbbHcc_both_Z_dR_stack_2->SetBinError(4,57.24846);
   VbbHcc_both_Z_dR_stack_2->SetBinError(5,63.33838);
   VbbHcc_both_Z_dR_stack_2->SetBinError(6,70.17664);
   VbbHcc_both_Z_dR_stack_2->SetBinError(7,74.55967);
   VbbHcc_both_Z_dR_stack_2->SetBinError(8,79.06818);
   VbbHcc_both_Z_dR_stack_2->SetBinError(9,84.04072);
   VbbHcc_both_Z_dR_stack_2->SetBinError(10,88.59245);
   VbbHcc_both_Z_dR_stack_2->SetBinError(11,95.49041);
   VbbHcc_both_Z_dR_stack_2->SetBinError(12,101.8504);
   VbbHcc_both_Z_dR_stack_2->SetBinError(13,109.3292);
   VbbHcc_both_Z_dR_stack_2->SetBinError(14,116.5663);
   VbbHcc_both_Z_dR_stack_2->SetBinError(15,122.6265);
   VbbHcc_both_Z_dR_stack_2->SetBinError(16,122.4239);
   VbbHcc_both_Z_dR_stack_2->SetBinError(17,88.49631);
   VbbHcc_both_Z_dR_stack_2->SetBinError(18,65.64057);
   VbbHcc_both_Z_dR_stack_2->SetBinError(19,49.90311);
   VbbHcc_both_Z_dR_stack_2->SetBinError(20,37.44505);
   VbbHcc_both_Z_dR_stack_2->SetBinError(21,28.95068);
   VbbHcc_both_Z_dR_stack_2->SetBinError(22,20.52178);
   VbbHcc_both_Z_dR_stack_2->SetBinError(23,14.68933);
   VbbHcc_both_Z_dR_stack_2->SetBinError(24,10.20189);
   VbbHcc_both_Z_dR_stack_2->SetBinError(25,7.021733);
   VbbHcc_both_Z_dR_stack_2->SetBinError(26,5.478438);
   VbbHcc_both_Z_dR_stack_2->SetBinError(27,2.670325);
   VbbHcc_both_Z_dR_stack_2->SetBinError(28,2.4742);
   VbbHcc_both_Z_dR_stack_2->SetBinError(29,0.2195372);
   VbbHcc_both_Z_dR_stack_2->SetEntries(2.286567e+07);

   ci = TColor::GetColor("#990099");
   VbbHcc_both_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_1","QCD","F");

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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_both_18->Modified();
   Z_dR_both_18->cd();
   Z_dR_both_18->SetSelected(Z_dR_both_18);
}

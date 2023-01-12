#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_tags_18()
{
//=========Macro generated from canvas: H_dR_tags_18/H_dR_tags_18
//=========  (Mon Dec 19 11:11:45 2022) by ROOT version 6.26/06
   TCanvas *H_dR_tags_18 = new TCanvas("H_dR_tags_18", "H_dR_tags_18",0,0,600,600);
   H_dR_tags_18->SetHighLightColor(2);
   H_dR_tags_18->Range(-1.353788,-2027166,7.264125,1.486589e+07);
   H_dR_tags_18->SetFillColor(0);
   H_dR_tags_18->SetFillStyle(4000);
   H_dR_tags_18->SetBorderMode(0);
   H_dR_tags_18->SetBorderSize(2);
   H_dR_tags_18->SetLeftMargin(0.15709);
   H_dR_tags_18->SetRightMargin(0.1234783);
   H_dR_tags_18->SetBottomMargin(0.12);
   H_dR_tags_18->SetFrameFillStyle(1000);
   H_dR_tags_18->SetFrameBorderMode(0);
   H_dR_tags_18->SetFrameFillStyle(1000);
   H_dR_tags_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.317658e+07);
   
   TH1F *st_stack_23 = new TH1F("st_stack_23","",30,0,6);
   st_stack_23->SetMinimum(0);
   st_stack_23->SetMaximum(1.317658e+07);
   st_stack_23->SetDirectory(0);
   st_stack_23->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_23->SetLineColor(ci);
   st_stack_23->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_23->GetXaxis()->SetRange(1,31);
   st_stack_23->GetXaxis()->SetLabelFont(42);
   st_stack_23->GetXaxis()->SetTitleOffset(1);
   st_stack_23->GetXaxis()->SetTitleFont(42);
   st_stack_23->GetYaxis()->SetTitle("Events/0.2");
   st_stack_23->GetYaxis()->SetLabelFont(42);
   st_stack_23->GetYaxis()->SetTitleSize(0.037);
   st_stack_23->GetYaxis()->SetTitleFont(42);
   st_stack_23->GetZaxis()->SetLabelFont(42);
   st_stack_23->GetZaxis()->SetTitleOffset(1);
   st_stack_23->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_23);
   
   
   TH1D *VbbHcc_tags_H_dR_stack_1 = new TH1D("VbbHcc_tags_H_dR_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(2,1143.778);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(3,3028769);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(4,3984646);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(5,3384557);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(6,3200499);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(7,3362361);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(8,3587157);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(9,3670699);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(10,4009052);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(11,4423613);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(12,5165162);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(13,5858212);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(14,6633854);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(15,7596353);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(16,8408593);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(17,5287175);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(18,3866884);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(19,3403681);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(20,2648711);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(21,1707349);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(22,1551456);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(23,1021190);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(24,649095.3);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(25,492638.8);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(26,325769.3);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(27,159205.7);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(28,18665.48);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(29,1605.856);
   VbbHcc_tags_H_dR_stack_1->SetBinError(2,652.7609);
   VbbHcc_tags_H_dR_stack_1->SetBinError(3,124768.2);
   VbbHcc_tags_H_dR_stack_1->SetBinError(4,199139.7);
   VbbHcc_tags_H_dR_stack_1->SetBinError(5,165462.3);
   VbbHcc_tags_H_dR_stack_1->SetBinError(6,175902.2);
   VbbHcc_tags_H_dR_stack_1->SetBinError(7,177720.9);
   VbbHcc_tags_H_dR_stack_1->SetBinError(8,174323.9);
   VbbHcc_tags_H_dR_stack_1->SetBinError(9,184940.8);
   VbbHcc_tags_H_dR_stack_1->SetBinError(10,183119.1);
   VbbHcc_tags_H_dR_stack_1->SetBinError(11,204941.1);
   VbbHcc_tags_H_dR_stack_1->SetBinError(12,230817.4);
   VbbHcc_tags_H_dR_stack_1->SetBinError(13,248049.8);
   VbbHcc_tags_H_dR_stack_1->SetBinError(14,253845.3);
   VbbHcc_tags_H_dR_stack_1->SetBinError(15,275409);
   VbbHcc_tags_H_dR_stack_1->SetBinError(16,301488.9);
   VbbHcc_tags_H_dR_stack_1->SetBinError(17,227474.1);
   VbbHcc_tags_H_dR_stack_1->SetBinError(18,187491.6);
   VbbHcc_tags_H_dR_stack_1->SetBinError(19,217813.8);
   VbbHcc_tags_H_dR_stack_1->SetBinError(20,169418.8);
   VbbHcc_tags_H_dR_stack_1->SetBinError(21,122501.5);
   VbbHcc_tags_H_dR_stack_1->SetBinError(22,131156.5);
   VbbHcc_tags_H_dR_stack_1->SetBinError(23,94995.64);
   VbbHcc_tags_H_dR_stack_1->SetBinError(24,79600.74);
   VbbHcc_tags_H_dR_stack_1->SetBinError(25,78455.74);
   VbbHcc_tags_H_dR_stack_1->SetBinError(26,92845.9);
   VbbHcc_tags_H_dR_stack_1->SetBinError(27,54256.8);
   VbbHcc_tags_H_dR_stack_1->SetBinError(28,4448.75);
   VbbHcc_tags_H_dR_stack_1->SetBinError(29,711.431);
   VbbHcc_tags_H_dR_stack_1->SetEntries(570110);

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
   VbbHcc_tags_H_dR_stack_2->SetBinContent(2,80.67956);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(3,90260.05);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(4,160744.9);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(5,195848.6);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(6,235449.9);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(7,257319.7);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(8,265293.6);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(9,267903.9);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(10,273742.3);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(11,285379.6);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(12,304099.6);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(13,327703.8);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(14,353982.3);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(15,379759.7);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(16,375793.4);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(17,214934.9);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(18,137456.5);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(19,92372.37);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(20,62725.66);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(21,42156.68);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(22,27756.82);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(23,17676.82);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(24,10621.11);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(25,5703.047);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(26,2819.091);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(27,1173.106);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(28,314.9746);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(29,23.21017);
   VbbHcc_tags_H_dR_stack_2->SetBinError(2,4.530729);
   VbbHcc_tags_H_dR_stack_2->SetBinError(3,93.60464);
   VbbHcc_tags_H_dR_stack_2->SetBinError(4,123.2854);
   VbbHcc_tags_H_dR_stack_2->SetBinError(5,136.613);
   VbbHcc_tags_H_dR_stack_2->SetBinError(6,149.1427);
   VbbHcc_tags_H_dR_stack_2->SetBinError(7,155.59);
   VbbHcc_tags_H_dR_stack_2->SetBinError(8,159.409);
   VbbHcc_tags_H_dR_stack_2->SetBinError(9,159.3201);
   VbbHcc_tags_H_dR_stack_2->SetBinError(10,161.9517);
   VbbHcc_tags_H_dR_stack_2->SetBinError(11,165.0844);
   VbbHcc_tags_H_dR_stack_2->SetBinError(12,170.1221);
   VbbHcc_tags_H_dR_stack_2->SetBinError(13,177.1715);
   VbbHcc_tags_H_dR_stack_2->SetBinError(14,184.1859);
   VbbHcc_tags_H_dR_stack_2->SetBinError(15,190.9027);
   VbbHcc_tags_H_dR_stack_2->SetBinError(16,189.8415);
   VbbHcc_tags_H_dR_stack_2->SetBinError(17,143.7745);
   VbbHcc_tags_H_dR_stack_2->SetBinError(18,115.0918);
   VbbHcc_tags_H_dR_stack_2->SetBinError(19,93.4168);
   VbbHcc_tags_H_dR_stack_2->SetBinError(20,76.67025);
   VbbHcc_tags_H_dR_stack_2->SetBinError(21,61.75436);
   VbbHcc_tags_H_dR_stack_2->SetBinError(22,50.95011);
   VbbHcc_tags_H_dR_stack_2->SetBinError(23,40.20942);
   VbbHcc_tags_H_dR_stack_2->SetBinError(24,31.2871);
   VbbHcc_tags_H_dR_stack_2->SetBinError(25,22.22152);
   VbbHcc_tags_H_dR_stack_2->SetBinError(26,16.31172);
   VbbHcc_tags_H_dR_stack_2->SetBinError(27,10.06817);
   VbbHcc_tags_H_dR_stack_2->SetBinError(28,5.696097);
   VbbHcc_tags_H_dR_stack_2->SetBinError(29,1.378819);
   VbbHcc_tags_H_dR_stack_2->SetEntries(5.729977e+07);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_tags_18->Modified();
   H_dR_tags_18->cd();
   H_dR_tags_18->SetSelected(H_dR_tags_18);
}

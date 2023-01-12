#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_algo_16()
{
//=========Macro generated from canvas: Z_dR_algo_16/Z_dR_algo_16
//=========  (Mon Dec 19 11:11:46 2022) by ROOT version 6.26/06
   TCanvas *Z_dR_algo_16 = new TCanvas("Z_dR_algo_16", "Z_dR_algo_16",0,0,600,600);
   Z_dR_algo_16->SetHighLightColor(2);
   Z_dR_algo_16->Range(-1.310117,-164459.9,7.029799,1206039);
   Z_dR_algo_16->SetFillColor(0);
   Z_dR_algo_16->SetFillStyle(4000);
   Z_dR_algo_16->SetBorderMode(0);
   Z_dR_algo_16->SetBorderSize(2);
   Z_dR_algo_16->SetLeftMargin(0.15709);
   Z_dR_algo_16->SetRightMargin(0.1234783);
   Z_dR_algo_16->SetBottomMargin(0.12);
   Z_dR_algo_16->SetFrameFillStyle(1000);
   Z_dR_algo_16->SetFrameBorderMode(0);
   Z_dR_algo_16->SetFrameFillStyle(1000);
   Z_dR_algo_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1068989);
   
   TH1F *st_stack_73 = new TH1F("st_stack_73","",30,0,6);
   st_stack_73->SetMinimum(0);
   st_stack_73->SetMaximum(1068989);
   st_stack_73->SetDirectory(0);
   st_stack_73->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_73->SetLineColor(ci);
   st_stack_73->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_73->GetXaxis()->SetRange(1,30);
   st_stack_73->GetXaxis()->SetLabelFont(42);
   st_stack_73->GetXaxis()->SetTitleOffset(1);
   st_stack_73->GetXaxis()->SetTitleFont(42);
   st_stack_73->GetYaxis()->SetTitle("Events/0.2");
   st_stack_73->GetYaxis()->SetLabelFont(42);
   st_stack_73->GetYaxis()->SetTitleSize(0.037);
   st_stack_73->GetYaxis()->SetTitleFont(42);
   st_stack_73->GetZaxis()->SetLabelFont(42);
   st_stack_73->GetZaxis()->SetTitleOffset(1);
   st_stack_73->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_73);
   
   
   TH1D *VbbHcc_algo_Z_dR_stack_1 = new TH1D("VbbHcc_algo_Z_dR_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(2,40.27418);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(3,484232);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(4,707945.9);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(5,545858.6);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(6,547852.3);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(7,408924.4);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(8,442896.2);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(9,338672.7);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(10,349633.3);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(11,210776.6);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(12,287791.9);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(13,143949);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(14,240876);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(15,252338.3);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(16,218403.1);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(17,108548.3);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(18,58787.57);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(19,62886.24);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(20,59007.41);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(21,15533.29);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(22,23612.3);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(23,5197.875);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(24,2037.33);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(25,1811.357);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(26,367.517);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(27,12.5958);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(2,27.81945);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(3,39138.8);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(4,60849.92);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(5,58492.55);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(6,65318.64);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(7,52324.59);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(8,62485);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(9,45717.59);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(10,56220.67);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(11,32887.89);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(12,50516.94);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(13,12167.95);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(14,43228.64);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(15,47813.63);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(16,47039.38);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(17,32735.71);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(18,19418.8);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(19,26783.89);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(20,28061.49);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(21,4277.561);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(22,20855.92);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(23,2217.092);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(24,1686.806);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(25,1473.057);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(26,339.1791);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(27,8.497654);
   VbbHcc_algo_Z_dR_stack_1->SetEntries(37218);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_2 = new TH1D("VbbHcc_algo_Z_dR_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(2,2.434579);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(3,2139.203);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(4,4713.421);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(5,6296.259);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(6,7850.534);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(7,8978.395);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(8,9510.87);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(9,9446.45);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(10,8945.962);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(11,8095.563);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(12,7250.91);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(13,6340.303);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(14,5603.462);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(15,5063.053);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(16,4325.349);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(17,2044.033);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(18,1018.563);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(19,522.0934);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(20,268.4268);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(21,134.2651);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(22,64.25335);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(23,27.98537);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(24,11.7492);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(25,3.992006);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(26,1.558148);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(27,0.32447);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(2,0.4306936);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(3,12.83229);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(4,19.01716);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(5,22.01318);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(6,24.58204);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(7,26.25307);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(8,26.9716);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(9,26.84388);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(10,26.06213);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(11,24.72492);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(12,23.30529);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(13,21.69769);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(14,20.30209);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(15,19.25308);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(16,17.73887);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(17,12.18746);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(18,8.553994);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(19,6.114618);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(20,4.34256);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(21,3.075953);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(22,2.120067);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(23,1.381657);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(24,0.899195);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(25,0.5268725);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(26,0.3360717);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(27,0.1512033);
   VbbHcc_algo_Z_dR_stack_2->SetEntries(1448757);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_1","QCD","F");

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
   Z_dR_algo_16->Modified();
   Z_dR_algo_16->cd();
   Z_dR_algo_16->SetSelected(Z_dR_algo_16);
}

#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_algo_17()
{
//=========Macro generated from canvas: Z_dR_algo_17/Z_dR_algo_17
//=========  (Wed Jan 18 11:43:11 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_algo_17 = new TCanvas("Z_dR_algo_17", "Z_dR_algo_17",0,0,600,600);
   Z_dR_algo_17->SetHighLightColor(2);
   Z_dR_algo_17->Range(-1.310117,-275881.9,7.029799,2023134);
   Z_dR_algo_17->SetFillColor(0);
   Z_dR_algo_17->SetFillStyle(4000);
   Z_dR_algo_17->SetBorderMode(0);
   Z_dR_algo_17->SetBorderSize(2);
   Z_dR_algo_17->SetLeftMargin(0.15709);
   Z_dR_algo_17->SetRightMargin(0.1234783);
   Z_dR_algo_17->SetBottomMargin(0.12);
   Z_dR_algo_17->SetFrameFillStyle(1000);
   Z_dR_algo_17->SetFrameBorderMode(0);
   Z_dR_algo_17->SetFrameFillStyle(1000);
   Z_dR_algo_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1793232);
   
   TH1F *st_stack_82 = new TH1F("st_stack_82","",30,0,6);
   st_stack_82->SetMinimum(0);
   st_stack_82->SetMaximum(1793232);
   st_stack_82->SetDirectory(0);
   st_stack_82->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_82->SetLineColor(ci);
   st_stack_82->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_82->GetXaxis()->SetRange(1,30);
   st_stack_82->GetXaxis()->SetLabelFont(42);
   st_stack_82->GetXaxis()->SetTitleOffset(1);
   st_stack_82->GetXaxis()->SetTitleFont(42);
   st_stack_82->GetYaxis()->SetTitle("Events/0.2");
   st_stack_82->GetYaxis()->SetLabelFont(42);
   st_stack_82->GetYaxis()->SetTitleSize(0.037);
   st_stack_82->GetYaxis()->SetTitleFont(42);
   st_stack_82->GetZaxis()->SetLabelFont(42);
   st_stack_82->GetZaxis()->SetTitleOffset(1);
   st_stack_82->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_82);
   
   
   TH1D *VbbHcc_algo_Z_dR_stack_1 = new TH1D("VbbHcc_algo_Z_dR_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(2,103.1264);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(3,839054.5);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(4,1188398);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(5,881837.8);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(6,698775);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(7,701069.2);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(8,791737.4);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(9,559771.1);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(10,614748.9);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(11,582353.6);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(12,538266.7);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(13,405827.6);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(14,552737.3);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(15,393696);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(16,334763.5);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(17,240171.4);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(18,147495.6);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(19,104535.5);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(20,25852.72);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(21,13929.51);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(22,8944.338);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(23,2519.65);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(24,1154.665);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(25,395.2482);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(26,47.17558);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(27,16.6649);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(2,48.67811);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(3,62447.44);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(4,87686.88);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(5,74986.3);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(6,65621.68);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(7,70294.04);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(8,86366.56);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(9,65934.67);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(10,75089.34);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(11,74407.15);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(12,74829.61);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(13,59080.69);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(14,82134.52);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(15,58676.7);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(16,52402.96);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(17,50066.12);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(18,39032.41);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(19,33910.24);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(20,5070.481);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(21,3222.564);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(22,3059.134);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(23,818.8295);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(24,452.6533);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(25,324.4929);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(26,27.52389);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(27,11.23289);
   VbbHcc_algo_Z_dR_stack_1->SetEntries(41411);

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
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(2,2.64488);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(3,3101.826);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(4,7090.44);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(5,9420.886);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(6,11859.05);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(7,13455.91);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(8,14270.86);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(9,14203.13);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(10,13329.69);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(11,12175.29);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(12,10721.41);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(13,9422.89);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(14,8299.457);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(15,7446.771);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(16,6380.641);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(17,2977.607);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(18,1491.87);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(19,763.8118);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(20,391.5505);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(21,202.921);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(22,91.2639);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(23,41.99613);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(24,15.77526);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(25,7.106371);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(26,2.144162);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(27,0.6992313);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(28,0.1814228);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(2,0.4256807);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(3,14.90296);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(4,22.52577);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(5,25.99428);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(6,29.15028);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(7,31.06845);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(8,31.96071);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(9,31.81639);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(10,30.75994);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(11,29.34691);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(12,27.42494);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(13,25.63561);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(14,23.98067);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(15,22.62125);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(16,20.89988);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(17,14.24869);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(18,10.07021);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(19,7.179037);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(20,5.108287);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(21,3.676424);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(22,2.455076);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(23,1.657559);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(24,0.983519);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(25,0.6847518);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(26,0.3603026);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(27,0.1930639);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(28,0.1105159);
   VbbHcc_algo_Z_dR_stack_2->SetEntries(2316312);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_algo_17->Modified();
   Z_dR_algo_17->cd();
   Z_dR_algo_17->SetSelected(Z_dR_algo_17);
}

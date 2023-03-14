#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_algo_18_logY()
{
//=========Macro generated from canvas: Sphericity_algo_18/Sphericity_algo_18
//=========  (Thu Mar  9 13:18:02 2023) by ROOT version 6.26/06
   TCanvas *Sphericity_algo_18 = new TCanvas("Sphericity_algo_18", "Sphericity_algo_18",0,0,600,600);
   Sphericity_algo_18->SetHighLightColor(2);
   Sphericity_algo_18->Range(-0.2183529,-0.3058772,1.171633,6.357614);
   Sphericity_algo_18->SetFillColor(0);
   Sphericity_algo_18->SetFillStyle(4000);
   Sphericity_algo_18->SetBorderMode(0);
   Sphericity_algo_18->SetBorderSize(2);
   Sphericity_algo_18->SetLogy();
   Sphericity_algo_18->SetLeftMargin(0.15709);
   Sphericity_algo_18->SetRightMargin(0.1234783);
   Sphericity_algo_18->SetBottomMargin(0.12);
   Sphericity_algo_18->SetFrameFillStyle(1000);
   Sphericity_algo_18->SetFrameBorderMode(0);
   Sphericity_algo_18->SetFrameFillStyle(1000);
   Sphericity_algo_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(260827);
   
   TH1F *st_stack_123 = new TH1F("st_stack_123","",25,0,1);
   st_stack_123->SetMinimum(3.117036);
   st_stack_123->SetMaximum(491207.8);
   st_stack_123->SetDirectory(0);
   st_stack_123->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_123->SetLineColor(ci);
   st_stack_123->GetXaxis()->SetTitle("Sphericity");
   st_stack_123->GetXaxis()->SetRange(1,25);
   st_stack_123->GetXaxis()->SetLabelFont(42);
   st_stack_123->GetXaxis()->SetTitleOffset(1);
   st_stack_123->GetXaxis()->SetTitleFont(42);
   st_stack_123->GetYaxis()->SetTitle("Event/0.04");
   st_stack_123->GetYaxis()->SetLabelFont(42);
   st_stack_123->GetYaxis()->SetTitleSize(0.037);
   st_stack_123->GetYaxis()->SetTitleFont(42);
   st_stack_123->GetZaxis()->SetLabelFont(42);
   st_stack_123->GetZaxis()->SetTitleOffset(1);
   st_stack_123->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_123);
   
   
   TH1D *VbbHcc_algo_Sphericity_stack_1 = new TH1D("VbbHcc_algo_Sphericity_stack_1","",25,0,1);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(1,95577.83);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(2,208305.1);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(3,186530.6);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(4,208103.7);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(5,156775.1);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(6,207997.3);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(7,101045.8);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(8,67382.9);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(9,78874.29);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(10,61021.69);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(11,57856.36);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(12,39427.01);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(13,43271.54);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(14,37615.03);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(15,29531.31);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(16,25711.75);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(17,41839.42);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(18,11745.91);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(19,4765.392);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(20,4337.24);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(21,1165.786);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(22,5.784157);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(1,7060.942);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(2,12180.2);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(3,12702.73);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(4,34963.24);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(5,26056.88);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(6,50058.52);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(7,9932.975);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(8,5749.275);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(9,8439.053);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(10,6733.389);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(11,7820.106);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(12,5306.367);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(13,6930.416);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(14,6194.988);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(15,5117.478);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(16,5323.487);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(17,29924.8);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(18,4245.197);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(19,1286.518);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(20,2183.641);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(21,643.5374);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(22,5.784157);
   VbbHcc_algo_Sphericity_stack_1->SetEntries(24627);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Sphericity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_1->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_1,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_2 = new TH1D("VbbHcc_algo_Sphericity_stack_2","",25,0,1);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(1,2328.134);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(2,6532.918);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(3,8277.999);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(4,8382.7);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(5,7954.402);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(6,7322.109);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(7,6732.831);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(8,6139.441);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(9,5637.472);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(10,5171.393);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(11,4713.15);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(12,4269.953);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(13,3826.063);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(14,3465.505);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(15,3011.025);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(16,2552.313);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(17,2084.456);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(18,1594.705);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(19,1059.953);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(20,568.2666);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(21,253.1973);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(22,92.06376);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(23,26.79887);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(24,3.542319);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(1,13.63776);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(2,22.76292);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(3,26.16256);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(4,25.94082);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(5,25.45664);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(6,24.39272);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(7,23.47587);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(8,22.56846);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(9,21.18007);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(10,20.17346);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(11,19.87115);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(12,18.85206);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(13,17.77795);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(14,17.17523);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(15,15.49853);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(16,14.18762);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(17,12.98686);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(18,11.29873);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(19,9.433081);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(20,6.735848);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(21,4.458915);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(22,2.621017);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(23,1.452125);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(24,0.5234179);
   VbbHcc_algo_Sphericity_stack_2->SetEntries(1407385);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_Sphericity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_2->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_1","QCD","F");

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
   Sphericity_algo_18->Modified();
   Sphericity_algo_18->cd();
   Sphericity_algo_18->SetSelected(Sphericity_algo_18);
}

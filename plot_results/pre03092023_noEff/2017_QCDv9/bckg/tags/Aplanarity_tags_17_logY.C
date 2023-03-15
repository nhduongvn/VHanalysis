#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tags_17_logY()
{
//=========Macro generated from canvas: Aplanarity_tags_17/Aplanarity_tags_17
//=========  (Thu Feb 16 10:37:38 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_tags_17 = new TCanvas("Aplanarity_tags_17", "Aplanarity_tags_17",0,0,600,600);
   Aplanarity_tags_17->SetHighLightColor(2);
   Aplanarity_tags_17->Range(-0.2183529,-1.013644,1.171633,10.09576);
   Aplanarity_tags_17->SetFillColor(0);
   Aplanarity_tags_17->SetFillStyle(4000);
   Aplanarity_tags_17->SetBorderMode(0);
   Aplanarity_tags_17->SetBorderSize(2);
   Aplanarity_tags_17->SetLogy();
   Aplanarity_tags_17->SetLeftMargin(0.15709);
   Aplanarity_tags_17->SetRightMargin(0.1234783);
   Aplanarity_tags_17->SetBottomMargin(0.12);
   Aplanarity_tags_17->SetFrameFillStyle(1000);
   Aplanarity_tags_17->SetFrameBorderMode(0);
   Aplanarity_tags_17->SetFrameFillStyle(1000);
   Aplanarity_tags_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(3.836812e+08);
   
   TH1F *st_stack_62 = new TH1F("st_stack_62","",50,0,1);
   st_stack_62->SetMinimum(2.086818);
   st_stack_62->SetMaximum(9.656467e+08);
   st_stack_62->SetDirectory(0);
   st_stack_62->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_62->SetLineColor(ci);
   st_stack_62->GetXaxis()->SetTitle("Aplanarity");
   st_stack_62->GetXaxis()->SetRange(1,50);
   st_stack_62->GetXaxis()->SetLabelFont(42);
   st_stack_62->GetXaxis()->SetTitleOffset(1);
   st_stack_62->GetXaxis()->SetTitleFont(42);
   st_stack_62->GetYaxis()->SetTitle("Events/0.02");
   st_stack_62->GetYaxis()->SetLabelFont(42);
   st_stack_62->GetYaxis()->SetTitleSize(0.037);
   st_stack_62->GetYaxis()->SetTitleFont(42);
   st_stack_62->GetZaxis()->SetLabelFont(42);
   st_stack_62->GetZaxis()->SetTitleOffset(1);
   st_stack_62->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_62);
   
   
   TH1D *VbbHcc_tags_Aplanarity_stack_1 = new TH1D("VbbHcc_tags_Aplanarity_stack_1","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(1,3514294);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(2,1747125);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(3,910757.6);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(4,539338.6);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(5,324165.7);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(6,170695.2);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(7,144106.6);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(8,69422.95);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(9,88372);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(10,31371.26);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(11,34158.97);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(12,14862.67);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(13,8144.596);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(14,5565.369);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(15,4526.92);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(16,2348.298);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(17,486.628);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(18,1332.905);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(19,1018.555);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(20,42.57848);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(21,20.73763);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(1,68771.39);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(2,63198.33);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(3,36452.16);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(4,40138.87);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(5,25079.13);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(6,9462.852);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(7,25247.36);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(8,6031.055);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(9,26918.86);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(10,4256.69);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(11,15277.64);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(12,3228.949);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(13,1724.808);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(14,1853.799);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(15,1981.346);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(16,746.5227);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(17,290.668);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(18,602.9485);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(19,538.4105);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(20,29.48855);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(21,20.73763);
   VbbHcc_tags_Aplanarity_stack_1->SetEntries(261984);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_2 = new TH1D("VbbHcc_tags_Aplanarity_stack_2","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(0,0.08987177);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(1,322518.8);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(2,237140.7);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(3,160019.9);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(4,109938.7);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(5,77283.63);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(6,55260.09);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(7,39793.71);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(8,28793.82);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(9,21039.33);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(10,15209.92);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(11,10930.34);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(12,7783.012);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(13,5451.488);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(14,3738.41);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(15,2520.346);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(16,1650.756);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(17,1013.786);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(18,599.6803);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(19,339.5095);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(20,171.8861);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(21,76.23901);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(22,30.74159);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(23,7.888748);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(24,1.562386);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(0,0.08987177);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(1,156.0605);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(2,134.6986);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(3,110.9423);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(4,92.09527);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(5,77.27967);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(6,65.41422);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(7,55.53508);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(8,47.26417);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(9,40.42748);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(10,34.38636);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(11,29.16525);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(12,24.62436);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(13,20.61366);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(14,17.08201);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(15,14.0453);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(16,11.34411);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(17,8.897582);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(18,6.84119);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(19,5.162202);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(20,3.651706);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(21,2.455482);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(22,1.54978);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(23,0.7799622);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(24,0.3552921);
   VbbHcc_tags_Aplanarity_stack_2->SetEntries(1.581007e+07);

   ci = TColor::GetColor("#990099");
   VbbHcc_tags_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_1","QCD","F");

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
   Aplanarity_tags_17->Modified();
   Aplanarity_tags_17->cd();
   Aplanarity_tags_17->SetSelected(Aplanarity_tags_17);
}

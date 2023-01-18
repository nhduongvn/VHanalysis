#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tags_16_logY()
{
//=========Macro generated from canvas: Aplanarity_tags_16/Aplanarity_tags_16
//=========  (Wed Jan 18 11:42:52 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_tags_16 = new TCanvas("Aplanarity_tags_16", "Aplanarity_tags_16",0,0,600,600);
   Aplanarity_tags_16->SetHighLightColor(2);
   Aplanarity_tags_16->Range(-0.2183529,-1.173371,1.171633,10.98982);
   Aplanarity_tags_16->SetFillColor(0);
   Aplanarity_tags_16->SetFillStyle(4000);
   Aplanarity_tags_16->SetBorderMode(0);
   Aplanarity_tags_16->SetBorderSize(2);
   Aplanarity_tags_16->SetLogy();
   Aplanarity_tags_16->SetLeftMargin(0.15709);
   Aplanarity_tags_16->SetRightMargin(0.1234783);
   Aplanarity_tags_16->SetBottomMargin(0.12);
   Aplanarity_tags_16->SetFrameFillStyle(1000);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   Aplanarity_tags_16->SetFrameFillStyle(1000);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(2.223745e+09);
   
   TH1F *st_stack_61 = new TH1F("st_stack_61","",50,0,1);
   st_stack_61->SetMinimum(1.932912);
   st_stack_61->SetMaximum(5.936104e+09);
   st_stack_61->SetDirectory(0);
   st_stack_61->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_61->SetLineColor(ci);
   st_stack_61->GetXaxis()->SetTitle("Aplanarity");
   st_stack_61->GetXaxis()->SetRange(1,50);
   st_stack_61->GetXaxis()->SetLabelFont(42);
   st_stack_61->GetXaxis()->SetTitleOffset(1);
   st_stack_61->GetXaxis()->SetTitleFont(42);
   st_stack_61->GetYaxis()->SetTitle("Events/0.02");
   st_stack_61->GetYaxis()->SetLabelFont(42);
   st_stack_61->GetYaxis()->SetTitleSize(0.037);
   st_stack_61->GetYaxis()->SetTitleFont(42);
   st_stack_61->GetZaxis()->SetLabelFont(42);
   st_stack_61->GetZaxis()->SetTitleOffset(1);
   st_stack_61->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_61);
   
   
   TH1D *VbbHcc_tags_Aplanarity_stack_1 = new TH1D("VbbHcc_tags_Aplanarity_stack_1","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(1,2.155859e+07);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(2,9711588);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(3,4829127);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(4,2703096);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(5,1621469);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(6,1059354);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(7,607738);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(8,414550.1);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(9,301468.9);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(10,210580.6);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(11,152156.5);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(12,94432.36);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(13,67174.42);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(14,23654.2);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(15,13321.95);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(16,10480.74);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(17,6152.591);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(18,2687.514);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(19,2100.308);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(20,386.6636);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(21,39.26154);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(1,343520.4);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(2,251248.1);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(3,173739.9);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(4,132582);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(5,101842.4);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(6,86929.07);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(7,59157.06);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(8,52586.98);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(9,45452.08);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(10,37296.23);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(11,35610.05);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(12,27423.11);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(13,24962.19);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(14,4564.061);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(15,3228.235);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(16,3389.652);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(17,2637.322);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(18,1513.816);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(19,1687.428);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(20,325.7711);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(21,30.72296);
   VbbHcc_tags_Aplanarity_stack_1->SetEntries(458027);

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
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(0,0.06536696);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(1,678866.5);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(2,471536.4);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(3,312150.3);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(4,213027);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(5,148931.6);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(6,105970.8);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(7,76209.95);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(8,55078.85);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(9,39798.48);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(10,28704.57);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(11,20572.25);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(12,14508.32);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(13,10173.6);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(14,6964.383);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(15,4639.535);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(16,3008.986);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(17,1885.316);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(18,1115.613);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(19,614.0193);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(20,302.2901);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(21,136.4669);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(22,46.5627);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(23,14.54491);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(24,1.83028);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(25,0.1482259);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(0,0.05560696);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(1,218.7759);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(2,183.3048);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(3,149.4536);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(4,123.6249);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(5,103.4621);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(6,87.34864);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(7,74.10928);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(8,63.01406);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(9,53.60316);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(10,45.5348);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(11,38.56968);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(12,32.39773);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(13,27.14751);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(14,22.45426);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(15,18.33609);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(16,14.76204);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(17,11.70595);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(18,8.992084);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(19,6.679601);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(20,4.675797);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(21,3.152393);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(22,1.845434);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(23,1.031471);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(24,0.3585319);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(25,0.1052467);
   VbbHcc_tags_Aplanarity_stack_2->SetEntries(3.311648e+07);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_tags_16->Modified();
   Aplanarity_tags_16->cd();
   Aplanarity_tags_16->SetSelected(Aplanarity_tags_16);
}

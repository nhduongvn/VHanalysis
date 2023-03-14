#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tags_17_logY()
{
//=========Macro generated from canvas: Aplanarity_tags_17/Aplanarity_tags_17
//=========  (Thu Mar  9 12:19:50 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_tags_17 = new TCanvas("Aplanarity_tags_17", "Aplanarity_tags_17",0,0,600,600);
   Aplanarity_tags_17->SetHighLightColor(2);
   Aplanarity_tags_17->Range(-0.2183529,-3.259744,1.171633,0.5864098);
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
   
   TH1F *st_stack_62 = new TH1F("st_stack_62","",50,0,1);
   st_stack_62->SetMinimum(15.74425);
   st_stack_62->SetMaximum(1.591455);
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
   st_stack_62->GetYaxis()->SetTitle("Event/0.02");
   st_stack_62->GetYaxis()->SetLabelFont(42);
   st_stack_62->GetYaxis()->SetTitleSize(0.037);
   st_stack_62->GetYaxis()->SetTitleFont(42);
   st_stack_62->GetZaxis()->SetLabelFont(42);
   st_stack_62->GetZaxis()->SetTitleOffset(1);
   st_stack_62->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_62);
   
   
   TH1D *VbbHcc_tags_Aplanarity_stack_1 = new TH1D("VbbHcc_tags_Aplanarity_stack_1","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(1,1.332833);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(2,0.9394922);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(3,0.5723082);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(4,0.3877468);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(5,0.2540039);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(6,0.2297829);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(7,0.1437218);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(8,0.1022312);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(9,0.0741146);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(10,0.06103549);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(11,0.0411682);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(12,0.01198039);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(13,0.02754086);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(14,0.01431355);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(15,0.009908892);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(16,0.005452582);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(17,0.007056621);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(18,0.002751889);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(19,0.002283738);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(1,0.0419465);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(2,0.0351364);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(3,0.02772318);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(4,0.02317165);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(5,0.0181635);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(6,0.01757849);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(7,0.01391807);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(8,0.01172303);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(9,0.0101461);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(10,0.009168405);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(11,0.007243143);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(12,0.003887335);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(13,0.005955434);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(14,0.004355401);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(15,0.003253462);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(16,0.002745446);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(17,0.003162486);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(18,0.001946546);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(19,0.001658108);
   VbbHcc_tags_Aplanarity_stack_1->SetEntries(3477);

   ci = TColor::GetColor("#cc0000");
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
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(1,0.5305645);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(2,0.4026846);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(3,0.2599189);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(4,0.1774058);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(5,0.1310968);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(6,0.08904438);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(7,0.05724498);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(8,0.04048917);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(9,0.03149419);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(10,0.02028304);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(11,0.01509835);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(12,0.009418684);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(13,0.007390559);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(14,0.004543111);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(15,0.001835993);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(16,0.001651291);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(17,0.0006881303);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(18,0.0001252336);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(19,0.000577571);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(20,0.0002655792);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(21,0.0003374902);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(1,0.009419995);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(2,0.008263026);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(3,0.00663207);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(4,0.00548911);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(5,0.004737393);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(6,0.003888632);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(7,0.003139406);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(8,0.002640034);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(9,0.00234832);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(10,0.00186096);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(11,0.001602711);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(12,0.001276905);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(13,0.001139614);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(14,0.000892677);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(15,0.0005577847);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(16,0.0005264526);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(17,0.0003506705);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(18,0.0001252336);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(19,0.0002960647);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(20,0.0001941802);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(21,0.0002398897);
   VbbHcc_tags_Aplanarity_stack_2->SetEntries(11007);

   ci = TColor::GetColor("#00cc00");
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
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
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

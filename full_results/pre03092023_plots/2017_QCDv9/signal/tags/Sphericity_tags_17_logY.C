#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_tags_17_logY()
{
//=========Macro generated from canvas: Sphericity_tags_17/Sphericity_tags_17
//=========  (Thu Mar  9 12:19:50 2023) by ROOT version 6.26/06
   TCanvas *Sphericity_tags_17 = new TCanvas("Sphericity_tags_17", "Sphericity_tags_17",0,0,600,600);
   Sphericity_tags_17->SetHighLightColor(2);
   Sphericity_tags_17->Range(-0.2183529,-0.08606826,1.171633,0.6311672);
   Sphericity_tags_17->SetFillColor(0);
   Sphericity_tags_17->SetFillStyle(4000);
   Sphericity_tags_17->SetBorderMode(0);
   Sphericity_tags_17->SetBorderSize(2);
   Sphericity_tags_17->SetLogy();
   Sphericity_tags_17->SetLeftMargin(0.15709);
   Sphericity_tags_17->SetRightMargin(0.1234783);
   Sphericity_tags_17->SetBottomMargin(0.12);
   Sphericity_tags_17->SetFrameFillStyle(1000);
   Sphericity_tags_17->SetFrameBorderMode(0);
   Sphericity_tags_17->SetFrameFillStyle(1000);
   Sphericity_tags_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1e+10);
   
   TH1F *st_stack_58 = new TH1F("st_stack_58","",25,0,1);
   st_stack_58->SetMinimum(-2.417376e+09);
   st_stack_58->SetMaximum(-0.5619407);
   st_stack_58->SetDirectory(0);
   st_stack_58->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_58->SetLineColor(ci);
   st_stack_58->GetXaxis()->SetTitle("Sphericity");
   st_stack_58->GetXaxis()->SetRange(1,25);
   st_stack_58->GetXaxis()->SetLabelFont(42);
   st_stack_58->GetXaxis()->SetTitleOffset(1);
   st_stack_58->GetXaxis()->SetTitleFont(42);
   st_stack_58->GetYaxis()->SetTitle("Event/0.04");
   st_stack_58->GetYaxis()->SetLabelFont(42);
   st_stack_58->GetYaxis()->SetTitleSize(0.037);
   st_stack_58->GetYaxis()->SetTitleFont(42);
   st_stack_58->GetZaxis()->SetLabelFont(42);
   st_stack_58->GetZaxis()->SetTitleOffset(1);
   st_stack_58->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_58);
   
   
   TH1D *VbbHcc_tags_Sphericity_stack_1 = new TH1D("VbbHcc_tags_Sphericity_stack_1","",25,0,1);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(1,0.04518638);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(2,0.1617467);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(3,0.3224874);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(4,0.3356461);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(5,0.3803898);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(6,0.3847219);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(7,0.3458218);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(8,0.2975362);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(9,0.2690246);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(10,0.269468);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(11,0.2542143);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(12,0.2197554);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(13,0.1922403);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(14,0.1845118);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(15,0.1616813);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(16,0.1162966);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(17,0.1116549);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(18,0.07453913);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(19,0.05410244);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(20,0.02529865);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(21,0.01041668);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(22,0.00298611);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(1,0.007361292);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(2,0.01424817);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(3,0.02037676);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(4,0.02109475);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(5,0.02237593);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(6,0.02309712);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(7,0.02151313);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(8,0.01998402);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(9,0.01888925);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(10,0.01868283);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(11,0.01870941);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(12,0.01698461);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(13,0.01609237);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(14,0.01556618);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(15,0.01477262);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(16,0.01263176);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(17,0.01240419);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(18,0.009865925);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(19,0.00856435);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(20,0.005772877);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(21,0.003714176);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(22,0.002114927);
   VbbHcc_tags_Sphericity_stack_1->SetEntries(3477);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Sphericity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_1->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_1,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_2 = new TH1D("VbbHcc_tags_Sphericity_stack_2","",25,0,1);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(1,0.02253321);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(2,0.08118571);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(3,0.1238675);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(4,0.152905);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(5,0.1444213);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(6,0.1480816);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(7,0.1444708);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(8,0.1405924);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(9,0.1423469);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(10,0.1179911);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(11,0.1065188);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(12,0.0898899);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(13,0.07840924);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(14,0.08090913);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(15,0.05945507);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(16,0.0464138);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(17,0.04258647);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(18,0.03016608);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(19,0.01888865);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(20,0.006903221);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(21,0.002666504);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(22,0.0005361049);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(23,0.0004198321);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(1,0.001866348);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(2,0.003640731);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(3,0.004570584);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(4,0.005067029);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(5,0.004939085);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(6,0.005016251);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(7,0.004951748);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(8,0.004874437);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(9,0.004925458);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(10,0.004502901);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(11,0.004260304);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(12,0.003910766);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(13,0.003644919);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(14,0.003708569);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(15,0.003194528);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(16,0.002809514);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(17,0.002694223);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(18,0.002275173);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(19,0.001797814);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(20,0.001085825);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(21,0.0006623158);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(22,0.0003098187);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(23,0.0002481745);
   VbbHcc_tags_Sphericity_stack_2->SetEntries(11007);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Sphericity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_2->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_1","ZHcc","F");

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
   Sphericity_tags_17->Modified();
   Sphericity_tags_17->cd();
   Sphericity_tags_17->SetSelected(Sphericity_tags_17);
}

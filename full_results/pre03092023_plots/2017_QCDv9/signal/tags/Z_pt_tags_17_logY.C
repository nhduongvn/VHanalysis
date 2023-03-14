#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_pt_tags_17_logY()
{
//=========Macro generated from canvas: Z_pt_tags_17/Z_pt_tags_17
//=========  (Thu Mar  9 12:19:49 2023) by ROOT version 6.26/06
   TCanvas *Z_pt_tags_17 = new TCanvas("Z_pt_tags_17", "Z_pt_tags_17",0,0,600,600);
   Z_pt_tags_17->SetHighLightColor(2);
   Z_pt_tags_17->Range(37.97653,-4.252111,1705.96,-0.4059574);
   Z_pt_tags_17->SetFillColor(0);
   Z_pt_tags_17->SetFillStyle(4000);
   Z_pt_tags_17->SetBorderMode(0);
   Z_pt_tags_17->SetBorderSize(2);
   Z_pt_tags_17->SetLogy();
   Z_pt_tags_17->SetLeftMargin(0.15709);
   Z_pt_tags_17->SetRightMargin(0.1234783);
   Z_pt_tags_17->SetBottomMargin(0.12);
   Z_pt_tags_17->SetFrameFillStyle(1000);
   Z_pt_tags_17->SetFrameBorderMode(0);
   Z_pt_tags_17->SetFrameFillStyle(1000);
   Z_pt_tags_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   
   TH1F *st_stack_10 = new TH1F("st_stack_10","",40,0,2000);
   st_stack_10->SetMinimum(52.69542);
   st_stack_10->SetMaximum(0.1619672);
   st_stack_10->SetDirectory(0);
   st_stack_10->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_10->SetLineColor(ci);
   st_stack_10->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   st_stack_10->GetXaxis()->SetRange(7,30);
   st_stack_10->GetXaxis()->SetLabelFont(42);
   st_stack_10->GetXaxis()->SetTitleOffset(1);
   st_stack_10->GetXaxis()->SetTitleFont(42);
   st_stack_10->GetYaxis()->SetTitle("Event/50.0");
   st_stack_10->GetYaxis()->SetLabelFont(42);
   st_stack_10->GetYaxis()->SetTitleSize(0.037);
   st_stack_10->GetYaxis()->SetTitleFont(42);
   st_stack_10->GetZaxis()->SetLabelFont(42);
   st_stack_10->GetZaxis()->SetTitleOffset(1);
   st_stack_10->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_10);
   
   
   TH1D *VbbHcc_tags_Z_pt_stack_1 = new TH1D("VbbHcc_tags_Z_pt_stack_1","",40,0,2000);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(1,0.3685877);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(2,0.8167886);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(3,1.05419);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(4,0.7751291);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(5,0.5363725);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(6,0.291014);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(7,0.1729524);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(8,0.1039875);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(9,0.05054573);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(10,0.02062055);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(11,0.008160813);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(12,0.004041364);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(13,0.005079319);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(14,0.003742343);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(15,0.004449076);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(18,0.001363075);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(26,0.001407057);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(27,0.001295456);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(1,0.02228125);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(2,0.03292195);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(3,0.03733902);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(4,0.03223095);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(5,0.02670434);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(6,0.01972179);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(7,0.01496958);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(8,0.01161);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(9,0.008112479);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(10,0.005374695);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(11,0.003908016);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(12,0.002337211);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(13,0.002594198);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(14,0.002161651);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(15,0.002580843);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(18,0.001363075);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(26,0.001407057);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(27,0.001295456);
   VbbHcc_tags_Z_pt_stack_1->SetEntries(3477);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_pt_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_Z_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_pt_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_pt_stack_2 = new TH1D("VbbHcc_tags_Z_pt_stack_2","",40,0,2000);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(1,0.1169906);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(2,0.2744552);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(3,0.4708066);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(4,0.396058);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(5,0.2535024);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(6,0.1371144);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(7,0.06667673);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(8,0.04031219);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(9,0.01478578);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(10,0.006047399);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(11,0.001854723);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(12,0.001217481);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(13,0.001017286);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(14,0.0006271813);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(15,0.0001244171);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(16,0.0002210379);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(21,0.0001685988);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(26,0.0001783086);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(1,0.004437974);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(2,0.006835008);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(3,0.008949312);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(4,0.008186452);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(5,0.006566739);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(6,0.004777015);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(7,0.003319471);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(8,0.002616011);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(9,0.001560421);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(10,0.001010289);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(11,0.0005641449);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(12,0.0004441303);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(13,0.0004232895);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(14,0.0003172743);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(15,0.0001244171);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(16,0.0002210379);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(21,0.0001685988);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(26,0.0001783086);
   VbbHcc_tags_Z_pt_stack_2->SetEntries(11007);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_pt_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_Z_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_pt_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_pt_stack_1","ZHcc","F");

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
   Z_pt_tags_17->Modified();
   Z_pt_tags_17->cd();
   Z_pt_tags_17->SetSelected(Z_pt_tags_17);
}
